// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Armor/BP_Helmet2.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBP_Helmet2() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ABP_Helmet2();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ABP_Helmet2_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABP_Helmet2 **************************************************************
void ABP_Helmet2::StaticRegisterNativesABP_Helmet2()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABP_Helmet2;
UClass* ABP_Helmet2::GetPrivateStaticClass()
{
	using TClass = ABP_Helmet2;
	if (!Z_Registration_Info_UClass_ABP_Helmet2.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BP_Helmet2"),
			Z_Registration_Info_UClass_ABP_Helmet2.InnerSingleton,
			StaticRegisterNativesABP_Helmet2,
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
	return Z_Registration_Info_UClass_ABP_Helmet2.InnerSingleton;
}
UClass* Z_Construct_UClass_ABP_Helmet2_NoRegister()
{
	return ABP_Helmet2::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABP_Helmet2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Armor/BP_Helmet2.h" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "BP_Helmet2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "BP_Helmet2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinsAmount_MetaData[] = {
		{ "Category", "BP_Helmet2" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCharacter_MetaData[] = {
		{ "Category", "BP_Helmet2" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuraCharacter_MetaData[] = {
		{ "Category", "BP_Helmet2" },
		{ "ModuleRelativePath", "Public/Armor/BP_Helmet2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinsAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CuraCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Helmet2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Helmet2, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Helmet2, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_CoinsAmount = { "CoinsAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Helmet2, CoinsAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinsAmount_MetaData), NewProp_CoinsAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_DamageCharacter = { "DamageCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Helmet2, DamageCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCharacter_MetaData), NewProp_DamageCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_CuraCharacter = { "CuraCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Helmet2, CuraCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuraCharacter_MetaData), NewProp_CuraCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Helmet2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_CoinsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_DamageCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Helmet2_Statics::NewProp_CuraCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Helmet2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABP_Helmet2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Helmet2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Helmet2_Statics::ClassParams = {
	&ABP_Helmet2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABP_Helmet2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Helmet2_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Helmet2_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_Helmet2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_Helmet2()
{
	if (!Z_Registration_Info_UClass_ABP_Helmet2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Helmet2.OuterSingleton, Z_Construct_UClass_ABP_Helmet2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_Helmet2.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Helmet2);
ABP_Helmet2::~ABP_Helmet2() {}
// ********** End Class ABP_Helmet2 ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet2_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Helmet2, ABP_Helmet2::StaticClass, TEXT("ABP_Helmet2"), &Z_Registration_Info_UClass_ABP_Helmet2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Helmet2), 3089369477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet2_h__Script_Celestia_SignsofFate_1820817513(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet2_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Armor_BP_Helmet2_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
