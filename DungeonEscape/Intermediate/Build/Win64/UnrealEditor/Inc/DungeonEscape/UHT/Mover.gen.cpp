// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mover.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMover() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UMover();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UMover_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMover *******************************************************************
void UMover::StaticRegisterNativesUMover()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMover;
UClass* UMover::GetPrivateStaticClass()
{
	using TClass = UMover;
	if (!Z_Registration_Info_UClass_UMover.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Mover"),
			Z_Registration_Info_UClass_UMover.InnerSingleton,
			StaticRegisterNativesUMover,
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
	return Z_Registration_Info_UClass_UMover.InnerSingleton;
}
UClass* Z_Construct_UClass_UMover_NoRegister()
{
	return UMover::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Mover.h" },
		{ "ModuleRelativePath", "Mover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shouldmove_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedTarget_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
	static void NewProp_Shouldmove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Shouldmove;
	static void NewProp_ReachedTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReachedTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMover, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveOffset_MetaData), NewProp_MoveOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMover, MoveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTime_MetaData), NewProp_MoveTime_MetaData) };
void Z_Construct_UClass_UMover_Statics::NewProp_Shouldmove_SetBit(void* Obj)
{
	((UMover*)Obj)->Shouldmove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_Shouldmove = { "Shouldmove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMover), &Z_Construct_UClass_UMover_Statics::NewProp_Shouldmove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shouldmove_MetaData), NewProp_Shouldmove_MetaData) };
void Z_Construct_UClass_UMover_Statics::NewProp_ReachedTarget_SetBit(void* Obj)
{
	((UMover*)Obj)->ReachedTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_ReachedTarget = { "ReachedTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMover), &Z_Construct_UClass_UMover_Statics::NewProp_ReachedTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedTarget_MetaData), NewProp_ReachedTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_MoveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_MoveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_Shouldmove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_ReachedTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMover_Statics::ClassParams = {
	&UMover::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::Class_MetaDataParams), Z_Construct_UClass_UMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMover()
{
	if (!Z_Registration_Info_UClass_UMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMover.OuterSingleton, Z_Construct_UClass_UMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMover.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMover);
UMover::~UMover() {}
// ********** End Class UMover *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_DungeonEscape_Source_DungeonEscape_Mover_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMover, UMover::StaticClass, TEXT("UMover"), &Z_Registration_Info_UClass_UMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMover), 877521006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_DungeonEscape_Source_DungeonEscape_Mover_h__Script_DungeonEscape_188255096(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_DungeonEscape_Source_DungeonEscape_Mover_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_DungeonEscape_Source_DungeonEscape_Mover_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
