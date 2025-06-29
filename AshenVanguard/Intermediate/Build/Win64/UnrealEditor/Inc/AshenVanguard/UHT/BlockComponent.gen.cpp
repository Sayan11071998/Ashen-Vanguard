// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Combat/BlockComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBlockComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UBlockComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UBlockComponent
void UBlockComponent::StaticRegisterNativesUBlockComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockComponent);
UClass* Z_Construct_UClass_UBlockComponent_NoRegister()
{
	return UBlockComponent::StaticClass();
}
struct Z_Construct_UClass_UBlockComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/BlockComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCost_MetaData[] = {
		{ "Category", "BlockComponent" },
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockComponent_Statics::NewProp_StaminaCost = { "StaminaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockComponent, StaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCost_MetaData), NewProp_StaminaCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockComponent_Statics::NewProp_StaminaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlockComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockComponent_Statics::ClassParams = {
	&UBlockComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlockComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlockComponent()
{
	if (!Z_Registration_Info_UClass_UBlockComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockComponent.OuterSingleton, Z_Construct_UClass_UBlockComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlockComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UBlockComponent>()
{
	return UBlockComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockComponent);
UBlockComponent::~UBlockComponent() {}
// End Class UBlockComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_BlockComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlockComponent, UBlockComponent::StaticClass, TEXT("UBlockComponent"), &Z_Registration_Info_UClass_UBlockComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockComponent), 788126600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_BlockComponent_h_3402250666(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_BlockComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_BlockComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
