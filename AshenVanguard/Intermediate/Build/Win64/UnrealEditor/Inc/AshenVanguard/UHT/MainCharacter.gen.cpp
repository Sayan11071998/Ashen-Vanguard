// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AshenVanguard/Public/Characters/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// Begin Cross Module References
ASHENVANGUARD_API UClass* Z_Construct_UClass_AMainCharacter();
ASHENVANGUARD_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UFighter_NoRegister();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UMainPlayer_NoRegister();
ASHENVANGUARD_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AshenVanguard();
// End Cross Module References

// Begin Class AMainCharacter
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MainCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnim_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PlayerAnim = { "PlayerAnim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PlayerAnim), Z_Construct_UClass_UPlayerAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnim_MetaData), NewProp_PlayerAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PlayerAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AshenVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMainCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMainPlayer_NoRegister, (int32)VTABLE_OFFSET(AMainCharacter, IMainPlayer), false },  // 171537006
	{ Z_Construct_UClass_UFighter_NoRegister, (int32)VTABLE_OFFSET(AMainCharacter, IFighter), false },  // 1495446955
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
template<> ASHENVANGUARD_API UClass* StaticClass<AMainCharacter>()
{
	return AMainCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// End Class AMainCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_MainCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 2122351775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_MainCharacter_h_3361809529(TEXT("/Script/AshenVanguard"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Ashen_Vanguard_AshenVanguard_Source_AshenVanguard_Public_Characters_MainCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
