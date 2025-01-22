// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/BTT_ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChasePlayer() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
LABWORK4_API UClass* Z_Construct_UClass_UBTT_ChasePlayer();
LABWORK4_API UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class UBTT_ChasePlayer
void UBTT_ChasePlayer::StaticRegisterNativesUBTT_ChasePlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChasePlayer);
UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister()
{
	return UBTT_ChasePlayer::StaticClass();
}
struct Z_Construct_UClass_UBTT_ChasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BTT_ChasePlayer.h" },
		{ "ModuleRelativePath", "Private/BTT_ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChasePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_ChasePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams = {
	&UBTT_ChasePlayer::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_ChasePlayer()
{
	if (!Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<UBTT_ChasePlayer>()
{
	return UBTT_ChasePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChasePlayer);
UBTT_ChasePlayer::~UBTT_ChasePlayer() {}
// End Class UBTT_ChasePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_BTT_ChasePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChasePlayer, UBTT_ChasePlayer::StaticClass, TEXT("UBTT_ChasePlayer"), &Z_Registration_Info_UClass_UBTT_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChasePlayer), 69697301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_BTT_ChasePlayer_h_1635937498(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_BTT_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_BTT_ChasePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
