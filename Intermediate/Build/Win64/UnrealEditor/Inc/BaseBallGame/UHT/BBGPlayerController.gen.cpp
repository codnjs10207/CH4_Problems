// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBallGame/Player/BBGPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGPlayerController() {}

// Begin Cross Module References
BASEBALLGAME_API UClass* Z_Construct_UClass_ABBGPlayerController();
BASEBALLGAME_API UClass* Z_Construct_UClass_ABBGPlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BaseBallGame();
// End Cross Module References

// Begin Class ABBGPlayerController Function ClientShowAnnouncement
struct BBGPlayerController_eventClientShowAnnouncement_Parms
{
	FString AnnouncementMsg;
};
static const FName NAME_ABBGPlayerController_ClientShowAnnouncement = FName(TEXT("ClientShowAnnouncement"));
void ABBGPlayerController::ClientShowAnnouncement(const FString& AnnouncementMsg)
{
	BBGPlayerController_eventClientShowAnnouncement_Parms Parms;
	Parms.AnnouncementMsg=AnnouncementMsg;
	UFunction* Func = FindFunctionChecked(NAME_ABBGPlayerController_ClientShowAnnouncement);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnnouncementMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::NewProp_AnnouncementMsg = { "AnnouncementMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerController_eventClientShowAnnouncement_Parms, AnnouncementMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnouncementMsg_MetaData), NewProp_AnnouncementMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::NewProp_AnnouncementMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerController, nullptr, "ClientShowAnnouncement", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::PropPointers), sizeof(BBGPlayerController_eventClientShowAnnouncement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::Function_MetaDataParams) };
static_assert(sizeof(BBGPlayerController_eventClientShowAnnouncement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerController::execClientShowAnnouncement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AnnouncementMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientShowAnnouncement_Implementation(Z_Param_AnnouncementMsg);
	P_NATIVE_END;
}
// End Class ABBGPlayerController Function ClientShowAnnouncement

// Begin Class ABBGPlayerController Function ClientShowMessage
struct BBGPlayerController_eventClientShowMessage_Parms
{
	FString Message;
};
static const FName NAME_ABBGPlayerController_ClientShowMessage = FName(TEXT("ClientShowMessage"));
void ABBGPlayerController::ClientShowMessage(const FString& Message)
{
	BBGPlayerController_eventClientShowMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ABBGPlayerController_ClientShowMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerController_eventClientShowMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerController, nullptr, "ClientShowMessage", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::PropPointers), sizeof(BBGPlayerController_eventClientShowMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(BBGPlayerController_eventClientShowMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerController::execClientShowMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientShowMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ABBGPlayerController Function ClientShowMessage

// Begin Class ABBGPlayerController Function ServerSubmitGuess
struct BBGPlayerController_eventServerSubmitGuess_Parms
{
	FString GuessStr;
};
static const FName NAME_ABBGPlayerController_ServerSubmitGuess = FName(TEXT("ServerSubmitGuess"));
void ABBGPlayerController::ServerSubmitGuess(const FString& GuessStr)
{
	BBGPlayerController_eventServerSubmitGuess_Parms Parms;
	Parms.GuessStr=GuessStr;
	UFunction* Func = FindFunctionChecked(NAME_ABBGPlayerController_ServerSubmitGuess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuessStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GuessStr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::NewProp_GuessStr = { "GuessStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerController_eventServerSubmitGuess_Parms, GuessStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuessStr_MetaData), NewProp_GuessStr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::NewProp_GuessStr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerController, nullptr, "ServerSubmitGuess", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::PropPointers), sizeof(BBGPlayerController_eventServerSubmitGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(BBGPlayerController_eventServerSubmitGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerController::execServerSubmitGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GuessStr);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSubmitGuess_Validate(Z_Param_GuessStr))
	{
		RPC_ValidateFailed(TEXT("ServerSubmitGuess_Validate"));
		return;
	}
	P_THIS->ServerSubmitGuess_Implementation(Z_Param_GuessStr);
	P_NATIVE_END;
}
// End Class ABBGPlayerController Function ServerSubmitGuess

// Begin Class ABBGPlayerController
void ABBGPlayerController::StaticRegisterNativesABBGPlayerController()
{
	UClass* Class = ABBGPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientShowAnnouncement", &ABBGPlayerController::execClientShowAnnouncement },
		{ "ClientShowMessage", &ABBGPlayerController::execClientShowMessage },
		{ "ServerSubmitGuess", &ABBGPlayerController::execServerSubmitGuess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGPlayerController);
UClass* Z_Construct_UClass_ABBGPlayerController_NoRegister()
{
	return ABBGPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABBGPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BBGPlayerController.h" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "BBGPlayerController" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "BBGPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xec\xa7\x80 \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\xa7\x80\xec\xa0\x95\xed\x95\xa0 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xec\xa7\x80 \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\xa7\x80\xec\xa0\x95\xed\x95\xa0 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xeb\x9d\x84\xec\x9a\xb4 \xea\xb3\xb5\xec\xa7\x80 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\x84 \xea\xb8\xb0\xec\x96\xb5\xed\x95\xb4\xeb\x91\x98 \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xeb\x9d\x84\xec\x9a\xb4 \xea\xb3\xb5\xec\xa7\x80 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\x84 \xea\xb8\xb0\xec\x96\xb5\xed\x95\xb4\xeb\x91\x98 \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABBGPlayerController_ClientShowAnnouncement, "ClientShowAnnouncement" }, // 2701600937
		{ &Z_Construct_UFunction_ABBGPlayerController_ClientShowMessage, "ClientShowMessage" }, // 3219532173
		{ &Z_Construct_UFunction_ABBGPlayerController_ServerSubmitGuess, "ServerSubmitGuess" }, // 3776989605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBGPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGPlayerController_Statics::ClassParams = {
	&ABBGPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGPlayerController()
{
	if (!Z_Registration_Info_UClass_ABBGPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGPlayerController.OuterSingleton, Z_Construct_UClass_ABBGPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGPlayerController.OuterSingleton;
}
template<> BASEBALLGAME_API UClass* StaticClass<ABBGPlayerController>()
{
	return ABBGPlayerController::StaticClass();
}
void ABBGPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABBGPlayerController"));
}
ABBGPlayerController::ABBGPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGPlayerController);
ABBGPlayerController::~ABBGPlayerController() {}
// End Class ABBGPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGPlayerController, ABBGPlayerController::StaticClass, TEXT("ABBGPlayerController"), &Z_Registration_Info_UClass_ABBGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGPlayerController), 1956781559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_852674881(TEXT("/Script/BaseBallGame"),
	Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
