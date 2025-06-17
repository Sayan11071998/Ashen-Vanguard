// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/PlayerActionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerActionsComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UPlayerActionsComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UPlayerActionsComponent
void UPlayerActionsComponent::StaticRegisterNativesUPlayerActionsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerActionsComponent);
UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister()
{
	return UPlayerActionsComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerActionsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/PlayerActionsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerActionsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams = {
	&UPlayerActionsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerActionsComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton, Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UPlayerActionsComponent>()
{
	return UPlayerActionsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerActionsComponent);
UPlayerActionsComponent::~UPlayerActionsComponent() {}
// End Class UPlayerActionsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerActionsComponent, UPlayerActionsComponent::StaticClass, TEXT("UPlayerActionsComponent"), &Z_Registration_Info_UClass_UPlayerActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerActionsComponent), 2929766642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_3219460892(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
