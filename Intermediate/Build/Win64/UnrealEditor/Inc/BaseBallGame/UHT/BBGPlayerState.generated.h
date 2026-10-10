// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BBGPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAME_BBGPlayerState_generated_h
#error "BBGPlayerState.generated.h already included, missing '#pragma once' in BBGPlayerState.h"
#endif
#define BASEBALLGAME_BBGPlayerState_generated_h

#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxAttempts); \
	DECLARE_FUNCTION(execGetCurrentAttempts);


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGPlayerState(); \
	friend struct Z_Construct_UClass_ABBGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABBGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBallGame"), NO_API) \
	DECLARE_SERIALIZER(ABBGPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAttempts=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentAttempts	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGPlayerState(ABBGPlayerState&&); \
	ABBGPlayerState(const ABBGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABBGPlayerState) \
	NO_API virtual ~ABBGPlayerState();


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_7_PROLOG
#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAME_API UClass* StaticClass<class ABBGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
