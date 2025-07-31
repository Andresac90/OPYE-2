// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OPYE2Character.h"

#ifdef OPYE2_OPYE2Character_generated_h
#error "OPYE2Character.generated.h already included, missing '#pragma once' in OPYE2Character.h"
#endif
#define OPYE2_OPYE2Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOPYE2Character **********************************************************
#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


OPYE2_API UClass* Z_Construct_UClass_AOPYE2Character_NoRegister();

#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOPYE2Character(); \
	friend struct Z_Construct_UClass_AOPYE2Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPYE2_API UClass* Z_Construct_UClass_AOPYE2Character_NoRegister(); \
public: \
	DECLARE_CLASS2(AOPYE2Character, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OPYE2"), Z_Construct_UClass_AOPYE2Character_NoRegister) \
	DECLARE_SERIALIZER(AOPYE2Character)


#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOPYE2Character(AOPYE2Character&&) = delete; \
	AOPYE2Character(const AOPYE2Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOPYE2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOPYE2Character); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOPYE2Character) \
	NO_API virtual ~AOPYE2Character();


#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_21_PROLOG
#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_INCLASS_NO_PURE_DECLS \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOPYE2Character;

// ********** End Class AOPYE2Character ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_OPYE2_Source_OPYE2_OPYE2Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
