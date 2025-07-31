// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPYE2_init() {}
	OPYE2_API UFunction* Z_Construct_UDelegateFunction_OPYE2_BulletCountUpdatedDelegate__DelegateSignature();
	OPYE2_API UFunction* Z_Construct_UDelegateFunction_OPYE2_PawnDeathDelegate__DelegateSignature();
	OPYE2_API UFunction* Z_Construct_UDelegateFunction_OPYE2_SprintStateChangedDelegate__DelegateSignature();
	OPYE2_API UFunction* Z_Construct_UDelegateFunction_OPYE2_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OPYE2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OPYE2()
	{
		if (!Z_Registration_Info_UPackage__Script_OPYE2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OPYE2_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OPYE2_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OPYE2_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OPYE2_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OPYE2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B3ECA36,
				0x8542D2D3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OPYE2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OPYE2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OPYE2(Z_Construct_UPackage__Script_OPYE2, TEXT("/Script/OPYE2"), Z_Registration_Info_UPackage__Script_OPYE2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B3ECA36, 0x8542D2D3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
