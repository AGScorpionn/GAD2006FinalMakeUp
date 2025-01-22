// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/EnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_AEnemyController();
LABWORK4_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class AEnemyController
void AEnemyController::StaticRegisterNativesAEnemyController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyController);
UClass* Z_Construct_UClass_AEnemyController_NoRegister()
{
	return AEnemyController::StaticClass();
}
struct Z_Construct_UClass_AEnemyController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "Private/EnemyController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_pBehaviorTreeComponent_MetaData[] = {
		{ "Category", "EnemyController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tree components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EnemyController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tree components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_pBehaviorTree_MetaData[] = {
		{ "Category", "EnemyController" },
		{ "ModuleRelativePath", "Private/EnemyController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBehaviorTreeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_m_pBehaviorTreeComponent = { "m_pBehaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, m_pBehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_pBehaviorTreeComponent_MetaData), NewProp_m_pBehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_m_pBehaviorTree = { "m_pBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, m_pBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_pBehaviorTree_MetaData), NewProp_m_pBehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_m_pBehaviorTreeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_m_pBehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
	&AEnemyController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyController()
{
	if (!Z_Registration_Info_UClass_AEnemyController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyController.OuterSingleton, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyController.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<AEnemyController>()
{
	return AEnemyController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
AEnemyController::~AEnemyController() {}
// End Class AEnemyController

// Begin Registration
struct Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_EnemyController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyController, AEnemyController::StaticClass, TEXT("AEnemyController"), &Z_Registration_Info_UClass_AEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyController), 4175793888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_EnemyController_h_936103858(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_EnemyController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
