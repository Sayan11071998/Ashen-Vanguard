// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/LookAtPlayerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtPlayerComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_ULookAtPlayerComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_ULookAtPlayerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class ULookAtPlayerComponent
void ULookAtPlayerComponent::StaticRegisterNativesULookAtPlayerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookAtPlayerComponent);
UClass* Z_Construct_UClass_ULookAtPlayerComponent_NoRegister()
{
	return ULookAtPlayerComponent::StaticClass();
}
struct Z_Construct_UClass_ULookAtPlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/LookAtPlayerComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/LookAtPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "LookAtPlayerComponent" },
		{ "ModuleRelativePath", "Public/Characters/LookAtPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bcanRotate_MetaData[] = {
		{ "Category", "LookAtPlayerComponent" },
		{ "ModuleRelativePath", "Public/Characters/LookAtPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bcanRotate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bcanRotate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtPlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookAtPlayerComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_bcanRotate_SetBit(void* Obj)
{
	((ULookAtPlayerComponent*)Obj)->bcanRotate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_bcanRotate = { "bcanRotate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULookAtPlayerComponent), &Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_bcanRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bcanRotate_MetaData), NewProp_bcanRotate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_bcanRotate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULookAtPlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookAtPlayerComponent_Statics::ClassParams = {
	&ULookAtPlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookAtPlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULookAtPlayerComponent()
{
	if (!Z_Registration_Info_UClass_ULookAtPlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookAtPlayerComponent.OuterSingleton, Z_Construct_UClass_ULookAtPlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULookAtPlayerComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<ULookAtPlayerComponent>()
{
	return ULookAtPlayerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtPlayerComponent);
ULookAtPlayerComponent::~ULookAtPlayerComponent() {}
// End Class ULookAtPlayerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_LookAtPlayerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtPlayerComponent, ULookAtPlayerComponent::StaticClass, TEXT("ULookAtPlayerComponent"), &Z_Registration_Info_UClass_ULookAtPlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtPlayerComponent), 4183431664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_LookAtPlayerComponent_h_1791537330(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_LookAtPlayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_LookAtPlayerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
