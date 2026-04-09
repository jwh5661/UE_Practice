// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CDGameMode.h"

#ifdef COMMANDERDEFENSE_CDGameMode_generated_h
#error "CDGameMode.generated.h already included, missing '#pragma once' in CDGameMode.h"
#endif
#define COMMANDERDEFENSE_CDGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACDGameMode **************************************************************
struct Z_Construct_UClass_ACDGameMode_Statics;
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_ACDGameMode_NoRegister();

#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACDGameMode(); \
	friend struct ::Z_Construct_UClass_ACDGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMANDERDEFENSE_API UClass* ::Z_Construct_UClass_ACDGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACDGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommanderDefense"), Z_Construct_UClass_ACDGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACDGameMode)


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACDGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACDGameMode(ACDGameMode&&) = delete; \
	ACDGameMode(const ACDGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACDGameMode) \
	NO_API virtual ~ACDGameMode();


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h_12_PROLOG
#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACDGameMode;

// ********** End Class ACDGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CDGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
