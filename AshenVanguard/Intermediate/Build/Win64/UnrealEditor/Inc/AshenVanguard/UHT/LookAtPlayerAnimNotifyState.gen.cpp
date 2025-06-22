// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Animations/LookAtPlayerAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtPlayerAnimNotifyState() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState();
ASHENVANGUARD_API UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class ULookAtPlayerAnimNotifyState
void ULookAtPlayerAnimNotifyState::StaticRegisterNativesULookAtPlayerAnimNotifyState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookAtPlayerAnimNotifyState);
UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState_NoRegister()
{
	return ULookAtPlayerAnimNotifyState::StaticClass();
}
struct Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/LookAtPlayerAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animations/LookAtPlayerAnimNotifyState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtPlayerAnimNotifyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::ClassParams = {
	&ULookAtPlayerAnimNotifyState::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState()
{
	if (!Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState.OuterSingleton, Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<ULookAtPlayerAnimNotifyState>()
{
	return ULookAtPlayerAnimNotifyState::StaticClass();
}
ULookAtPlayerAnimNotifyState::ULookAtPlayerAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtPlayerAnimNotifyState);
ULookAtPlayerAnimNotifyState::~ULookAtPlayerAnimNotifyState() {}
// End Class ULookAtPlayerAnimNotifyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtPlayerAnimNotifyState, ULookAtPlayerAnimNotifyState::StaticClass, TEXT("ULookAtPlayerAnimNotifyState"), &Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtPlayerAnimNotifyState), 2712976452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_LookAtPlayerAnimNotifyState_h_3128333435(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
