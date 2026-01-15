// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroCppGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntroCppGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INTROCPP_API UClass* Z_Construct_UClass_AIntroCppGameMode();
INTROCPP_API UClass* Z_Construct_UClass_AIntroCppGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroCpp();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroCppGameMode ********************************************************
void AIntroCppGameMode::StaticRegisterNativesAIntroCppGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroCppGameMode;
UClass* AIntroCppGameMode::GetPrivateStaticClass()
{
	using TClass = AIntroCppGameMode;
	if (!Z_Registration_Info_UClass_AIntroCppGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntroCppGameMode"),
			Z_Registration_Info_UClass_AIntroCppGameMode.InnerSingleton,
			StaticRegisterNativesAIntroCppGameMode,
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
	return Z_Registration_Info_UClass_AIntroCppGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroCppGameMode_NoRegister()
{
	return AIntroCppGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroCppGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IntroCppGameMode.h" },
		{ "ModuleRelativePath", "IntroCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroCppGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIntroCppGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroCppGameMode_Statics::ClassParams = {
	&AIntroCppGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroCppGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroCppGameMode()
{
	if (!Z_Registration_Info_UClass_AIntroCppGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroCppGameMode.OuterSingleton, Z_Construct_UClass_AIntroCppGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroCppGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroCppGameMode);
AIntroCppGameMode::~AIntroCppGameMode() {}
// ********** End Class AIntroCppGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h__Script_IntroCpp_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroCppGameMode, AIntroCppGameMode::StaticClass, TEXT("AIntroCppGameMode"), &Z_Registration_Info_UClass_AIntroCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroCppGameMode), 2020708230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h__Script_IntroCpp_2593035340(TEXT("/Script/IntroCpp"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h__Script_IntroCpp_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_IntroCpp_Source_IntroCpp_IntroCppGameMode_h__Script_IntroCpp_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
