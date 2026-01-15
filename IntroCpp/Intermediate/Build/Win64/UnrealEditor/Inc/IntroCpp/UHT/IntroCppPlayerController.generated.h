// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroCppPlayerController.h"

#ifdef INTROCPP_IntroCppPlayerController_generated_h
#error "IntroCppPlayerController.generated.h already included, missing '#pragma once' in IntroCppPlayerController.h"
#endif
#define INTROCPP_IntroCppPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroCppPlayerController ************************************************
INTROCPP_API UClass* Z_Construct_UClass_AIntroCppPlayerController_NoRegister();

#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroCppPlayerController(); \
	friend struct Z_Construct_UClass_AIntroCppPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROCPP_API UClass* Z_Construct_UClass_AIntroCppPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroCppPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroCpp"), Z_Construct_UClass_AIntroCppPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AIntroCppPlayerController)


#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroCppPlayerController(AIntroCppPlayerController&&) = delete; \
	AIntroCppPlayerController(const AIntroCppPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroCppPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroCppPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIntroCppPlayerController) \
	NO_API virtual ~AIntroCppPlayerController();


#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h_17_PROLOG
#define FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroCppPlayerController;

// ********** End Class AIntroCppPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
