// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommanderDefense/CommanderCameraPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCommanderCameraPawn() {}

// ********** Begin Cross Module References ********************************************************
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_ACommanderCameraPawn();
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_ACommanderCameraPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommanderDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACommanderCameraPawn *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACommanderCameraPawn;
UClass* ACommanderCameraPawn::GetPrivateStaticClass()
{
	using TClass = ACommanderCameraPawn;
	if (!Z_Registration_Info_UClass_ACommanderCameraPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CommanderCameraPawn"),
			Z_Registration_Info_UClass_ACommanderCameraPawn.InnerSingleton,
			StaticRegisterNativesACommanderCameraPawn,
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
	return Z_Registration_Info_UClass_ACommanderCameraPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACommanderCameraPawn_NoRegister()
{
	return ACommanderCameraPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACommanderCameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CommanderCameraPawn.h" },
		{ "ModuleRelativePath", "CommanderCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xab\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CommanderCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xab\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CommanderCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACommanderCameraPawn constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACommanderCameraPawn constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACommanderCameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACommanderCameraPawn_Statics

// ********** Begin Class ACommanderCameraPawn Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACommanderCameraPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommanderCameraPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACommanderCameraPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommanderCameraPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACommanderCameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommanderCameraPawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommanderCameraPawn_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACommanderCameraPawn_Statics::PropPointers) < 2048);
// ********** End Class ACommanderCameraPawn Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ACommanderCameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CommanderDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACommanderCameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACommanderCameraPawn_Statics::ClassParams = {
	&ACommanderCameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACommanderCameraPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACommanderCameraPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACommanderCameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACommanderCameraPawn_Statics::Class_MetaDataParams)
};
void ACommanderCameraPawn::StaticRegisterNativesACommanderCameraPawn()
{
}
UClass* Z_Construct_UClass_ACommanderCameraPawn()
{
	if (!Z_Registration_Info_UClass_ACommanderCameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACommanderCameraPawn.OuterSingleton, Z_Construct_UClass_ACommanderCameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACommanderCameraPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACommanderCameraPawn);
ACommanderCameraPawn::~ACommanderCameraPawn() {}
// ********** End Class ACommanderCameraPawn *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h__Script_CommanderDefense_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACommanderCameraPawn, ACommanderCameraPawn::StaticClass, TEXT("ACommanderCameraPawn"), &Z_Registration_Info_UClass_ACommanderCameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACommanderCameraPawn), 2837485019U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h__Script_CommanderDefense_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h__Script_CommanderDefense_3793240332{
	TEXT("/Script/CommanderDefense"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h__Script_CommanderDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_CommanderCameraPawn_h__Script_CommanderDefense_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
