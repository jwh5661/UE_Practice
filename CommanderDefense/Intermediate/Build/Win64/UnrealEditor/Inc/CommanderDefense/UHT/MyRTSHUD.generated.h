// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyRTSHUD.h"

#ifdef COMMANDERDEFENSE_MyRTSHUD_generated_h
#error "MyRTSHUD.generated.h already included, missing '#pragma once' in MyRTSHUD.h"
#endif
#define COMMANDERDEFENSE_MyRTSHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyRTSHUD ****************************************************************
struct Z_Construct_UClass_AMyRTSHUD_Statics;
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSHUD_NoRegister();

#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyRTSHUD(); \
	friend struct ::Z_Construct_UClass_AMyRTSHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMANDERDEFENSE_API UClass* ::Z_Construct_UClass_AMyRTSHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyRTSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommanderDefense"), Z_Construct_UClass_AMyRTSHUD_NoRegister) \
	DECLARE_SERIALIZER(AMyRTSHUD)


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyRTSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyRTSHUD(AMyRTSHUD&&) = delete; \
	AMyRTSHUD(const AMyRTSHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRTSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRTSHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyRTSHUD) \
	NO_API virtual ~AMyRTSHUD();


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h_12_PROLOG
#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyRTSHUD;

// ********** End Class AMyRTSHUD ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
