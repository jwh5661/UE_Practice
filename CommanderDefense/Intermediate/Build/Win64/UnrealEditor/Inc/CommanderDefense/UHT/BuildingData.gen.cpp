// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommanderDefense/BuildingData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingData() {}

// ********** Begin Cross Module References ********************************************************
COMMANDERDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CommanderDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBuildingData *****************************************************
struct Z_Construct_UScriptStruct_FBuildingData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBuildingData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "BuildingData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[] = {
		{ "Category", "Building Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1. \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "BuildingData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1. \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionCost_MetaData[] = {
		{ "Category", "Building Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2. \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd \xef\xbf\xbd\xc7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ( \xef\xbf\xbd\xe6\xbf\xb5 \xef\xbf\xbd\xc3\xb9\xc4\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad )\n" },
#endif
		{ "ModuleRelativePath", "BuildingData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2. \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd \xef\xbf\xbd\xc7\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ( \xef\xbf\xbd\xe6\xbf\xb5 \xef\xbf\xbd\xc3\xb9\xc4\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad )" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingClass_MetaData[] = {
		{ "Category", "Building Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 3. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ( \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xad )\n" },
#endif
		{ "ModuleRelativePath", "BuildingData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ( \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xad )" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingData constinit property declarations *********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_BuildingName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstructionCost;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingData constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBuildingData_Statics
static_assert(std::is_polymorphic<FBuildingData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuildingData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingData;
class UScriptStruct* FBuildingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBuildingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBuildingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingData, (UObject*)Z_Construct_UPackage__Script_CommanderDefense(), TEXT("BuildingData"));
	}
	return Z_Registration_Info_UScriptStruct_FBuildingData.OuterSingleton;
	}

// ********** Begin ScriptStruct FBuildingData Property Definitions ********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingName = { "BuildingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, BuildingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingName_MetaData), NewProp_BuildingName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCost = { "ConstructionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, ConstructionCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructionCost_MetaData), NewProp_ConstructionCost_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingClass = { "BuildingClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, BuildingClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingClass_MetaData), NewProp_BuildingClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_ConstructionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingData Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommanderDefense,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"BuildingData",
	Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers),
	sizeof(FBuildingData),
	alignof(FBuildingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildingData()
{
	if (!Z_Registration_Info_UScriptStruct_FBuildingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingData.InnerSingleton, Z_Construct_UScriptStruct_FBuildingData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingData.InnerSingleton);
}
// ********** End ScriptStruct FBuildingData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_BuildingData_h__Script_CommanderDefense_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuildingData::StaticStruct, Z_Construct_UScriptStruct_FBuildingData_Statics::NewStructOps, TEXT("BuildingData"),&Z_Registration_Info_UScriptStruct_FBuildingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingData), 3682583334U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_BuildingData_h__Script_CommanderDefense_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_BuildingData_h__Script_CommanderDefense_3142547157{
	TEXT("/Script/CommanderDefense"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_BuildingData_h__Script_CommanderDefense_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_BuildingData_h__Script_CommanderDefense_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
