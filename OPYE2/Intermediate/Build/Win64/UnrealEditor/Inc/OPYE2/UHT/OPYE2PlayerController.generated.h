// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OPYE2PlayerController.h"

#ifdef OPYE2_OPYE2PlayerController_generated_h
#error "OPYE2PlayerController.generated.h already included, missing '#pragma once' in OPYE2PlayerController.h"
#endif
#define OPYE2_OPYE2PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOPYE2PlayerController ***************************************************
OPYE2_API UClass* Z_Construct_UClass_AOPYE2PlayerController_NoRegister();

#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOPYE2PlayerController(); \
	friend struct Z_Construct_UClass_AOPYE2PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPYE2_API UClass* Z_Construct_UClass_AOPYE2PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AOPYE2PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OPYE2"), Z_Construct_UClass_AOPYE2PlayerController_NoRegister) \
	DECLARE_SERIALIZER(AOPYE2PlayerController)


#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOPYE2PlayerController(AOPYE2PlayerController&&) = delete; \
	AOPYE2PlayerController(const AOPYE2PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOPYE2PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOPYE2PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOPYE2PlayerController) \
	NO_API virtual ~AOPYE2PlayerController();


#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h_16_PROLOG
#define FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOPYE2PlayerController;

// ********** End Class AOPYE2PlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_OPYE2_Source_OPYE2_OPYE2PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
