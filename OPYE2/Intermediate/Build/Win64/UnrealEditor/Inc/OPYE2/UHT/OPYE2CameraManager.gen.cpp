// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OPYE2/OPYE2CameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOPYE2CameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
OPYE2_API UClass* Z_Construct_UClass_AOPYE2CameraManager();
OPYE2_API UClass* Z_Construct_UClass_AOPYE2CameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_OPYE2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOPYE2CameraManager ******************************************************
void AOPYE2CameraManager::StaticRegisterNativesAOPYE2CameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOPYE2CameraManager;
UClass* AOPYE2CameraManager::GetPrivateStaticClass()
{
	using TClass = AOPYE2CameraManager;
	if (!Z_Registration_Info_UClass_AOPYE2CameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OPYE2CameraManager"),
			Z_Registration_Info_UClass_AOPYE2CameraManager.InnerSingleton,
			StaticRegisterNativesAOPYE2CameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AOPYE2CameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AOPYE2CameraManager_NoRegister()
{
	return AOPYE2CameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOPYE2CameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "OPYE2CameraManager.h" },
		{ "ModuleRelativePath", "OPYE2CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPYE2CameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOPYE2CameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_OPYE2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOPYE2CameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOPYE2CameraManager_Statics::ClassParams = {
	&AOPYE2CameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOPYE2CameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOPYE2CameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOPYE2CameraManager()
{
	if (!Z_Registration_Info_UClass_AOPYE2CameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOPYE2CameraManager.OuterSingleton, Z_Construct_UClass_AOPYE2CameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOPYE2CameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOPYE2CameraManager);
AOPYE2CameraManager::~AOPYE2CameraManager() {}
// ********** End Class AOPYE2CameraManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_OPYE2_Source_OPYE2_OPYE2CameraManager_h__Script_OPYE2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOPYE2CameraManager, AOPYE2CameraManager::StaticClass, TEXT("AOPYE2CameraManager"), &Z_Registration_Info_UClass_AOPYE2CameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOPYE2CameraManager), 1390696204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_OPYE2_Source_OPYE2_OPYE2CameraManager_h__Script_OPYE2_2457320757(TEXT("/Script/OPYE2"),
	Z_CompiledInDeferFile_FID_GitHub_OPYE2_Source_OPYE2_OPYE2CameraManager_h__Script_OPYE2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_OPYE2_Source_OPYE2_OPYE2CameraManager_h__Script_OPYE2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
