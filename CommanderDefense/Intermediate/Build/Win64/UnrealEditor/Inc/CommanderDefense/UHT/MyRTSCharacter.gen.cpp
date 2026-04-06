// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommanderDefense/MyRTSCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyRTSCharacter() {}

// ********** Begin Cross Module References ********************************************************
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSCharacter();
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSCharacter_NoRegister();
COMMANDERDEFENSE_API UEnum* Z_Construct_UEnum_CommanderDefense_ERTSUnitState();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CommanderDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERTSUnitState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTSUnitState;
static UEnum* ERTSUnitState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTSUnitState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTSUnitState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommanderDefense_ERTSUnitState, (UObject*)Z_Construct_UPackage__Script_CommanderDefense(), TEXT("ERTSUnitState"));
	}
	return Z_Registration_Info_UEnum_ERTSUnitState.OuterSingleton;
}
template<> COMMANDERDEFENSE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTSUnitState>()
{
	return ERTSUnitState_StaticEnum();
}
struct Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Attack.Name", "ERTSUnitState::Attack" },
		{ "BlueprintType", "true" },
		{ "Chase.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Chase.Name", "ERTSUnitState::Chase" },
		{ "Dead.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Dead.Name", "ERTSUnitState::Dead" },
		{ "Idle.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Idle.Name", "ERTSUnitState::Idle" },
		{ "ModuleRelativePath", "MyRTSCharacter.h" },
		{ "Move.DisplayName", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd" },
		{ "Move.Name", "ERTSUnitState::Move" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTSUnitState::Idle", (int64)ERTSUnitState::Idle },
		{ "ERTSUnitState::Move", (int64)ERTSUnitState::Move },
		{ "ERTSUnitState::Chase", (int64)ERTSUnitState::Chase },
		{ "ERTSUnitState::Attack", (int64)ERTSUnitState::Attack },
		{ "ERTSUnitState::Dead", (int64)ERTSUnitState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CommanderDefense,
	nullptr,
	"ERTSUnitState",
	"ERTSUnitState",
	Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CommanderDefense_ERTSUnitState()
{
	if (!Z_Registration_Info_UEnum_ERTSUnitState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTSUnitState.InnerSingleton, Z_Construct_UEnum_CommanderDefense_ERTSUnitState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTSUnitState.InnerSingleton;
}
// ********** End Enum ERTSUnitState ***************************************************************

// ********** Begin Class AMyRTSCharacter Function SetSelected *************************************
struct Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics
{
	struct MyRTSCharacter_eventSetSelected_Parms
	{
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
		{ "ModuleRelativePath", "MyRTSCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelected constinit property declarations ***************************
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelected constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelected Property Definitions **************************************
void Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((MyRTSCharacter_eventSetSelected_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyRTSCharacter_eventSetSelected_Parms), &Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::PropPointers) < 2048);
// ********** End Function SetSelected Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyRTSCharacter, nullptr, "SetSelected", 	Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::MyRTSCharacter_eventSetSelected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::MyRTSCharacter_eventSetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyRTSCharacter_SetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyRTSCharacter_SetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyRTSCharacter::execSetSelected)
{
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelected(Z_Param_bSelected);
	P_NATIVE_END;
}
// ********** End Class AMyRTSCharacter Function SetSelected ***************************************

// ********** Begin Class AMyRTSCharacter **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyRTSCharacter;
UClass* AMyRTSCharacter::GetPrivateStaticClass()
{
	using TClass = AMyRTSCharacter;
	if (!Z_Registration_Info_UClass_AMyRTSCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyRTSCharacter"),
			Z_Registration_Info_UClass_AMyRTSCharacter.InnerSingleton,
			StaticRegisterNativesAMyRTSCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyRTSCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyRTSCharacter_NoRegister()
{
	return AMyRTSCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyRTSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyRTSCharacter.h" },
		{ "ModuleRelativePath", "MyRTSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "RTS|State" },
		{ "ModuleRelativePath", "MyRTSCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyRTSCharacter constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMyRTSCharacter constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetSelected"), .Pointer = &AMyRTSCharacter::execSetSelected },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyRTSCharacter_SetSelected, "SetSelected" }, // 2978658256
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRTSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyRTSCharacter_Statics

// ********** Begin Class AMyRTSCharacter Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyRTSCharacter_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyRTSCharacter_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyRTSCharacter, CurrentState), Z_Construct_UEnum_CommanderDefense_ERTSUnitState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2250908962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyRTSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRTSCharacter_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRTSCharacter_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSCharacter_Statics::PropPointers) < 2048);
// ********** End Class AMyRTSCharacter Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AMyRTSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CommanderDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyRTSCharacter_Statics::ClassParams = {
	&AMyRTSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyRTSCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyRTSCharacter_Statics::Class_MetaDataParams)
};
void AMyRTSCharacter::StaticRegisterNativesAMyRTSCharacter()
{
	UClass* Class = AMyRTSCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMyRTSCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMyRTSCharacter()
{
	if (!Z_Registration_Info_UClass_AMyRTSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyRTSCharacter.OuterSingleton, Z_Construct_UClass_AMyRTSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyRTSCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyRTSCharacter);
AMyRTSCharacter::~AMyRTSCharacter() {}
// ********** End Class AMyRTSCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTSUnitState_StaticEnum, TEXT("ERTSUnitState"), &Z_Registration_Info_UEnum_ERTSUnitState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2250908962U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyRTSCharacter, AMyRTSCharacter::StaticClass, TEXT("AMyRTSCharacter"), &Z_Registration_Info_UClass_AMyRTSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyRTSCharacter), 2526288456U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_719410656{
	TEXT("/Script/CommanderDefense"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSCharacter_h__Script_CommanderDefense_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
