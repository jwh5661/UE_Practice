// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppGameMode.h"

#ifdef INTROCPP_IntroCppGameMode_generated_h
#error "IntroCppGameMode.generated.h already included, missing '#pragma once' in IntroCppGameMode.h"
#endif
#define INTROCPP_IntroCppGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppGameMode ********************************************************
INTROCPP_API UClass* Z_Construct_UClass_AIntroCppGameMode_NoRegister();

#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppGameMode(); \
	friend struct Z_Construct_UClass_AIntroCppGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPP_API UClass* Z_Construct_UClass_AIntroCppGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCpp"), Z_Construct_UClass_AIntroCppGameMode_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppGameMode)


#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppGameMode(AIntroCppGameMode&&) = delete; \
	AIntroCppGameMode(const AIntroCppGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroCppGameMode) \
	NO_API virtual ~AIntroCppGameMode();


#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h_12_PROLOG
#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppGameMode;

// ********** End Class AIntroCppGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
