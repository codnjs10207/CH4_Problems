// BBGPlayerState.cpp
#include "Player/BBGPlayerState.h"
#include "Net/UnrealNetwork.h"

// 생성자 및 초기값 설정
ABBGPlayerState::ABBGPlayerState()
{
    // 네트워크 복제 활성화
    bReplicates = true;

    // 초기 시도 횟수 0 설정
    CurrentAttempts = 0;
}

// 서버 및 클라이언트 간 변수 동기화 설정
void ABBGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // CurrentAttempts 변수를 동기화 대상으로 등록
    DOREPLIFETIME(ABBGPlayerState, CurrentAttempts);
}

// 시도 횟수 초기화 로직
void ABBGPlayerState::ResetAttempt()
{
    // 현재 시도 횟수 0 설정
    CurrentAttempts = 0;
}