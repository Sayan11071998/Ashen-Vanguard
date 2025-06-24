// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/AI/BTT_ChargeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChargeAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBTT_ChargeAttack();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UBTT_ChargeAttack
void UBTT_ChargeAttack::StaticRegisterNativesUBTT_ChargeAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChargeAttack);
UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister()
{
	return UBTT_ChargeAttack::StaticClass();
}
struct Z_Construct_UClass_UBTT_ChargeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_ChargeAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTT_ChargeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChargeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_ChargeAttack, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_AcceptableRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams = {
	&UBTT_ChargeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_ChargeAttack()
{
	if (!Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton, Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UBTT_ChargeAttack>()
{
	return UBTT_ChargeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChargeAttack);
UBTT_ChargeAttack::~UBTT_ChargeAttack() {}
// End Class UBTT_ChargeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChargeAttack, UBTT_ChargeAttack::StaticClass, TEXT("UBTT_ChargeAttack"), &Z_Registration_Info_UClass_UBTT_ChargeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChargeAttack), 3674436776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_3147587100(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
