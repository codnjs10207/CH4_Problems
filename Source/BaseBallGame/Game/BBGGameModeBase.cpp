// BBGGameModeBase.cpp
#include "Game/BBGGameModeBase.h"
#include "Player/BBGPlayerController.h"
#include "Player/BBGPlayerState.h"

void ABBGGameModeBase::OnPostLogin(AController* NewPlayer)
{
    Super::OnPostLogin(NewPlayer);

    // 접속 플레이어 상태 정보 획득
    if (ABBGPlayerState* PS = NewPlayer->GetPlayerState<ABBGPlayerState>())
    {
        // 총 접속 인원 기반 이름 조립
        FString NewName = FString::Printf(TEXT("Player%d"), GetNumPlayers());

        // 플레이어 닉네임 설정
        PS->SetPlayerName(NewName);
    }
}

void ABBGGameModeBase::GenerateRandomNumbers()
{
    // 1~9 배열 생성 및 무작위로 해놓기
    TArray<int32> Numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    Numbers.Sort([](int32 A, int32 B) { return FMath::RandBool(); });

    // 앞 3자리 숫자 추출 후 문자열 조합
    SecretAnswer = FString::Printf(TEXT("%d%d%d"), Numbers[0], Numbers[1], Numbers[2]);

    // 서버 콘솔에 정답 로그 출력
    UE_LOG(LogTemp, Warning, TEXT("[Server] Secret Answer Generated : %s"), *SecretAnswer);
}

bool ABBGGameModeBase::IsValidInput(const FString& Input)
{
    // 길이 3자리 제한 검사
    if (Input.Len() != 3) return false;

    // 숫자로만 구성되었는지 검사
    if (!Input.IsNumeric()) return false;

    // 숫자 0 포함 여부 검사
    if (Input.Contains(TEXT("0"))) return false;

    // 각 자리 숫자 중복 여부 검사
    if (Input[0] == Input[1] || Input[1] == Input[2] || Input[0] == Input[2]) return false;

    return true;
}

FString ABBGGameModeBase::CalculateResult(const FString& Input, int32& OutStrike)
{
    // 스트라이크 및 볼 개수 초기화
    OutStrike = 0;
    int32 Ball = 0;

    // 3자리 숫자 순회 검사
    for (int i = 0; i < 3; i++)
    {
        // 위치와 숫자 모두 일치 시 스트라이크 증가
        if (Input[i] == SecretAnswer[i])
        {
            OutStrike++;
        }
        // 위치는 다르나 숫자가 존재할 시 볼 증가
        else if (SecretAnswer.Contains(FString::Printf(TEXT("%c"), Input[i])))
        {
            Ball++;
        }
    }

    // 일치 숫자 없을 시 OUT 텍스트 반환
    if (OutStrike == 0 && Ball == 0) return TEXT("OUT");

    // 계산된 스트라이크 및 볼 결과 문자열 반환
    return FString::Printf(TEXT("%dS %dB"), OutStrike, Ball);
}

void ABBGGameModeBase::ProcessPlayerGuess(ABBGPlayerController* PC, const FString& GuessStr)
{
    // 컨트롤러 유효성 검사
    if (!PC) return;

    // 플레이어 상태 및 잔여 기회 검사
    ABBGPlayerState* PS = PC->GetPlayerState<ABBGPlayerState>();
    if (!PS || !PS->HasAttemptsLeft()) return;

    // 입력값 검증 실패 시 당사자에게만 에러 출력 후 로직 종료
    if (!IsValidInput(GuessStr))
    {
        PC->ClientShowMessage(TEXT("잘못된 입력입니다. 1~9 사이의 중복 없는 3자리 숫자를 입력하세요."));
        return;
    }

    // 시도 횟수 차감
    PS->IncrementAttempt();

    // 입력값 판정 및 결과 문자열 획득
    int32 Strikes = 0;
    FString ResultStr = CalculateResult(GuessStr, Strikes);

    // 전체 출력용 결과 텍스트 포맷 조립
    FString MsgToClient = FString::Printf(TEXT("[%s] [%d / %d] %s -> %s"),
        *PS->GetPlayerName(), PS->GetCurrentAttempts(), PS->GetMaxAttempts(), *GuessStr, *ResultStr);

    // 접속 중인 전체 클라이언트 화면에 메세지 출력
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ABBGPlayerController* LoopPC = Cast<ABBGPlayerController>(It->Get());
        if (LoopPC)
        {
            LoopPC->ClientShowMessage(MsgToClient);
        }
    }

    // 3 스트라이크 달성 시 승리 공지 및 게임 초기화
    if (Strikes == 3)
    {
        AnnounceToAll(FString::Printf(TEXT("Winner는 %s 입니다! (정답: %s)"), *PS->GetPlayerName(), *SecretAnswer));
        ResetGame();
        return;
    }

    // 전체 인원 기회 소진 여부 검사 로직 호출
    CheckGameEndCondition();
}

void ABBGGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    // 서버 시작 직후 정답 난수 최초 생성
    GenerateRandomNumbers();
}

void ABBGGameModeBase::CheckGameEndCondition()
{
    // 무승부 판별 상태 변수
    bool bIsDraw = true;

    // 전체 플레이어 잔여 기회 순회 검사
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ABBGPlayerController* PC = Cast<ABBGPlayerController>(It->Get());
        if (PC)
        {
            ABBGPlayerState* PS = PC->GetPlayerState<ABBGPlayerState>();

            // 기회 남은 플레이어 발견 시 무승부 상태 해제
            if (PS && PS->HasAttemptsLeft())
            {
                bIsDraw = false;
                break;
            }
        }
    }

    // 전원 기회 소진 상태일 경우 무승부 공지 및 초기화
    if (bIsDraw)
    {
        AnnounceToAll(TEXT("모든 기회 소진. 무승부입니다!"));
        ResetGame();
    }
}

void ABBGGameModeBase::ResetGame()
{
    // 신규 정답 난수 생성
     GenerateRandomNumbers(); 

    // 전체 클라이언트 시도 횟수 데이터 초기화
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ABBGPlayerController* PC = Cast<ABBGPlayerController>(It->Get());
        if (PC)
        {
            ABBGPlayerState* PS = PC->GetPlayerState<ABBGPlayerState>();
            if (PS)
            {
                // 플레이어 횟수 0으로 되돌리기
                PS->ResetAttempt();
            }
        }
    }
}

void ABBGGameModeBase::AnnounceToAll(const FString& Message)
{
    // 전체 클라이언트 공지용 UI 텍스트 변수 업데이트
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ABBGPlayerController* PC = Cast<ABBGPlayerController>(It->Get());
        if (PC)
        {
            PC->NotificationText = FText::FromString(Message);
        }
    }
}