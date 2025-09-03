// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Celestia_SignsofFateGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCelestia_SignsofFateGameMode() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ACelestia_SignsofFateGameMode();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ACelestia_SignsofFateGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACelestia_SignsofFateGameMode ********************************************
void ACelestia_SignsofFateGameMode::StaticRegisterNativesACelestia_SignsofFateGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode;
UClass* ACelestia_SignsofFateGameMode::GetPrivateStaticClass()
{
	using TClass = ACelestia_SignsofFateGameMode;
	if (!Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Celestia_SignsofFateGameMode"),
			Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode.InnerSingleton,
			StaticRegisterNativesACelestia_SignsofFateGameMode,
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
	return Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACelestia_SignsofFateGameMode_NoRegister()
{
	return ACelestia_SignsofFateGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Celestia_SignsofFateGameMode.h" },
		{ "ModuleRelativePath", "Celestia_SignsofFateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACelestia_SignsofFateGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics::ClassParams = {
	&ACelestia_SignsofFateGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACelestia_SignsofFateGameMode()
{
	if (!Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode.OuterSingleton, Z_Construct_UClass_ACelestia_SignsofFateGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACelestia_SignsofFateGameMode);
ACelestia_SignsofFateGameMode::~ACelestia_SignsofFateGameMode() {}
// ********** End Class ACelestia_SignsofFateGameMode **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateGameMode_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACelestia_SignsofFateGameMode, ACelestia_SignsofFateGameMode::StaticClass, TEXT("ACelestia_SignsofFateGameMode"), &Z_Registration_Info_UClass_ACelestia_SignsofFateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACelestia_SignsofFateGameMode), 3170555037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateGameMode_h__Script_Celestia_SignsofFate_841997698(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateGameMode_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateGameMode_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
