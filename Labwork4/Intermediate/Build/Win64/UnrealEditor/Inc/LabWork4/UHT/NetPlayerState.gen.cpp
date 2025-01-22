// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
LABWORK4_API UClass* Z_Construct_UClass_ANetPlayerState();
LABWORK4_API UClass* Z_Construct_UClass_ANetPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class ANetPlayerState
void ANetPlayerState::StaticRegisterNativesANetPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetPlayerState);
UClass* Z_Construct_UClass_ANetPlayerState_NoRegister()
{
	return ANetPlayerState::StaticClass();
}
struct Z_Construct_UClass_ANetPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetPlayerState.h" },
		{ "ModuleRelativePath", "Private/NetPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetPlayerState_Statics::ClassParams = {
	&ANetPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetPlayerState()
{
	if (!Z_Registration_Info_UClass_ANetPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetPlayerState.OuterSingleton, Z_Construct_UClass_ANetPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetPlayerState.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetPlayerState>()
{
	return ANetPlayerState::StaticClass();
}
ANetPlayerState::ANetPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetPlayerState);
ANetPlayerState::~ANetPlayerState() {}
// End Class ANetPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetPlayerState, ANetPlayerState::StaticClass, TEXT("ANetPlayerState"), &Z_Registration_Info_UClass_ANetPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetPlayerState), 1615045756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetPlayerState_h_1337843471(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
