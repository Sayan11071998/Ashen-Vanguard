// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/AI/BTT_RageAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_RageAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBTT_RageAttack();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBTT_RageAttack_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UBTT_RageAttack
void UBTT_RageAttack::StaticRegisterNativesUBTT_RageAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_RageAttack);
UClass* Z_Construct_UClass_UBTT_RageAttack_NoRegister()
{
	return UBTT_RageAttack::StaticClass();
}
struct Z_Construct_UClass_UBTT_RageAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_RageAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RageAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "BTT_RageAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RageAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[] = {
		{ "Category", "BTT_RageAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RageAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_RageAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTT_RageAttack_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_RageAttack, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_RageAttack_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_RageAttack, MeleeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeRange_MetaData), NewProp_MeleeRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_RageAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_RageAttack_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_RageAttack_Statics::NewProp_MeleeRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RageAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_RageAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RageAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_RageAttack_Statics::ClassParams = {
	&UBTT_RageAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_RageAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RageAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RageAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_RageAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_RageAttack()
{
	if (!Z_Registration_Info_UClass_UBTT_RageAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_RageAttack.OuterSingleton, Z_Construct_UClass_UBTT_RageAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_RageAttack.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UBTT_RageAttack>()
{
	return UBTT_RageAttack::StaticClass();
}
UBTT_RageAttack::UBTT_RageAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_RageAttack);
UBTT_RageAttack::~UBTT_RageAttack() {}
// End Class UBTT_RageAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_RageAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_RageAttack, UBTT_RageAttack::StaticClass, TEXT("UBTT_RageAttack"), &Z_Registration_Info_UClass_UBTT_RageAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_RageAttack), 2950245357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_RageAttack_h_843612585(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_RageAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_RageAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
