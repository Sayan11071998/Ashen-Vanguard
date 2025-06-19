// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Combat/TraceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UTraceComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UTraceComponent Function HandleResetAttack
struct Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceComponent, nullptr, "HandleResetAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTraceComponent_HandleResetAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTraceComponent::execHandleResetAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResetAttack();
	P_NATIVE_END;
}
// End Class UTraceComponent Function HandleResetAttack

// Begin Class UTraceComponent
void UTraceComponent::StaticRegisterNativesUTraceComponent()
{
	UClass* Class = UTraceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleResetAttack", &UTraceComponent::execHandleResetAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceComponent);
UClass* Z_Construct_UClass_UTraceComponent_NoRegister()
{
	return UTraceComponent::StaticClass();
}
struct Z_Construct_UClass_UTraceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/TraceComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionLength_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Start;
	static const UECodeGen_Private::FNamePropertyParams NewProp_End;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BoxCollisionLength;
	static void NewProp_bDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceComponent_HandleResetAttack, "HandleResetAttack" }, // 2094172131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, End), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxCollisionLength = { "BoxCollisionLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, BoxCollisionLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollisionLength_MetaData), NewProp_BoxCollisionLength_MetaData) };
void Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_SetBit(void* Obj)
{
	((UTraceComponent*)Obj)->bDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTraceComponent), &Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugMode_MetaData), NewProp_bDebugMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxCollisionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTraceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceComponent_Statics::ClassParams = {
	&UTraceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTraceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTraceComponent()
{
	if (!Z_Registration_Info_UClass_UTraceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceComponent.OuterSingleton, Z_Construct_UClass_UTraceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTraceComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UTraceComponent>()
{
	return UTraceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceComponent);
UTraceComponent::~UTraceComponent() {}
// End Class UTraceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_TraceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTraceComponent, UTraceComponent::StaticClass, TEXT("UTraceComponent"), &Z_Registration_Info_UClass_UTraceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceComponent), 3505959795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_TraceComponent_h_3527313887(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_TraceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_TraceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
