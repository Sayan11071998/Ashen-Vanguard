// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/StatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASHENVANGUARD_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define ASHENVANGUARD_StatsComponent_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_14_DELEGATE \
ASHENVANGUARD_API void FOnHealthPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthPercentUpdateSignature, float Percentage);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_22_DELEGATE \
ASHENVANGUARD_API void FOnStaminaPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaPercentUpdateSignature, float Percentage);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStatPercentage); \
	DECLARE_FUNCTION(execEnableRegen); \
	DECLARE_FUNCTION(execRegenStamina); \
	DECLARE_FUNCTION(execReduceStamina); \
	DECLARE_FUNCTION(execReduceHealth);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AshenVanguard"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsComponent(UStatsComponent&&); \
	UStatsComponent(const UStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent) \
	NO_API virtual ~UStatsComponent();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_24_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
