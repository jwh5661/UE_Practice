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
#endif // WITH_METADATA

// ********** Begin Class AMyRTSPlayerController constinit property declarations *******************
// ********** End Class AMyRTSPlayerController constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRTSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyRTSPlayerController_Statics
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AMyRTSPlayerController, AMyRTSPlayerController::StaticClass, TEXT("AMyRTSPlayerController"), &Z_Registration_Info_UClass_AMyRTSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyRTSPlayerController), 2986970992U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_3322509671{
	TEXT("/Script/CommanderDefense"),
	Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_Practice_CommanderDefense_Source_CommanderDefense_MyRTSPlayerController_h__Script_CommanderDefense_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
