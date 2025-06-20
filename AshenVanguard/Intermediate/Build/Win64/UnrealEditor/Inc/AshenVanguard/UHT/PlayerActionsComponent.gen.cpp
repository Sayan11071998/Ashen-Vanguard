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

// Begin Class UPlayerActionsComponent Function Sprint
struct Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Sprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Sprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerActionsComponent::execSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sprint();
	P_NATIVE_END;
}
// End Class UPlayerActionsComponent Function Sprint

// Begin Class UPlayerActionsComponent Function Walk
struct Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Walk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Walk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerActionsComponent::execWalk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Walk();
	P_NATIVE_END;
}
// End Class UPlayerActionsComponent Function Walk

// Begin Class UPlayerActionsComponent
void UPlayerActionsComponent::StaticRegisterNativesUPlayerActionsComponent()
{
	UClass* Class = UPlayerActionsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Sprint", &UPlayerActionsComponent::execSprint },
		{ "Walk", &UPlayerActionsComponent::execWalk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintCost_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Sprint, "Sprint" }, // 1744059307
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Walk, "Walk" }, // 3952828670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerActionsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost = { "SprintCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, SprintCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintCost_MetaData), NewProp_SprintCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPlayerActionsComponent, UPlayerActionsComponent::StaticClass, TEXT("UPlayerActionsComponent"), &Z_Registration_Info_UClass_UPlayerActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerActionsComponent), 2660844430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_3495042188(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
