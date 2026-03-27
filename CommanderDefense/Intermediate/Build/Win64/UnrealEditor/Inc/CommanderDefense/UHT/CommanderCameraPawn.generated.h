// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommanderCameraPawn.h"

#ifdef COMMANDERDEFENSE_CommanderCameraPawn_generated_h
#error "CommanderCameraPawn.generated.h already included, missing '#pragma once' in CommanderCameraPawn.h"
#endif
#define COMMANDERDEFENSE_CommanderCameraPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACommanderCameraPawn *****************************************************
struct Z_Construct_UClass_ACommanderCameraPawn_Statics;
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_ACommanderCameraPawn_NoRegister();

#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACommanderCameraPawn(); \
	friend struct ::Z_Construct_UClass_ACommanderCameraPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMANDERDEFENSE_API UClass* ::Z_Construct_UClass_ACommanderCameraPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ACommanderCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommanderDefense"), Z_Construct_UClass_ACommanderCameraPawn_NoRegister) \
	DECLARE_SERIALIZER(ACommanderCameraPawn)


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACommanderCameraPawn(ACommanderCameraPawn&&) = delete; \
	ACommanderCameraPawn(const ACommanderCameraPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACommanderCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACommanderCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACommanderCameraPawn) \
	NO_API virtual ~ACommanderCameraPawn();


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h_9_PROLOG
#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACommanderCameraPawn;

// ********** End Class ACommanderCameraPawn *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
