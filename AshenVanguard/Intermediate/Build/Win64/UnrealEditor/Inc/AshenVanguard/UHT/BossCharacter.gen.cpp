// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/BossCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossCharacter() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_ABossCharacter();
ASHENVANGUARD_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class ABossCharacter
void ABossCharacter::StaticRegisterNativesABossCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABossCharacter);
UClass* Z_Construct_UClass_ABossCharacter_NoRegister()
{
	return ABossCharacter::StaticClass();
}
struct Z_Construct_UClass_ABossCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BossCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABossCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(ABossCharacter, IEnemy), false },  // 4200229855
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossCharacter_Statics::ClassParams = {
	&ABossCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABossCharacter()
{
	if (!Z_Registration_Info_UClass_ABossCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossCharacter.OuterSingleton, Z_Construct_UClass_ABossCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABossCharacter.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<ABossCharacter>()
{
	return ABossCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABossCharacter);
ABossCharacter::~ABossCharacter() {}
// End Class ABossCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_BossCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABossCharacter, ABossCharacter::StaticClass, TEXT("ABossCharacter"), &Z_Registration_Info_UClass_ABossCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossCharacter), 3363682912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_BossCharacter_h_211719943(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_BossCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_BossCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
