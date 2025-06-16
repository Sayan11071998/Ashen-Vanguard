// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Throwaway.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowaway() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UThrowaway();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UThrowaway_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UThrowaway
void UThrowaway::StaticRegisterNativesUThrowaway()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowaway);
UClass* Z_Construct_UClass_UThrowaway_NoRegister()
{
	return UThrowaway::StaticClass();
}
struct Z_Construct_UClass_UThrowaway_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Throwaway.h" },
		{ "ModuleRelativePath", "Public/Throwaway.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowaway>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThrowaway_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowaway_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowaway_Statics::ClassParams = {
	&UThrowaway::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowaway_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowaway_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThrowaway()
{
	if (!Z_Registration_Info_UClass_UThrowaway.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowaway.OuterSingleton, Z_Construct_UClass_UThrowaway_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThrowaway.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UThrowaway>()
{
	return UThrowaway::StaticClass();
}
UThrowaway::UThrowaway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowaway);
UThrowaway::~UThrowaway() {}
// End Class UThrowaway

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Throwaway_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThrowaway, UThrowaway::StaticClass, TEXT("UThrowaway"), &Z_Registration_Info_UClass_UThrowaway, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowaway), 1680373196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Throwaway_h_2433321645(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Throwaway_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Throwaway_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
