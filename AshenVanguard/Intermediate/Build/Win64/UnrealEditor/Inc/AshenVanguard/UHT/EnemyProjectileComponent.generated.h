// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/EnemyProjectileComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASHENVANGUARD_EnemyProjectileComponent_generated_h
#error "EnemyProjectileComponent.generated.h already included, missing '#pragma once' in EnemyProjectileComponent.h"
#endif
#define ASHENVANGUARD_EnemyProjectileComponent_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnProjectile);


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyProjectileComponent(); \
	friend struct Z_Construct_UClass_UEnemyProjectileComponent_Statics; \
public: \
	DECLARE_CLASS(UEnemyProjectileComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AshenVanguard"), NO_API) \
	DECLARE_SERIALIZER(UEnemyProjectileComponent)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyProjectileComponent(UEnemyProjectileComponent&&); \
	UEnemyProjectileComponent(const UEnemyProjectileComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyProjectileComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyProjectileComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyProjectileComponent) \
	NO_API virtual ~UEnemyProjectileComponent();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_7_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UEnemyProjectileComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
