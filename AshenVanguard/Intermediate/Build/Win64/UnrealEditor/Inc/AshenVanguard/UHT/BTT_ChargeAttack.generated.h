// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AI/BTT_ChargeAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASHENVANGUARD_BTT_ChargeAttack_generated_h
#error "BTT_ChargeAttack.generated.h already included, missing '#pragma once' in BTT_ChargeAttack.h"
#endif
#define ASHENVANGUARD_BTT_ChargeAttack_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishAttackTask); \
	DECLARE_FUNCTION(execHandleMoveCompleted);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTT_ChargeAttack(); \
	friend struct Z_Construct_UClass_UBTT_ChargeAttack_Statics; \
public: \
	DECLARE_CLASS(UBTT_ChargeAttack, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AshenVanguard"), NO_API) \
	DECLARE_SERIALIZER(UBTT_ChargeAttack)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTT_ChargeAttack(UBTT_ChargeAttack&&); \
	UBTT_ChargeAttack(const UBTT_ChargeAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_ChargeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_ChargeAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTT_ChargeAttack) \
	NO_API virtual ~UBTT_ChargeAttack();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_7_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UBTT_ChargeAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
