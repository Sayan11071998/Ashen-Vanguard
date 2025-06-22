// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Combat/EnemyProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_AEnemyProjectile();
ASHENVANGUARD_API UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class AEnemyProjectile Function HandleBeginOverlap
struct Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics
{
	struct EnemyProjectile_eventHandleBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyProjectile_eventHandleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "HandleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::EnemyProjectile_eventHandleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::EnemyProjectile_eventHandleBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyProjectile::execHandleBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AEnemyProjectile Function HandleBeginOverlap

// Begin Class AEnemyProjectile
void AEnemyProjectile::StaticRegisterNativesAEnemyProjectile()
{
	UClass* Class = AEnemyProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleBeginOverlap", &AEnemyProjectile::execHandleBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile);
UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister()
{
	return AEnemyProjectile::StaticClass();
}
struct Z_Construct_UClass_AEnemyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/EnemyProjectile.h" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTemplate_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap, "HandleBeginOverlap" }, // 979520508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_HitTemplate = { "HitTemplate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, HitTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTemplate_MetaData), NewProp_HitTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_HitTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams = {
	&AEnemyProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyProjectile()
{
	if (!Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<AEnemyProjectile>()
{
	return AEnemyProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile);
AEnemyProjectile::~AEnemyProjectile() {}
// End Class AEnemyProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile, AEnemyProjectile::StaticClass, TEXT("AEnemyProjectile"), &Z_Registration_Info_UClass_AEnemyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile), 3402472351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectile_h_2988717643(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
