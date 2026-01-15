// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppCharacter.h"

#ifdef INTROCPP_IntroCppCharacter_generated_h
#error "IntroCppCharacter.generated.h already included, missing '#pragma once' in IntroCppCharacter.h"
#endif
#define INTROCPP_IntroCppCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppCharacter *******************************************************
#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


INTROCPP_API UClass* Z_Construct_UClass_AIntroCppCharacter_NoRegister();

#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppCharacter(); \
	friend struct Z_Construct_UClass_AIntroCppCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPP_API UClass* Z_Construct_UClass_AIntroCppCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCpp"), Z_Construct_UClass_AIntroCppCharacter_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppCharacter)


#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppCharacter(AIntroCppCharacter&&) = delete; \
	AIntroCppCharacter(const AIntroCppCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroCppCharacter) \
	NO_API virtual ~AIntroCppCharacter();


#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_21_PROLOG
#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppCharacter;

// ********** End Class AIntroCppCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
