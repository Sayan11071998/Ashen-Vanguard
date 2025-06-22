// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Combat/EnemyProjectileComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectileComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UEnemyProjectileComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class UEnemyProjectileComponent Function SpawnProjectile
struct Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics
{
	struct EnemyProjectileComponent_eventSpawnProjectile_Parms
	{
		FName ComponentName;
		TSubclassOf<AActor> ProjectileClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyProjectileComponent_eventSpawnProjectile_Parms, ComponentName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyProjectileComponent_eventSpawnProjectile_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyProjectileComponent, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::EnemyProjectileComponent_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::EnemyProjectileComponent_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyProjectileComponent::execSpawnProjectile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ComponentName);
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile(Z_Param_ComponentName,Z_Param_ProjectileClass);
	P_NATIVE_END;
}
// End Class UEnemyProjectileComponent Function SpawnProjectile

// Begin Class UEnemyProjectileComponent
void UEnemyProjectileComponent::StaticRegisterNativesUEnemyProjectileComponent()
{
	UClass* Class = UEnemyProjectileComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UEnemyProjectileComponent::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyProjectileComponent);
UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister()
{
	return UEnemyProjectileComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyProjectileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/EnemyProjectileComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile, "SpawnProjectile" }, // 667299412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyProjectileComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyProjectileComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectileComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyProjectileComponent_Statics::ClassParams = {
	&UEnemyProjectileComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyProjectileComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyProjectileComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyProjectileComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyProjectileComponent.OuterSingleton, Z_Construct_UClass_UEnemyProjectileComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyProjectileComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UEnemyProjectileComponent>()
{
	return UEnemyProjectileComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyProjectileComponent);
UEnemyProjectileComponent::~UEnemyProjectileComponent() {}
// End Class UEnemyProjectileComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyProjectileComponent, UEnemyProjectileComponent::StaticClass, TEXT("UEnemyProjectileComponent"), &Z_Registration_Info_UClass_UEnemyProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyProjectileComponent), 2153187401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_1433632792(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_EnemyProjectileComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
