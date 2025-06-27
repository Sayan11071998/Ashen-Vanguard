// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/AI/BTT_MeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_MeleeAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBTT_MeleeAttack();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UBTT_MeleeAttack
void UBTT_MeleeAttack::StaticRegisterNativesUBTT_MeleeAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_MeleeAttack);
UClass* Z_Construct_UClass_UBTT_MeleeAttack_NoRegister()
{
	return UBTT_MeleeAttack::StaticClass();
}
struct Z_Construct_UClass_UBTT_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_MeleeAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "Category", "BTT_MeleeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTT_MeleeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_MeleeAttack_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_MeleeAttack, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_MeleeAttack_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_MeleeAttack, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_MeleeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MeleeAttack_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MeleeAttack_Statics::NewProp_AcceptableRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_MeleeAttack_Statics::ClassParams = {
	&UBTT_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_MeleeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_MeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UBTT_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_MeleeAttack.OuterSingleton, Z_Construct_UClass_UBTT_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_MeleeAttack.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UBTT_MeleeAttack>()
{
	return UBTT_MeleeAttack::StaticClass();
}
UBTT_MeleeAttack::UBTT_MeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_MeleeAttack);
UBTT_MeleeAttack::~UBTT_MeleeAttack() {}
// End Class UBTT_MeleeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_MeleeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_MeleeAttack, UBTT_MeleeAttack::StaticClass, TEXT("UBTT_MeleeAttack"), &Z_Registration_Info_UClass_UBTT_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_MeleeAttack), 2759971890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_MeleeAttack_h_3372332278(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_MeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_MeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
