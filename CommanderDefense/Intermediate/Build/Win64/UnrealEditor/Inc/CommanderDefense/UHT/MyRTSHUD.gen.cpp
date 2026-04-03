// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommanderDefense/MyRTSHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyRTSHUD() {}

// ********** Begin Cross Module References ********************************************************
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSHUD();
COMMANDERDEFENSE_API UClass* Z_Construct_UClass_AMyRTSHUD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_CommanderDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyRTSHUD ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyRTSHUD;
UClass* AMyRTSHUD::GetPrivateStaticClass()
{
	using TClass = AMyRTSHUD;
	if (!Z_Registration_Info_UClass_AMyRTSHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyRTSHUD"),
			Z_Registration_Info_UClass_AMyRTSHUD.InnerSingleton,
			StaticRegisterNativesAMyRTSHUD,
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
	return Z_Registration_Info_UClass_AMyRTSHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyRTSHUD_NoRegister()
{
	return AMyRTSHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyRTSHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyRTSHUD.h" },
		{ "ModuleRelativePath", "MyRTSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyRTSHUD constinit property declarations ********************************
// ********** End Class AMyRTSHUD constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRTSHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyRTSHUD_Statics
UObject* (*const Z_Construct_UClass_AMyRTSHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_CommanderDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyRTSHUD_Statics::ClassParams = {
	&AMyRTSHUD::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRTSHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyRTSHUD_Statics::Class_MetaDataParams)
};
void AMyRTSHUD::StaticRegisterNativesAMyRTSHUD()
{
}
UClass* Z_Construct_UClass_AMyRTSHUD()
{
	if (!Z_Registration_Info_UClass_AMyRTSHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyRTSHUD.OuterSingleton, Z_Construct_UClass_AMyRTSHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyRTSHUD.OuterSingleton;
}
AMyRTSHUD::AMyRTSHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyRTSHUD);
AMyRTSHUD::~AMyRTSHUD() {}
// ********** End Class AMyRTSHUD ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h__Script_CommanderDefense_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyRTSHUD, AMyRTSHUD::StaticClass, TEXT("AMyRTSHUD"), &Z_Registration_Info_UClass_AMyRTSHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyRTSHUD), 2187365967U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h__Script_CommanderDefense_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h__Script_CommanderDefense_4001110083{
	TEXT("/Script/CommanderDefense"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h__Script_CommanderDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSHUD_h__Script_CommanderDefense_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
