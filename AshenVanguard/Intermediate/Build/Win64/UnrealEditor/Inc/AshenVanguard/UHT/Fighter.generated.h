// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Fighter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASHENVANGUARD_Fighter_generated_h
#error "Fighter.generated.h already included, missing '#pragma once' in Fighter.h"
#endif
#define ASHENVANGUARD_Fighter_generated_h

#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASHENVANGUARD_API UFighter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFighter(UFighter&&); \
	UFighter(const UFighter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASHENVANGUARD_API, UFighter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFighter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFighter) \
	ASHENVANGUARD_API virtual ~UFighter();


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFighter(); \
	friend struct Z_Construct_UClass_UFighter_Statics; \
public: \
	DECLARE_CLASS(UFighter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AshenVanguard"), ASHENVANGUARD_API) \
	DECLARE_SERIALIZER(UFighter)


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFighter() {} \
public: \
	typedef UFighter UClassType; \
	typedef IFighter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_7_PROLOG
#define FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASHENVANGUARD_API UClass* StaticClass<class UFighter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_Fighter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
