// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/PlayerActionsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASHENVANGUARD_PlayerActionsComponent_generated_h
#error "PlayerActionsComponent.generated.h already included, missing '#pragma once' in PlayerActionsComponent.h"
#endif
#define ASHENVANGUARD_PlayerActionsComponent_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execSprint);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerActionsComponent(); \
	friend struct Z_Construct_UClass_UPlayerActionsComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerActionsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AshenVanguard"), NO_API) \
	DECLARE_SERIALIZER(UPlayerActionsComponent)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerActionsComponent(UPlayerActionsComponent&&); \
	UPlayerActionsComponent(const UPlayerActionsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerActionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerActionsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerActionsComponent) \
	NO_API virtual ~UPlayerActionsComponent();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_7_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UPlayerActionsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
