// BBGPlayerState.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BBGPlayerState.generated.h"

// 플레이어 고유의 상태 데이터(시도 횟수 등) 보관 및 동기화 클래스
UCLASS()
class BASEBALLGAME_API ABBGPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    ABBGPlayerState();

    // 서버와 클라이언트 간 네트워크 변수 동기화 설정
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // 현재 시도 횟수 반환
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentAttempts() const { return CurrentAttempts; }

    // 최대 시도 가능 횟수 반환
    UFUNCTION(BlueprintCallable)
    int32 GetMaxAttempts() const { return MaxAttempts; }

    // 숫자 입력 시 현재 시도 횟수 1 증가
    void IncrementAttempt() { CurrentAttempts++; }

    // 현재 시도 횟수 0으로 초기화
    void ResetAttempts() { CurrentAttempts = 0; }

    // 남은 입력 기회 존재 여부
    bool HasAttemptsLeft() const { return CurrentAttempts < MaxAttempts; }

    // 현재 시도 횟수 0으로 초기화 선언
    void ResetAttempt();

protected:
    // 클라이언트에게 실시간 동기화되는 현재 시도 횟수 변수
    UPROPERTY(Replicated)
    int32 CurrentAttempts;

    // 블루프린트에서 편집 가능한 게임 최대 시도 횟수 (기본값 3)
    UPROPERTY(EditDefaultsOnly)
    int32 MaxAttempts = 3;
};