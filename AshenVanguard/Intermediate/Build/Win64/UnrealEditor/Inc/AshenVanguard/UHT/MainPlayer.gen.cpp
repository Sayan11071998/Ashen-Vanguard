// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Interfaces/MainPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_UMainPlayer();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UMainPlayer_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Interface UMainPlayer
void UMainPlayer::StaticRegisterNativesUMainPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainPlayer);
UClass* Z_Construct_UClass_UMainPlayer_NoRegister()
{
	return UMainPlayer::StaticClass();
}
struct Z_Construct_UClass_UMainPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MainPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMainPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMainPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainPlayer_Statics::ClassParams = {
	&UMainPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainPlayer()
{
	if (!Z_Registration_Info_UClass_UMainPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainPlayer.OuterSingleton, Z_Construct_UClass_UMainPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainPlayer.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<UMainPlayer>()
{
	return UMainPlayer::StaticClass();
}
UMainPlayer::UMainPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainPlayer);
UMainPlayer::~UMainPlayer() {}
// End Interface UMainPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_MainPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainPlayer, UMainPlayer::StaticClass, TEXT("UMainPlayer"), &Z_Registration_Info_UClass_UMainPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainPlayer), 171537006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_MainPlayer_h_2743482860(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_MainPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Interfaces_MainPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
