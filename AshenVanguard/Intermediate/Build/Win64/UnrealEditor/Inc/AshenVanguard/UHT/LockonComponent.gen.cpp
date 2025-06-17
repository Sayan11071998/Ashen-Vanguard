// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Combat/LockonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockonComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_ULockonComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_ULockonComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class ULockonComponent Function StartLockon
struct Z_Construct_UFunction_ULockonComponent_StartLockon_Statics
{
	struct LockonComponent_eventStartLockon_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Radius", "750.000000" },
		{ "ModuleRelativePath", "Public/Combat/LockonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockonComponent_eventStartLockon_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockonComponent, nullptr, "StartLockon", nullptr, nullptr, Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::LockonComponent_eventStartLockon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::LockonComponent_eventStartLockon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockonComponent_StartLockon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockonComponent::execStartLockon)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLockon(Z_Param_Radius);
	P_NATIVE_END;
}
// End Class ULockonComponent Function StartLockon

// Begin Class ULockonComponent
void ULockonComponent::StaticRegisterNativesULockonComponent()
{
	UClass* Class = ULockonComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartLockon", &ULockonComponent::execStartLockon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockonComponent);
UClass* Z_Construct_UClass_ULockonComponent_NoRegister()
{
	return ULockonComponent::StaticClass();
}
struct Z_Construct_UClass_ULockonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/LockonComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/LockonComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockonComponent_StartLockon, "StartLockon" }, // 100049446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULockonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockonComponent_Statics::ClassParams = {
	&ULockonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULockonComponent()
{
	if (!Z_Registration_Info_UClass_ULockonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockonComponent.OuterSingleton, Z_Construct_UClass_ULockonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULockonComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<ULockonComponent>()
{
	return ULockonComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULockonComponent);
ULockonComponent::~ULockonComponent() {}
// End Class ULockonComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_LockonComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULockonComponent, ULockonComponent::StaticClass, TEXT("ULockonComponent"), &Z_Registration_Info_UClass_ULockonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockonComponent), 513585149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_LockonComponent_h_741568436(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_LockonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_LockonComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
