// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBallGame/Player/BBGPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGPlayerState() {}

// Begin Cross Module References
BASEBALLGAME_API UClass* Z_Construct_UClass_ABBGPlayerState();
BASEBALLGAME_API UClass* Z_Construct_UClass_ABBGPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_BaseBallGame();
// End Cross Module References

// Begin Class ABBGPlayerState Function GetCurrentAttempts
struct Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics
{
	struct BBGPlayerState_eventGetCurrentAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerState_eventGetCurrentAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerState, nullptr, "GetCurrentAttempts", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::BBGPlayerState_eventGetCurrentAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::BBGPlayerState_eventGetCurrentAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerState::execGetCurrentAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAttempts();
	P_NATIVE_END;
}
// End Class ABBGPlayerState Function GetCurrentAttempts

// Begin Class ABBGPlayerState Function GetMaxAttempts
struct Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics
{
	struct BBGPlayerState_eventGetMaxAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerState_eventGetMaxAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerState, nullptr, "GetMaxAttempts", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::BBGPlayerState_eventGetMaxAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::BBGPlayerState_eventGetMaxAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerState::execGetMaxAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxAttempts();
	P_NATIVE_END;
}
// End Class ABBGPlayerState Function GetMaxAttempts

// Begin Class ABBGPlayerState
void ABBGPlayerState::StaticRegisterNativesABBGPlayerState()
{
	UClass* Class = ABBGPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentAttempts", &ABBGPlayerState::execGetCurrentAttempts },
		{ "GetMaxAttempts", &ABBGPlayerState::execGetMaxAttempts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGPlayerState);
UClass* Z_Construct_UClass_ABBGPlayerState_NoRegister()
{
	return ABBGPlayerState::StaticClass();
}
struct Z_Construct_UClass_ABBGPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/BBGPlayerState.h" },
		{ "ModuleRelativePath", "Player/BBGPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttempts_MetaData[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttempts_MetaData[] = {
		{ "Category", "BBGPlayerState" },
		{ "ModuleRelativePath", "Player/BBGPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABBGPlayerState_GetCurrentAttempts, "GetCurrentAttempts" }, // 3031618198
		{ &Z_Construct_UFunction_ABBGPlayerState_GetMaxAttempts, "GetMaxAttempts" }, // 4273688154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABBGPlayerState_Statics::NewProp_CurrentAttempts = { "CurrentAttempts", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerState, CurrentAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttempts_MetaData), NewProp_CurrentAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABBGPlayerState_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerState, MaxAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttempts_MetaData), NewProp_MaxAttempts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBGPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerState_Statics::NewProp_CurrentAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerState_Statics::NewProp_MaxAttempts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBGPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGPlayerState_Statics::ClassParams = {
	&ABBGPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABBGPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGPlayerState()
{
	if (!Z_Registration_Info_UClass_ABBGPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGPlayerState.OuterSingleton, Z_Construct_UClass_ABBGPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGPlayerState.OuterSingleton;
}
template<> BASEBALLGAME_API UClass* StaticClass<ABBGPlayerState>()
{
	return ABBGPlayerState::StaticClass();
}
void ABBGPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentAttempts(TEXT("CurrentAttempts"));
	const bool bIsValid = true
		&& Name_CurrentAttempts == ClassReps[(int32)ENetFields_Private::CurrentAttempts].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABBGPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGPlayerState);
ABBGPlayerState::~ABBGPlayerState() {}
// End Class ABBGPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGPlayerState, ABBGPlayerState::StaticClass, TEXT("ABBGPlayerState"), &Z_Registration_Info_UClass_ABBGPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGPlayerState), 3022880400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_2759173211(TEXT("/Script/BaseBallGame"),
	Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
