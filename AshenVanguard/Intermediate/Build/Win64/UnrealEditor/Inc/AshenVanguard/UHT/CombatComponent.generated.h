// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASHENVANGUARD_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define ASHENVANGUARD_CombatComponent_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_13_DELEGATE \
ASHENVANGUARD_API void FOnAttackPerformedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttackPerformedSignature, float Amount);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleResetAttack); \
	DECLARE_FUNCTION(execComboAttack);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AshenVanguard"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatComponent(UCombatComponent&&); \
	UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_15_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
