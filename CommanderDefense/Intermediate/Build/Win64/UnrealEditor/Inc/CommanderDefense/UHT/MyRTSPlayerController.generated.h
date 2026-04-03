// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyRTSPlayerController.h"

#ifdef COMMANDERDEFENSE_MyRTSPlayerController_generated_h
#error "MyRTSPlayerController.generated.h already included, missing '#pragma once' in MyRTSPlayerController.h"
#endif
#define COMMANDERDEFENSE_MyRTSPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyRTSPlayerController ***************************************************
struct Z_Construct_UClass_AMyRTSPlayerController_Statics;
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSPlayerController_NoRegister();

#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyRTSPlayerController(); \
	friend struct ::Z_Construct_UClass_AMyRTSPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMANDERDEFENSE_API UClass* ::Z_Construct_UClass_AMyRTSPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyRTSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommanderDefense"), Z_Construct_UClass_AMyRTSPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMyRTSPlayerController)


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyRTSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyRTSPlayerController(AMyRTSPlayerController&&) = delete; \
	AMyRTSPlayerController(const AMyRTSPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRTSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRTSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyRTSPlayerController) \
	NO_API virtual ~AMyRTSPlayerController();


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h_12_PROLOG
#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyRTSPlayerController;

// ********** End Class AMyRTSPlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
