// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Celestia_SignsofFateCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCelestia_SignsofFateCharacter() {}

// ********** Begin Cross Module References ********************************************************
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ABP_Helmet2_NoRegister();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ACelestia_SignsofFateCharacter();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_ACelestia_SignsofFateCharacter_NoRegister();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UExpComponent_NoRegister();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UI_Equipar_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_Celestia_SignsofFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACelestia_SignsofFateCharacter Function DoJumpEnd ************************
struct Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestia_SignsofFateCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestia_SignsofFateCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class ACelestia_SignsofFateCharacter Function DoJumpEnd **************************

// ********** Begin Class ACelestia_SignsofFateCharacter Function DoJumpStart **********************
struct Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestia_SignsofFateCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestia_SignsofFateCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class ACelestia_SignsofFateCharacter Function DoJumpStart ************************

// ********** Begin Class ACelestia_SignsofFateCharacter Function DoLook ***************************
struct Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics
{
	struct Celestia_SignsofFateCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Celestia_SignsofFateCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Celestia_SignsofFateCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestia_SignsofFateCharacter, nullptr, "DoLook", Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::Celestia_SignsofFateCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::Celestia_SignsofFateCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestia_SignsofFateCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class ACelestia_SignsofFateCharacter Function DoLook *****************************

// ********** Begin Class ACelestia_SignsofFateCharacter Function DoMove ***************************
struct Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics
{
	struct Celestia_SignsofFateCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Celestia_SignsofFateCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Celestia_SignsofFateCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestia_SignsofFateCharacter, nullptr, "DoMove", Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::Celestia_SignsofFateCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::Celestia_SignsofFateCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestia_SignsofFateCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class ACelestia_SignsofFateCharacter Function DoMove *****************************

// ********** Begin Class ACelestia_SignsofFateCharacter Function UsePotion ************************
struct Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestia_SignsofFateCharacter, nullptr, "UsePotion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestia_SignsofFateCharacter::execUsePotion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UsePotion();
	P_NATIVE_END;
}
// ********** End Class ACelestia_SignsofFateCharacter Function UsePotion **************************

// ********** Begin Class ACelestia_SignsofFateCharacter *******************************************
void ACelestia_SignsofFateCharacter::StaticRegisterNativesACelestia_SignsofFateCharacter()
{
	UClass* Class = ACelestia_SignsofFateCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &ACelestia_SignsofFateCharacter::execDoJumpEnd },
		{ "DoJumpStart", &ACelestia_SignsofFateCharacter::execDoJumpStart },
		{ "DoLook", &ACelestia_SignsofFateCharacter::execDoLook },
		{ "DoMove", &ACelestia_SignsofFateCharacter::execDoMove },
		{ "UsePotion", &ACelestia_SignsofFateCharacter::execUsePotion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter;
UClass* ACelestia_SignsofFateCharacter::GetPrivateStaticClass()
{
	using TClass = ACelestia_SignsofFateCharacter;
	if (!Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Celestia_SignsofFateCharacter"),
			Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter.InnerSingleton,
			StaticRegisterNativesACelestia_SignsofFateCharacter,
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
	return Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACelestia_SignsofFateCharacter_NoRegister()
{
	return ACelestia_SignsofFateCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Celestia_SignsofFateCharacter.h" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Using_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_Helmet2_MetaData[] = {
		{ "Category", "Celestia_SignsofFateCharacter" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Helmets_MetaData[] = {
		{ "Category", "Inventary" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Potion_MetaData[] = {
		{ "Category", "Inventary" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuraCharacter_MetaData[] = {
		{ "Category", "Celestia_SignsofFateCharacter" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Componentes\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componentes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Celestia_SignsofFateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Using;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BP_Helmet2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Helmets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Potion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CuraCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Exp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpEnd, "DoJumpEnd" }, // 2204199334
		{ &Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoJumpStart, "DoJumpStart" }, // 1000940405
		{ &Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoLook, "DoLook" }, // 3773521396
		{ &Z_Construct_UFunction_ACelestia_SignsofFateCharacter_DoMove, "DoMove" }, // 3448592014
		{ &Z_Construct_UFunction_ACelestia_SignsofFateCharacter_UsePotion, "UsePotion" }, // 2820711986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACelestia_SignsofFateCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_IA_Using = { "IA_Using", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, IA_Using), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Using_MetaData), NewProp_IA_Using_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_BP_Helmet2 = { "BP_Helmet2", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, BP_Helmet2), Z_Construct_UClass_ABP_Helmet2_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_Helmet2_MetaData), NewProp_BP_Helmet2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Helmets = { "Helmets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, Helmets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Helmets_MetaData), NewProp_Helmets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Potion = { "Potion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, Potion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Potion_MetaData), NewProp_Potion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_CuraCharacter = { "CuraCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, CuraCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuraCharacter_MetaData), NewProp_CuraCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, Exp), Z_Construct_UClass_UExpComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exp_MetaData), NewProp_Exp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestia_SignsofFateCharacter, Health), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_IA_Using,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_BP_Helmet2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Helmets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Potion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_CuraCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Exp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Celestia_SignsofFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UI_Equipar_NoRegister, (int32)VTABLE_OFFSET(ACelestia_SignsofFateCharacter, II_Equipar), false },  // 2809373458
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::ClassParams = {
	&ACelestia_SignsofFateCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACelestia_SignsofFateCharacter()
{
	if (!Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter.OuterSingleton, Z_Construct_UClass_ACelestia_SignsofFateCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACelestia_SignsofFateCharacter);
ACelestia_SignsofFateCharacter::~ACelestia_SignsofFateCharacter() {}
// ********** End Class ACelestia_SignsofFateCharacter *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateCharacter_h__Script_Celestia_SignsofFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACelestia_SignsofFateCharacter, ACelestia_SignsofFateCharacter::StaticClass, TEXT("ACelestia_SignsofFateCharacter"), &Z_Registration_Info_UClass_ACelestia_SignsofFateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACelestia_SignsofFateCharacter), 694351035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateCharacter_h__Script_Celestia_SignsofFate_3747738570(TEXT("/Script/Celestia_SignsofFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateCharacter_h__Script_Celestia_SignsofFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Celestia_SignsofFateCharacter_h__Script_Celestia_SignsofFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
