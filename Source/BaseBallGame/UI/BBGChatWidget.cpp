// BBGChatWidget.cpp
#include "BBGChatWidget.h"
#include "Components/EditableTextBox.h"
#include "Player/BBGPlayerController.h"

void UBBGChatWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // 텍스트 박스 엔터키 입력 이벤트와 처리 함수 연결
    if (EditableTextBox_ChatInput)
    {
        EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &UBBGChatWidget::OnChatInputCommitted);
    }
}

void UBBGChatWidget::OnChatInputCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    // 엔터키 입력 시에만 내부 로직 실행
    if (CommitMethod == ETextCommit::OnEnter)
    {
        // 현재 UI 소유 플레이어 컨트롤러 획득
        ABBGPlayerController* PC = Cast<ABBGPlayerController>(GetOwningPlayer());
        if (PC)
        {
            // 컨트롤러를 통해 서버로 입력 텍스트 전송
            PC->ServerSubmitGuess(Text.ToString());
        }

        // 전송 완료 후 텍스트 박스 내용 비우기
        EditableTextBox_ChatInput->SetText(FText::GetEmpty());
    }
}