// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OPYE2GameMode.h"

#ifdef OPYE2_OPYE2GameMode_generated_h
#error "OPYE2GameMode.generated.h already included, missing '#pragma once' in OPYE2GameMode.h"
#endif
#define OPYE2_OPYE2GameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOPYE2GameMode ***********************************************************
OPYE2_API UClass* Z_Construct_UClass_AOPYE2GameMode_NoRegister();

#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOPYE2GameMode(); \
	friend struct Z_Construct_UClass_AOPYE2GameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPYE2_API UClass* Z_Construct_UClass_AOPYE2GameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AOPYE2GameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OPYE2"), Z_Construct_UClass_AOPYE2GameMode_NoRegister) \
	DECLARE_SERIALIZER(AOPYE2GameMode)


#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOPYE2GameMode(AOPYE2GameMode&&) = delete; \
	AOPYE2GameMode(const AOPYE2GameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOPYE2GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOPYE2GameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOPYE2GameMode) \
	NO_API virtual ~AOPYE2GameMode();


#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h_12_PROLOG
#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOPYE2GameMode;

// ********** End Class AOPYE2GameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_OPYE2_Source_OPYE2_OPYE2GameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
