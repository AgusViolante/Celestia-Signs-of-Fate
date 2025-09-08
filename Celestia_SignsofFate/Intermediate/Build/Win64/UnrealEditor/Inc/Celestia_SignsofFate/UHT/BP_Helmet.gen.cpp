// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Armor/BP_Helmet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBP_Helmet() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ABP_Helmet();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ABP_Helmet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABP_Helmet ***************************************************************
void ABP_Helmet::StaticRegisterNativesABP_Helmet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABP_Helmet;
UClass* ABP_Helmet::GetPrivateStaticClass()
{
	using TClass = ABP_Helmet;
	if (!Z_Registration_Info_UClass_ABP_Helmet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BP_Helmet"),
			Z_Registration_Info_UClass_ABP_Helmet.InnerSingleton,
			StaticRegisterNativesABP_Helmet,
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
	return Z_Registration_Info_UClass_ABP_Helmet.InnerSingleton;
}
UClass* Z_Construct_UClass_ABP_Helmet_NoRegister()
{
	return ABP_Helmet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABP_Helmet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Armor/BP_Helmet.h" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Helmet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABP_Helmet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Helmet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Helmet_Statics::ClassParams = {
	&ABP_Helmet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Helmet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_Helmet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_Helmet()
{
	if (!Z_Registration_Info_UClass_ABP_Helmet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Helmet.OuterSingleton, Z_Construct_UClass_ABP_Helmet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_Helmet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Helmet);
ABP_Helmet::~ABP_Helmet() {}
// ********** End Class ABP_Helmet *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Helmet, ABP_Helmet::StaticClass, TEXT("ABP_Helmet"), &Z_Registration_Info_UClass_ABP_Helmet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Helmet), 3088656873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet_h__Script_Celestia_SignsofFate_3102582827(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
