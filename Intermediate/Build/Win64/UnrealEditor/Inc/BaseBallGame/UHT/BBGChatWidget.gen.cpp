// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBallGame/UI/BBGChatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGChatWidget() {}

// Begin Cross Module References
BASEBALLGAME_API UClass* Z_Construct_UClass_UBBGChatWidget();
BASEBALLGAME_API UClass* Z_Construct_UClass_UBBGChatWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BaseBallGame();
// End Cross Module References

// Begin Class UBBGChatWidget Function OnChatInputCommitted
struct Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics
{
	struct BBGChatWidget_eventOnChatInputCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x97\x94\xed\x84\xb0\xed\x82\xa4\xeb\xa5\xbc \xeb\x88\x8c\xeb\xa0\x80\xec\x9d\x84 \xeb\x95\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "UI/BBGChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\x94\xed\x84\xb0\xed\x82\xa4\xeb\xa5\xbc \xeb\x88\x8c\xeb\xa0\x80\xec\x9d\x84 \xeb\x95\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGChatWidget_eventOnChatInputCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGChatWidget_eventOnChatInputCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBBGChatWidget, nullptr, "OnChatInputCommitted", nullptr, nullptr, Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::BBGChatWidget_eventOnChatInputCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::BBGChatWidget_eventOnChatInputCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBBGChatWidget::execOnChatInputCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UBBGChatWidget Function OnChatInputCommitted

// Begin Class UBBGChatWidget
void UBBGChatWidget::StaticRegisterNativesUBBGChatWidget()
{
	UClass* Class = UBBGChatWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputCommitted", &UBBGChatWidget::execOnChatInputCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBBGChatWidget);
UClass* Z_Construct_UClass_UBBGChatWidget_NoRegister()
{
	return UBBGChatWidget::StaticClass();
}
struct Z_Construct_UClass_UBBGChatWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BBGChatWidget.h" },
		{ "ModuleRelativePath", "UI/BBGChatWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TIL\xec\x97\x90\xec\x84\x9c \xeb\xb0\xb0\xec\x9a\xb4 BindWidget! \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xeb\x98\x91\xea\xb0\x99\xec\x9d\x80 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x98 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\xa5\xbc \xea\xb0\x95\xec\xa0\x9c\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BBGChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TIL\xec\x97\x90\xec\x84\x9c \xeb\xb0\xb0\xec\x9a\xb4 BindWidget! \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xeb\x98\x91\xea\xb0\x99\xec\x9d\x80 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x98 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\xa5\xbc \xea\xb0\x95\xec\xa0\x9c\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBBGChatWidget_OnChatInputCommitted, "OnChatInputCommitted" }, // 2702300955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBBGChatWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBGChatWidget_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBGChatWidget, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBBGChatWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBGChatWidget_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBBGChatWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBBGChatWidget_Statics::ClassParams = {
	&UBBGChatWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBBGChatWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBBGChatWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBBGChatWidget()
{
	if (!Z_Registration_Info_UClass_UBBGChatWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBBGChatWidget.OuterSingleton, Z_Construct_UClass_UBBGChatWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBBGChatWidget.OuterSingleton;
}
template<> BASEBALLGAME_API UClass* StaticClass<UBBGChatWidget>()
{
	return UBBGChatWidget::StaticClass();
}
UBBGChatWidget::UBBGChatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBBGChatWidget);
UBBGChatWidget::~UBBGChatWidget() {}
// End Class UBBGChatWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBBGChatWidget, UBBGChatWidget::StaticClass, TEXT("UBBGChatWidget"), &Z_Registration_Info_UClass_UBBGChatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBBGChatWidget), 2107116185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_471418437(TEXT("/Script/BaseBallGame"),
	Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
