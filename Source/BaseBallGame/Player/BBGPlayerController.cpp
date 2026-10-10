// BBGPlayerController.cpp
#include "Player/BBGPlayerController.h"
#include "Game/BBGGameModeBase.h"
#include "Net/UnrealNetwork.h"
#include "Blueprint/UserWidget.h"

void ABBGPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // 로컬 컨트롤러인 경우에만 UI 생성
    if (!IsLocalController()) return;

    // 블루프린트에 지정된 클래스로 공지 위젯 생성 및 화면 추가
    if (NotificationTextWidgetClass)
    {
        NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
        if (NotificationTextWidgetInstance)
        {
            NotificationTextWidgetInstance->AddToViewport();
        }
    }
}

bool ABBGPlayerController::ServerSubmitGuess_Validate(const FString& GuessStr)
{
    // 입력값 무조건 승인
    return true;
}

void ABBGPlayerController::ServerSubmitGuess_Implementation(const FString& GuessStr)
{
    // 게임모드 인스턴스 획득 후 입력값 판정 로직 실행
    ABBGGameModeBase* GameMode = GetWorld()->GetAuthGameMode<ABBGGameModeBase>();
    if (GameMode)
    {
        GameMode->ProcessPlayerGuess(this, GuessStr);
    }
}

void ABBGPlayerController::ClientShowMessage_Implementation(const FString& Message)
{
    // 5초간 메세지 출력
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Message);
    }
}

void ABBGPlayerController::ClientShowAnnouncement_Implementation(const FString& AnnouncementMsg)
{
    // 10초간 공지 출력
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, AnnouncementMsg);
    }
}

void ABBGPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // NotificationText 변수를 서버와 클라이언트 간 동기화 대상으로 지정
    DOREPLIFETIME(ABBGPlayerController, NotificationText);
}