// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBallGame/Game/BBGGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGGameModeBase() {}

// Begin Cross Module References
BASEBALLGAME_API UClass* Z_Construct_UClass_ABBGGameModeBase();
BASEBALLGAME_API UClass* Z_Construct_UClass_ABBGGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BaseBallGame();
// End Cross Module References

// Begin Class ABBGGameModeBase
void ABBGGameModeBase::StaticRegisterNativesABBGGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGGameModeBase);
UClass* Z_Construct_UClass_ABBGGameModeBase_NoRegister()
{
	return ABBGGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABBGGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/BBGGameModeBase.h" },
		{ "ModuleRelativePath", "Game/BBGGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABBGGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGGameModeBase_Statics::ClassParams = {
	&ABBGGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABBGGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGGameModeBase.OuterSingleton, Z_Construct_UClass_ABBGGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGGameModeBase.OuterSingleton;
}
template<> BASEBALLGAME_API UClass* StaticClass<ABBGGameModeBase>()
{
	return ABBGGameModeBase::StaticClass();
}
ABBGGameModeBase::ABBGGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGGameModeBase);
ABBGGameModeBase::~ABBGGameModeBase() {}
// End Class ABBGGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGGameModeBase, ABBGGameModeBase::StaticClass, TEXT("ABBGGameModeBase"), &Z_Registration_Info_UClass_ABBGGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGGameModeBase), 913733842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_2367210031(TEXT("/Script/BaseBallGame"),
	Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
