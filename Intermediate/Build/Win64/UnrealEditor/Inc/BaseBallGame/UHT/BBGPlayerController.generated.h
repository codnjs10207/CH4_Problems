// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BBGPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAME_BBGPlayerController_generated_h
#error "BBGPlayerController.generated.h already included, missing '#pragma once' in BBGPlayerController.h"
#endif
#define BASEBALLGAME_BBGPlayerController_generated_h

#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientShowAnnouncement_Implementation(const FString& AnnouncementMsg); \
	virtual void ClientShowMessage_Implementation(const FString& Message); \
	virtual bool ServerSubmitGuess_Validate(const FString& ); \
	virtual void ServerSubmitGuess_Implementation(const FString& GuessStr); \
	DECLARE_FUNCTION(execClientShowAnnouncement); \
	DECLARE_FUNCTION(execClientShowMessage); \
	DECLARE_FUNCTION(execServerSubmitGuess);


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_CALLBACK_WRAPPERS
#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGPlayerController(); \
	friend struct Z_Construct_UClass_ABBGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABBGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBallGame"), NO_API) \
	DECLARE_SERIALIZER(ABBGPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGPlayerController(ABBGPlayerController&&); \
	ABBGPlayerController(const ABBGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBGPlayerController) \
	NO_API virtual ~ABBGPlayerController();


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_7_PROLOG
#define FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_CALLBACK_WRAPPERS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAME_API UClass* StaticClass<class ABBGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_BaseBallGame_Source_BaseBallGame_Player_BBGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
