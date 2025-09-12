// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Armor/AumentaExperiencia.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAumentaExperiencia() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_AAumentaExperiencia();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_AAumentaExperiencia_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAumentaExperiencia ******************************************************
void AAumentaExperiencia::StaticRegisterNativesAAumentaExperiencia()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAumentaExperiencia;
UClass* AAumentaExperiencia::GetPrivateStaticClass()
{
	using TClass = AAumentaExperiencia;
	if (!Z_Registration_Info_UClass_AAumentaExperiencia.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AumentaExperiencia"),
			Z_Registration_Info_UClass_AAumentaExperiencia.InnerSingleton,
			StaticRegisterNativesAAumentaExperiencia,
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
	return Z_Registration_Info_UClass_AAumentaExperiencia.InnerSingleton;
}
UClass* Z_Construct_UClass_AAumentaExperiencia_NoRegister()
{
	return AAumentaExperiencia::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAumentaExperiencia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Armor/AumentaExperiencia.h" },
		{ "ModuleRelativePath", "Public/Armor/AumentaExperiencia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "AumentaExperiencia" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Armor/AumentaExperiencia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "AumentaExperiencia" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Armor/AumentaExperiencia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpAdquirida_MetaData[] = {
		{ "Category", "AumentaExperiencia" },
		{ "ModuleRelativePath", "Public/Armor/AumentaExperiencia.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpAdquirida;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAumentaExperiencia>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAumentaExperiencia_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAumentaExperiencia, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAumentaExperiencia_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAumentaExperiencia, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAumentaExperiencia_Statics::NewProp_ExpAdquirida = { "ExpAdquirida", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAumentaExperiencia, ExpAdquirida), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpAdquirida_MetaData), NewProp_ExpAdquirida_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAumentaExperiencia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAumentaExperiencia_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAumentaExperiencia_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAumentaExperiencia_Statics::NewProp_ExpAdquirida,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAumentaExperiencia_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAumentaExperiencia_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAumentaExperiencia_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAumentaExperiencia_Statics::ClassParams = {
	&AAumentaExperiencia::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAumentaExperiencia_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAumentaExperiencia_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAumentaExperiencia_Statics::Class_MetaDataParams), Z_Construct_UClass_AAumentaExperiencia_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAumentaExperiencia()
{
	if (!Z_Registration_Info_UClass_AAumentaExperiencia.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAumentaExperiencia.OuterSingleton, Z_Construct_UClass_AAumentaExperiencia_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAumentaExperiencia.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAumentaExperiencia);
AAumentaExperiencia::~AAumentaExperiencia() {}
// ********** End Class AAumentaExperiencia ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_AumentaExperiencia_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAumentaExperiencia, AAumentaExperiencia::StaticClass, TEXT("AAumentaExperiencia"), &Z_Registration_Info_UClass_AAumentaExperiencia, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAumentaExperiencia), 4225253792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_AumentaExperiencia_h__Script_Celestia_SignsofFate_413560263(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_AumentaExperiencia_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_AumentaExperiencia_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
