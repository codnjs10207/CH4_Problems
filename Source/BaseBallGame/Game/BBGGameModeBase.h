// BBGGameModeBase.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BBGGameModeBase.generated.h"

// 숫자 야구 게임의 전체 규칙과 서버 로직을 총괄하는 클래스
UCLASS()
class BASEBALLGAME_API ABBGGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    // 게임 시작 시 최초 1회 호출 및 정답 숫자 생성
    virtual void BeginPlay() override;

    // 플레이어의 입력값을 받아 정답 판정
    void ProcessPlayerGuess(class ABBGPlayerController* PC, const FString& GuessStr);

    // 플레이어 서버 접속 시 자동 호출 및 접속 순서에 따른 이름 부여
    virtual void OnPostLogin(AController* NewPlayer) override;

private:
    // 서버 전용 3자리 정답 숫자
    FString SecretAnswer;

    // 1~9 사이의 중복 없는 3자리 난수 생성 및 저장
    void GenerateRandomNumbers();

    // 자릿수, 숫자 구성, 중복 여부 등 입력값 유효성 검사
    bool IsValidInput(const FString& Input);

    // 정답과 비교하여 스트라이크 및 볼 개수 계산 후 문자열 반환
    FString CalculateResult(const FString& Input, int32& OutStrike);

    // 시도 횟수 소진 여부 확인 및 무승부 판정
    void CheckGameEndCondition();

    // 승리 또는 무승부 시 데이터 초기화 및 게임 리셋
    void ResetGame();

    // 모든 플레이어의 화면 중앙에 공지 텍스트 출력
    void AnnounceToAll(const FString& Message);
};