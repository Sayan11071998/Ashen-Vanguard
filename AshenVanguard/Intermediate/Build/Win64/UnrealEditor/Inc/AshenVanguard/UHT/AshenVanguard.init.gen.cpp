// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAshenVanguard_init() {}
	ASHENVANGUARD_API UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnAttackPerformedSignature__DelegateSignature();
	ASHENVANGUARD_API UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnSprintSignature__DelegateSignature();
	ASHENVANGUARD_API UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnUpdatedTargetSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AshenVanguard;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AshenVanguard()
	{
		if (!Z_Registration_Info_UPackage__Script_AshenVanguard.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_USparseDelegateFunction_AshenVanguard_OnAttackPerformedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_AshenVanguard_OnSprintSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_AshenVanguard_OnUpdatedTargetSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AshenVanguard",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD9C53471,
				0x07A75B0B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AshenVanguard.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AshenVanguard.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AshenVanguard(Z_Construct_UPackage__Script_AshenVanguard, TEXT("/Script/AshenVanguard"), Z_Registration_Info_UPackage__Script_AshenVanguard, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD9C53471, 0x07A75B0B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
