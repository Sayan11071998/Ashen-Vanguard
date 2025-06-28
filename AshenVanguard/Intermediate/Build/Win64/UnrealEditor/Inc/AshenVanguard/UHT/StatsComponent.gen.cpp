// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UStatsComponent();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
ASHENVANGUARD_API UEnum* Z_Construct_UEnum_AshenVanguard_EStat();
ASHENVANGUARD_API UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature();
ASHENVANGUARD_API UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Delegate FOnHealthPercentUpdateSignature
struct Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics
{
	struct _Script_AshenVanguard_eventOnHealthPercentUpdateSignature_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AshenVanguard_eventOnHealthPercentUpdateSignature_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AshenVanguard, nullptr, "OnHealthPercentUpdateSignature__DelegateSignature", "StatsComponent", "OnHealthPercentUpdateDelegate", Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::_Script_AshenVanguard_eventOnHealthPercentUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::_Script_AshenVanguard_eventOnHealthPercentUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthPercentUpdateSignature, float Percentage)
{
	struct _Script_AshenVanguard_eventOnHealthPercentUpdateSignature_Parms
	{
		float Percentage;
	};
	_Script_AshenVanguard_eventOnHealthPercentUpdateSignature_Parms Parms;
	Parms.Percentage=Percentage;
	OnHealthPercentUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthPercentUpdateSignature

// Begin Delegate FOnStaminaPercentUpdateSignature
struct Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics
{
	struct _Script_AshenVanguard_eventOnStaminaPercentUpdateSignature_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AshenVanguard_eventOnStaminaPercentUpdateSignature_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AshenVanguard, nullptr, "OnStaminaPercentUpdateSignature__DelegateSignature", "StatsComponent", "OnStaminaPercentUpdateDelegate", Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::_Script_AshenVanguard_eventOnStaminaPercentUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::_Script_AshenVanguard_eventOnStaminaPercentUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaPercentUpdateSignature, float Percentage)
{
	struct _Script_AshenVanguard_eventOnStaminaPercentUpdateSignature_Parms
	{
		float Percentage;
	};
	_Script_AshenVanguard_eventOnStaminaPercentUpdateSignature_Parms Parms;
	Parms.Percentage=Percentage;
	OnStaminaPercentUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStaminaPercentUpdateSignature

// Begin Class UStatsComponent Function EnableRegen
struct Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "EnableRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_EnableRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execEnableRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRegen();
	P_NATIVE_END;
}
// End Class UStatsComponent Function EnableRegen

// Begin Class UStatsComponent Function GetStatPercentage
struct Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics
{
	struct StatsComponent_eventGetStatPercentage_Parms
	{
		TEnumAsByte<EStat> Current;
		TEnumAsByte<EStat> Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Current;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, Current), Z_Construct_UEnum_AshenVanguard_EStat, METADATA_PARAMS(0, nullptr) }; // 1997521154
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, Max), Z_Construct_UEnum_AshenVanguard_EStat, METADATA_PARAMS(0, nullptr) }; // 1997521154
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetStatPercentage", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::StatsComponent_eventGetStatPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::StatsComponent_eventGetStatPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetStatPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetStatPercentage)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Current);
	P_GET_PROPERTY(FByteProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatPercentage(EStat(Z_Param_Current),EStat(Z_Param_Max));
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetStatPercentage

// Begin Class UStatsComponent Function ReduceHealth
struct Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics
{
	struct StatsComponent_eventReduceHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_ReduceHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execReduceHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReduceHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function ReduceHealth

// Begin Class UStatsComponent Function ReduceStamina
struct Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics
{
	struct StatsComponent_eventReduceStamina_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_ReduceStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execReduceStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReduceStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function ReduceStamina

// Begin Class UStatsComponent Function RegenStamina
struct Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "RegenStamina", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_RegenStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execRegenStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenStamina();
	P_NATIVE_END;
}
// End Class UStatsComponent Function RegenStamina

// Begin Class UStatsComponent
void UStatsComponent::StaticRegisterNativesUStatsComponent()
{
	UClass* Class = UStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableRegen", &UStatsComponent::execEnableRegen },
		{ "GetStatPercentage", &UStatsComponent::execGetStatPercentage },
		{ "ReduceHealth", &UStatsComponent::execReduceHealth },
		{ "ReduceStamina", &UStatsComponent::execReduceStamina },
		{ "RegenStamina", &UStatsComponent::execRegenStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
{
	return UStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegen_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDelayDuration_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthPercentUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaPercentUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StaminaRegenRate;
	static void NewProp_bCanRegen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDelayDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthPercentUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaPercentUpdateDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_EnableRegen, "EnableRegen" }, // 2946179557
		{ &Z_Construct_UFunction_UStatsComponent_GetStatPercentage, "GetStatPercentage" }, // 1685450969
		{ &Z_Construct_UFunction_UStatsComponent_ReduceHealth, "ReduceHealth" }, // 3385228115
		{ &Z_Construct_UFunction_UStatsComponent_ReduceStamina, "ReduceStamina" }, // 119628760
		{ &Z_Construct_UFunction_UStatsComponent_RegenStamina, "RegenStamina" }, // 1133475283
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
void Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_SetBit(void* Obj)
{
	((UStatsComponent*)Obj)->bCanRegen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen = { "bCanRegen", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRegen_MetaData), NewProp_bCanRegen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration = { "StaminaDelayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDelayDuration_MetaData), NewProp_StaminaDelayDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AshenVanguard_EStat, METADATA_PARAMS(0, nullptr) }; // 1997521154
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 1997521154
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnHealthPercentUpdateDelegate = { "OnHealthPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnHealthPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_AshenVanguard_OnHealthPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthPercentUpdateDelegate_MetaData), NewProp_OnHealthPercentUpdateDelegate_MetaData) }; // 2249563091
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStaminaPercentUpdateDelegate = { "OnStaminaPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnStaminaPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_AshenVanguard_OnStaminaPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaPercentUpdateDelegate_MetaData), NewProp_OnStaminaPercentUpdateDelegate_MetaData) }; // 799874353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnHealthPercentUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStaminaPercentUpdateDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
	&UStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsComponent()
{
	if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UStatsComponent>()
{
	return UStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
UStatsComponent::~UStatsComponent() {}
// End Class UStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 1248232435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_1510206350(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_StatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
