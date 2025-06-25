// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Combat/FTraceSockets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTraceSockets() {}

// Begin Cross Module References
ASHENVANGUARD_API UScriptStruct* Z_Construct_UScriptStruct_FTraceSockets();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin ScriptStruct FTraceSockets
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceSockets;
class UScriptStruct* FTraceSockets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceSockets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceSockets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceSockets, (UObject*)Z_Construct_UPackage__Script_AshenVanguard(), TEXT("TraceSockets"));
	}
	return Z_Registration_Info_UScriptStruct_TraceSockets.OuterSingleton;
}
template<> ASHENVANGUARD_API UScriptStruct* StaticStruct<FTraceSockets>()
{
	return FTraceSockets::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceSockets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "TraceSockets" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "TraceSockets" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "TraceSockets" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Start;
	static const UECodeGen_Private::FNamePropertyParams NewProp_End;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceSockets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceSockets, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceSockets, End), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceSockets, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceSockets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
	nullptr,
	&NewStructOps,
	"TraceSockets",
	Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers),
	sizeof(FTraceSockets),
	alignof(FTraceSockets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceSockets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceSockets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceSockets()
{
	if (!Z_Registration_Info_UScriptStruct_TraceSockets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceSockets.InnerSingleton, Z_Construct_UScriptStruct_FTraceSockets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceSockets.InnerSingleton;
}
// End ScriptStruct FTraceSockets

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_FTraceSockets_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTraceSockets::StaticStruct, Z_Construct_UScriptStruct_FTraceSockets_Statics::NewStructOps, TEXT("TraceSockets"), &Z_Registration_Info_UScriptStruct_TraceSockets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceSockets), 871883527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_FTraceSockets_h_2389541569(TEXT("/Script/AshenVanguard"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_FTraceSockets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Combat_FTraceSockets_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
