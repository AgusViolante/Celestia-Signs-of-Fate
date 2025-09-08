// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "interfaces/I_Equipar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeI_Equipar() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UI_Equipar();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UI_Equipar_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UI_Equipar Function AddHelmet ****************************************
struct I_Equipar_eventAddHelmet_Parms
{
	int32 Coins;
};
void II_Equipar::AddHelmet(int32 Coins)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddHelmet instead.");
}
static FName NAME_UI_Equipar_AddHelmet = FName(TEXT("AddHelmet"));
void II_Equipar::Execute_AddHelmet(UObject* O, int32 Coins)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UI_Equipar::StaticClass()));
	I_Equipar_eventAddHelmet_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UI_Equipar_AddHelmet);
	if (Func)
	{
		Parms.Coins=Coins;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (II_Equipar*)(O->GetNativeInterfaceAddress(UI_Equipar::StaticClass())))
	{
		I->AddHelmet_Implementation(Coins);
	}
}
struct Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void AddHelmet(ABP_Helmet2* Helmet);\n" },
#endif
		{ "ModuleRelativePath", "Public/interfaces/I_Equipar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void AddHelmet(ABP_Helmet2* Helmet);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(I_Equipar_eventAddHelmet_Parms, Coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::NewProp_Coins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UI_Equipar, nullptr, "AddHelmet", Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::PropPointers), sizeof(I_Equipar_eventAddHelmet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(I_Equipar_eventAddHelmet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UI_Equipar_AddHelmet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UI_Equipar_AddHelmet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(II_Equipar::execAddHelmet)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Coins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHelmet_Implementation(Z_Param_Coins);
	P_NATIVE_END;
}
// ********** End Interface UI_Equipar Function AddHelmet ******************************************

// ********** Begin Interface UI_Equipar ***********************************************************
void UI_Equipar::StaticRegisterNativesUI_Equipar()
{
	UClass* Class = UI_Equipar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHelmet", &II_Equipar::execAddHelmet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UI_Equipar;
UClass* UI_Equipar::GetPrivateStaticClass()
{
	using TClass = UI_Equipar;
	if (!Z_Registration_Info_UClass_UI_Equipar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("I_Equipar"),
			Z_Registration_Info_UClass_UI_Equipar.InnerSingleton,
			StaticRegisterNativesUI_Equipar,
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
	return Z_Registration_Info_UClass_UI_Equipar.InnerSingleton;
}
UClass* Z_Construct_UClass_UI_Equipar_NoRegister()
{
	return UI_Equipar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UI_Equipar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/interfaces/I_Equipar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UI_Equipar_AddHelmet, "AddHelmet" }, // 4038486927
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<II_Equipar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UI_Equipar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UI_Equipar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UI_Equipar_Statics::ClassParams = {
	&UI_Equipar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UI_Equipar_Statics::Class_MetaDataParams), Z_Construct_UClass_UI_Equipar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UI_Equipar()
{
	if (!Z_Registration_Info_UClass_UI_Equipar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UI_Equipar.OuterSingleton, Z_Construct_UClass_UI_Equipar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UI_Equipar.OuterSingleton;
}
UI_Equipar::UI_Equipar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UI_Equipar);
// ********** End Interface UI_Equipar *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UI_Equipar, UI_Equipar::StaticClass, TEXT("UI_Equipar"), &Z_Registration_Info_UClass_UI_Equipar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UI_Equipar), 3140158976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h__Script_Celestia_SignsofFate_3387865013(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
