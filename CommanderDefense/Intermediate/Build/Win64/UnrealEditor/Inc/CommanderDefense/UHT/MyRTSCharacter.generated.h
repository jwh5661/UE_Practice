// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyRTSCharacter.h"

#ifdef COMMANDERDEFENSE_MyRTSCharacter_generated_h
#error "MyRTSCharacter.generated.h already included, missing '#pragma once' in MyRTSCharacter.h"
#endif
#define COMMANDERDEFENSE_MyRTSCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyRTSCharacter **********************************************************
#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSelected);


struct Z_Construct_UClass_AMyRTSCharacter_Statics;
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSCharacter_NoRegister();

#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyRTSCharacter(); \
	friend struct ::Z_Construct_UClass_AMyRTSCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMANDERDEFENSE_API UClass* ::Z_Construct_UClass_AMyRTSCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyRTSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommanderDefense"), Z_Construct_UClass_AMyRTSCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMyRTSCharacter)


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyRTSCharacter(AMyRTSCharacter&&) = delete; \
	AMyRTSCharacter(const AMyRTSCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRTSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRTSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyRTSCharacter) \
	NO_API virtual ~AMyRTSCharacter();


#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_19_PROLOG
#define FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyRTSCharacter;

// ********** End Class AMyRTSCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h

// ********** Begin Enum ERTSUnitState *************************************************************
#define FOREACH_ENUM_ERTSUNITSTATE(op) \
	op(ERTSUnitState::Idle) \
	op(ERTSUnitState::Move) \
	op(ERTSUnitState::Chase) \
	op(ERTSUnitState::Attack) \
	op(ERTSUnitState::Dead) 

enum class ERTSUnitState : uint8;
template<> struct TIsUEnumClass<ERTSUnitState> { enum { Value = true }; };
template<> COMMANDERDEFENSE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTSUnitState>();
// ********** End Enum ERTSUnitState ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
