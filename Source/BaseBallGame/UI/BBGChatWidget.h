// BBGChatWidget.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BBGChatWidget.generated.h"

// 채팅 입력을 처리하는 UI 위젯 클래스
UCLASS()
class BASEBALLGAME_API UBBGChatWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    // UI 화면 초기 생성 시 자동 호출
    virtual void NativeConstruct() override;

    // 블루프린트 내 동일한 이름의 텍스트 박스 컴포넌트와 자동 연결
    UPROPERTY(meta = (BindWidget))
    class UEditableTextBox* EditableTextBox_ChatInput;

    // 텍스트 박스에서 엔터키 입력 시 실행
    UFUNCTION()
    void OnChatInputCommitted(const FText& Text, ETextCommit::Type CommitMethod);
};