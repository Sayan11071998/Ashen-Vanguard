// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animations/PlayerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASHENVANGUARD_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define ASHENVANGUARD_PlayerAnimInstance_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDirection); \
	DECLARE_FUNCTION(execHandleUpdatedTarget); \
	DECLARE_FUNCTION(execUpdateSpeed);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AshenVanguard"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerAnimInstance(UPlayerAnimInstance&&); \
	UPlayerAnimInstance(const UPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	NO_API virtual ~UPlayerAnimInstance();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_7_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_PlayerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
