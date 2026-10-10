// BBGPlayerController.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BBGPlayerController.generated.h"

UCLASS()
class BASEBALLGAME_API ABBGPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    // 게임 시작 시 최초 1회 호출 및 공지 위젯 생성
    virtual void BeginPlay() override;

    // 서버와 클라이언트 간 네트워크 변수 동기화 설정
    virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

    // 클라이언트가 입력한 숫자 값을 서버로 전송
    UFUNCTION(Server, Reliable, WithValidation)
    void ServerSubmitGuess(const FString& GuessStr);

    // 서버의 텍스트 메세지를 특정 클라이언트 화면에 출력
    UFUNCTION(Client, Reliable)
    void ClientShowMessage(const FString& Message);

    // 승리 및 무승부 공지를 클라이언트 화면에 출력
    UFUNCTION(Client, Reliable)
    void ClientShowAnnouncement(const FString& AnnouncementMsg);

    // 서버 변경 시 클라이언트 위젯에 자동 동기화되는 공지 텍스트 변수
    UPROPERTY(Replicated, BlueprintReadOnly)
    FText NotificationText;

protected:
    // 블루프린트에서 지정할 공지 위젯 클래스
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<class UUserWidget> NotificationTextWidgetClass;

    // 화면에 생성된 공지 위젯 인스턴스 보관
    UPROPERTY()
    TObjectPtr<UUserWidget> NotificationTextWidgetInstance;
};