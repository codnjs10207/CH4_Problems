// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/BBGGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAME_BBGGameModeBase_generated_h
#error "BBGGameModeBase.generated.h already included, missing '#pragma once' in BBGGameModeBase.h"
#endif
#define BASEBALLGAME_BBGGameModeBase_generated_h

#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGGameModeBase(); \
	friend struct Z_Construct_UClass_ABBGGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABBGGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBallGame"), NO_API) \
	DECLARE_SERIALIZER(ABBGGameModeBase)


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBGGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGGameModeBase(ABBGGameModeBase&&); \
	ABBGGameModeBase(const ABBGGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBGGameModeBase) \
	NO_API virtual ~ABBGGameModeBase();


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_7_PROLOG
#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAME_API UClass* StaticClass<class ABBGGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_BaseBallGame_Source_BaseBallGame_Game_BBGGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
