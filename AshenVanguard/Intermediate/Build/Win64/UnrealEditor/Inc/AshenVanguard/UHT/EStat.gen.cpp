// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/EStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStat() {}

// Begin Cross Module References
ASHENVANGUARD_API UEnum* Z_Construct_UEnum_AshenVanguard_EStat();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Enum EStat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStat;
static UEnum* EStat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AshenVanguard_EStat, (UObject*)Z_Construct_UPackage__Script_AshenVanguard(), TEXT("EStat"));
	}
	return Z_Registration_Info_UEnum_EStat.OuterSingleton;
}
template<> ASHENVANGUARD_API UEnum* StaticEnum<EStat>()
{
	return EStat_StaticEnum();
}
struct Z_Construct_UEnum_AshenVanguard_EStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Health.DisplayName", "Health" },
		{ "Health.Name", "Health" },
		{ "MaxHealth.DisplayName", "Max Health" },
		{ "MaxHealth.Name", "MaxHealth" },
		{ "MaxStamina.DisplayName", "Max Stamina" },
		{ "MaxStamina.Name", "MaxStamina" },
		{ "ModuleRelativePath", "Public/Characters/EStat.h" },
		{ "None.DisplayName", "None Selected" },
		{ "None.Name", "None" },
		{ "Stamina.DisplayName", "Stamina" },
		{ "Stamina.Name", "Stamina" },
		{ "Strength.DisplayName", "Strength" },
		{ "Strength.Name", "Strength" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "Health", (int64)Health },
		{ "MaxHealth", (int64)MaxHealth },
		{ "Strength", (int64)Strength },
		{ "Stamina", (int64)Stamina },
		{ "MaxStamina", (int64)MaxStamina },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AshenVanguard_EStat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AshenVanguard,
	nullptr,
	"EStat",
	"EStat",
	Z_Construct_UEnum_AshenVanguard_EStat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AshenVanguard_EStat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AshenVanguard_EStat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AshenVanguard_EStat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AshenVanguard_EStat()
{
	if (!Z_Registration_Info_UEnum_EStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStat.InnerSingleton, Z_Construct_UEnum_AshenVanguard_EStat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStat.InnerSingleton;
}
// End Enum EStat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_EStat_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStat_StaticEnum, TEXT("EStat"), &Z_Registration_Info_UEnum_EStat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1940356031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_EStat_h_2949727744(TEXT("/Script/AshenVanguard"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_EStat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_EStat_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
