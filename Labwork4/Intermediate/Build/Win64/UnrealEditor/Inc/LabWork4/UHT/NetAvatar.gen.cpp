// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetAvatar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class ANetAvatar Function OnRep_IsRunning
struct Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "OnRep_IsRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execOnRep_IsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsRunning();
	P_NATIVE_END;
}
// End Class ANetAvatar Function OnRep_IsRunning

// Begin Class ANetAvatar Function ServerStartRunning
static FName NAME_ANetAvatar_ServerStartRunning = FName(TEXT("ServerStartRunning"));
void ANetAvatar::ServerStartRunning()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetAvatar_ServerStartRunning),NULL);
}
struct Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "ServerStartRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_ServerStartRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execServerStartRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartRunning_Implementation();
	P_NATIVE_END;
}
// End Class ANetAvatar Function ServerStartRunning

// Begin Class ANetAvatar Function ServerStopRunning
static FName NAME_ANetAvatar_ServerStopRunning = FName(TEXT("ServerStopRunning"));
void ANetAvatar::ServerStopRunning()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetAvatar_ServerStopRunning),NULL);
}
struct Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "ServerStopRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_ServerStopRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execServerStopRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopRunning_Implementation();
	P_NATIVE_END;
}
// End Class ANetAvatar Function ServerStopRunning

// Begin Class ANetAvatar Function StartRunning
struct Z_Construct_UFunction_ANetAvatar_StartRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_StartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "StartRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_StartRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_StartRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_StartRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_StartRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execStartRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRunning();
	P_NATIVE_END;
}
// End Class ANetAvatar Function StartRunning

// Begin Class ANetAvatar Function StopRunning
struct Z_Construct_UFunction_ANetAvatar_StopRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_StopRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "StopRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_StopRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_StopRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_StopRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_StopRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execStopRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRunning();
	P_NATIVE_END;
}
// End Class ANetAvatar Function StopRunning

// Begin Class ANetAvatar
void ANetAvatar::StaticRegisterNativesANetAvatar()
{
	UClass* Class = ANetAvatar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_IsRunning", &ANetAvatar::execOnRep_IsRunning },
		{ "ServerStartRunning", &ANetAvatar::execServerStartRunning },
		{ "ServerStopRunning", &ANetAvatar::execServerStopRunning },
		{ "StartRunning", &ANetAvatar::execStartRunning },
		{ "StopRunning", &ANetAvatar::execStopRunning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetAvatar);
UClass* Z_Construct_UClass_ANetAvatar_NoRegister()
{
	return ANetAvatar::StaticClass();
}
struct Z_Construct_UClass_ANetAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetAvatar.h" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning, "OnRep_IsRunning" }, // 2741807228
		{ &Z_Construct_UFunction_ANetAvatar_ServerStartRunning, "ServerStartRunning" }, // 3541955490
		{ &Z_Construct_UFunction_ANetAvatar_ServerStopRunning, "ServerStopRunning" }, // 3066322512
		{ &Z_Construct_UFunction_ANetAvatar_StartRunning, "StartRunning" }, // 3830780448
		{ &Z_Construct_UFunction_ANetAvatar_StopRunning, "StopRunning" }, // 792650345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, RunningSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningSpeed_MetaData), NewProp_RunningSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, WalkingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingSpeed_MetaData), NewProp_WalkingSpeed_MetaData) };
void Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((ANetAvatar*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning = { "bIsRunning", "OnRep_IsRunning", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANetAvatar), &Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_RunningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_WalkingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANetBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetAvatar_Statics::ClassParams = {
	&ANetAvatar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetAvatar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetAvatar()
{
	if (!Z_Registration_Info_UClass_ANetAvatar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetAvatar.OuterSingleton, Z_Construct_UClass_ANetAvatar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetAvatar.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetAvatar>()
{
	return ANetAvatar::StaticClass();
}
void ANetAvatar::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsRunning(TEXT("bIsRunning"));
	const bool bIsValid = true
		&& Name_bIsRunning == ClassReps[(int32)ENetFields_Private::bIsRunning].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetAvatar"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetAvatar);
ANetAvatar::~ANetAvatar() {}
// End Class ANetAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetAvatar, ANetAvatar::StaticClass, TEXT("ANetAvatar"), &Z_Registration_Info_UClass_ANetAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetAvatar), 872521960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetAvatar_h_4017913567(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_APK_GAD2006_aslan_GAD2006_master_Labwork4_Source_LabWork4_Private_NetAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
