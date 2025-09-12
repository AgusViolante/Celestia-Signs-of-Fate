// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ExpComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExpComponent() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UExpComponent();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UExpComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UExpComponent Function ExpProxLVL ****************************************
struct Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics
{
	struct ExpComponent_eventExpProxLVL_Parms
	{
		int32 Level;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Funciones\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventExpProxLVL_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventExpProxLVL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExpComponent, nullptr, "ExpProxLVL", Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::ExpComponent_eventExpProxLVL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::ExpComponent_eventExpProxLVL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpComponent_ExpProxLVL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpComponent_ExpProxLVL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpComponent::execExpProxLVL)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ExpProxLVL(Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class UExpComponent Function ExpProxLVL ******************************************

// ********** Begin Class UExpComponent Function GetExpActual **************************************
struct Z_Construct_UFunction_UExpComponent_GetExpActual_Statics
{
	struct ExpComponent_eventGetExpActual_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventGetExpActual_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExpComponent, nullptr, "GetExpActual", Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::ExpComponent_eventGetExpActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::ExpComponent_eventGetExpActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpComponent_GetExpActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpComponent_GetExpActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpComponent::execGetExpActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExpActual();
	P_NATIVE_END;
}
// ********** End Class UExpComponent Function GetExpActual ****************************************

// ********** Begin Class UExpComponent Function GetExpNecesaria ***********************************
struct Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics
{
	struct ExpComponent_eventGetExpNecesaria_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventGetExpNecesaria_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExpComponent, nullptr, "GetExpNecesaria", Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::ExpComponent_eventGetExpNecesaria_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::ExpComponent_eventGetExpNecesaria_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpComponent_GetExpNecesaria()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpComponent_GetExpNecesaria_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpComponent::execGetExpNecesaria)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExpNecesaria();
	P_NATIVE_END;
}
// ********** End Class UExpComponent Function GetExpNecesaria *************************************

// ********** Begin Class UExpComponent Function GetLVL ********************************************
struct Z_Construct_UFunction_UExpComponent_GetLVL_Statics
{
	struct ExpComponent_eventGetLVL_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExpComponent_GetLVL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventGetLVL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpComponent_GetLVL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_GetLVL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetLVL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpComponent_GetLVL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExpComponent, nullptr, "GetLVL", Z_Construct_UFunction_UExpComponent_GetLVL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetLVL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpComponent_GetLVL_Statics::ExpComponent_eventGetLVL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_GetLVL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpComponent_GetLVL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExpComponent_GetLVL_Statics::ExpComponent_eventGetLVL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpComponent_GetLVL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpComponent_GetLVL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpComponent::execGetLVL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLVL();
	P_NATIVE_END;
}
// ********** End Class UExpComponent Function GetLVL **********************************************

// ********** Begin Class UExpComponent Function RecibeExp *****************************************
struct Z_Construct_UFunction_UExpComponent_RecibeExp_Statics
{
	struct ExpComponent_eventRecibeExp_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExpComponent_eventRecibeExp_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UExpComponent, nullptr, "RecibeExp", Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::ExpComponent_eventRecibeExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::ExpComponent_eventRecibeExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpComponent_RecibeExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpComponent_RecibeExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpComponent::execRecibeExp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecibeExp(Z_Param_amount);
	P_NATIVE_END;
}
// ********** End Class UExpComponent Function RecibeExp *******************************************

// ********** Begin Class UExpComponent ************************************************************
void UExpComponent::StaticRegisterNativesUExpComponent()
{
	UClass* Class = UExpComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExpProxLVL", &UExpComponent::execExpProxLVL },
		{ "GetExpActual", &UExpComponent::execGetExpActual },
		{ "GetExpNecesaria", &UExpComponent::execGetExpNecesaria },
		{ "GetLVL", &UExpComponent::execGetLVL },
		{ "RecibeExp", &UExpComponent::execRecibeExp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExpComponent;
UClass* UExpComponent::GetPrivateStaticClass()
{
	using TClass = UExpComponent;
	if (!Z_Registration_Info_UClass_UExpComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExpComponent"),
			Z_Registration_Info_UClass_UExpComponent.InnerSingleton,
			StaticRegisterNativesUExpComponent,
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
	return Z_Registration_Info_UClass_UExpComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UExpComponent_NoRegister()
{
	return UExpComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExpComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ExpComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lvl_MetaData[] = {
		{ "Category", "Exp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpActual_MetaData[] = {
		{ "Category", "Exp" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpNecesaria_MetaData[] = {
		{ "Category", "Exp" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lvl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpActual;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpNecesaria;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpComponent_ExpProxLVL, "ExpProxLVL" }, // 1069365129
		{ &Z_Construct_UFunction_UExpComponent_GetExpActual, "GetExpActual" }, // 3067483929
		{ &Z_Construct_UFunction_UExpComponent_GetExpNecesaria, "GetExpNecesaria" }, // 1065187721
		{ &Z_Construct_UFunction_UExpComponent_GetLVL, "GetLVL" }, // 3427712614
		{ &Z_Construct_UFunction_UExpComponent_RecibeExp, "RecibeExp" }, // 2258473258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExpComponent_Statics::NewProp_Lvl = { "Lvl", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpComponent, Lvl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lvl_MetaData), NewProp_Lvl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExpComponent_Statics::NewProp_ExpActual = { "ExpActual", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpComponent, ExpActual), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpActual_MetaData), NewProp_ExpActual_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExpComponent_Statics::NewProp_ExpNecesaria = { "ExpNecesaria", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpComponent, ExpNecesaria), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpNecesaria_MetaData), NewProp_ExpNecesaria_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpComponent_Statics::NewProp_Lvl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpComponent_Statics::NewProp_ExpActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpComponent_Statics::NewProp_ExpNecesaria,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExpComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpComponent_Statics::ClassParams = {
	&UExpComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExpComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExpComponent()
{
	if (!Z_Registration_Info_UClass_UExpComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpComponent.OuterSingleton, Z_Construct_UClass_UExpComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExpComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExpComponent);
UExpComponent::~UExpComponent() {}
// ********** End Class UExpComponent **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Components_ExpComponent_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExpComponent, UExpComponent::StaticClass, TEXT("UExpComponent"), &Z_Registration_Info_UClass_UExpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpComponent), 1187030200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Components_ExpComponent_h__Script_Celestia_SignsofFate_2226717205(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Components_ExpComponent_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_Components_ExpComponent_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
