// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommanderDefense/MyRTSPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyRTSPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSPlayerController();
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommanderDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyRTSPlayerController ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyRTSPlayerController;
UClass* AMyRTSPlayerController::GetPrivateStaticClass()
{
	using TClass = AMyRTSPlayerController;
	if (!Z_Registration_Info_UClass_AMyRTSPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyRTSPlayerController"),
			Z_Registration_Info_UClass_AMyRTSPlayerController.InnerSingleton,
			StaticRegisterNativesAMyRTSPlayerController,
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
	return Z_Registration_Info_UClass_AMyRTSPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyRTSPlayerController_NoRegister()
{
	return AMyRTSPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyRTSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyRTSPlayerController.h" },
		{ "ModuleRelativePath", "MyRTSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Commander_MetaData[] = {
		{ "Category", "Commander Setting" },
		{ "ModuleRelativePath", "MyRTSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_LeftClick_MetaData[] = {
		{ "Category", "Commander Setting" },
		{ "ModuleRelativePath", "MyRTSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingDataTable_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MyRTSPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyRTSPlayerController constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Commander;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_LeftClick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMyRTSPlayerController constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRTSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyRTSPlayerController_Statics

// ********** Begin Class AMyRTSPlayerController Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyRTSPlayerController_Statics::NewProp_IMC_Commander = { "IMC_Commander", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyRTSPlayerController, IMC_Commander), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Commander_MetaData), NewProp_IMC_Commander_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyRTSPlayerController_Statics::NewProp_IA_LeftClick = { "IA_LeftClick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyRTSPlayerController, IA_LeftClick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_LeftClick_MetaData), NewProp_IA_LeftClick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyRTSPlayerController_Statics::NewProp_BuildingDataTable = { "BuildingDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyRTSPlayerController, BuildingDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingDataTable_MetaData), NewProp_BuildingDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyRTSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRTSPlayerController_Statics::NewProp_IMC_Commander,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRTSPlayerController_Statics::NewProp_IA_LeftClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRTSPlayerController_Statics::NewProp_BuildingDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AMyRTSPlayerController Property Definitions ********************************
UObject* (*const Z_Construct_UClass_AMyRTSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CommanderDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyRTSPlayerController_Statics::ClassParams = {
	&AMyRTSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyRTSPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyRTSPlayerController_Statics::Class_MetaDataParams)
};
void AMyRTSPlayerController::StaticRegisterNativesAMyRTSPlayerController()
{
}
UClass* Z_Construct_UClass_AMyRTSPlayerController()
{
	if (!Z_Registration_Info_UClass_AMyRTSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyRTSPlayerController.OuterSingleton, Z_Construct_UClass_AMyRTSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyRTSPlayerController.OuterSingleton;
}
AMyRTSPlayerController::AMyRTSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyRTSPlayerController);
AMyRTSPlayerController::~AMyRTSPlayerController() {}
// ********** End Class AMyRTSPlayerController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyRTSPlayerController, AMyRTSPlayerController::StaticClass, TEXT("AMyRTSPlayerController"), &Z_Registration_Info_UClass_AMyRTSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyRTSPlayerController), 1134823425U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_1327793049{
	TEXT("/Script/CommanderDefense"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
