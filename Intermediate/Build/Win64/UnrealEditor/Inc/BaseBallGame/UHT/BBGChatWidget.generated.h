// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/BBGChatWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAME_BBGChatWidget_generated_h
#error "BBGChatWidget.generated.h already included, missing '#pragma once' in BBGChatWidget.h"
#endif
#define BASEBALLGAME_BBGChatWidget_generated_h

#define FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputCommitted);


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBBGChatWidget(); \
	friend struct Z_Construct_UClass_UBBGChatWidget_Statics; \
public: \
	DECLARE_CLASS(UBBGChatWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BaseBallGame"), NO_API) \
	DECLARE_SERIALIZER(UBBGChatWidget)


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBBGChatWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBBGChatWidget(UBBGChatWidget&&); \
	UBBGChatWidget(const UBBGChatWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBBGChatWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBBGChatWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBBGChatWidget) \
	NO_API virtual ~UBBGChatWidget();


#define FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_7_PROLOG
#define FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAME_API UClass* StaticClass<class UBBGChatWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_BaseBallGame_Source_BaseBallGame_UI_BBGChatWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
