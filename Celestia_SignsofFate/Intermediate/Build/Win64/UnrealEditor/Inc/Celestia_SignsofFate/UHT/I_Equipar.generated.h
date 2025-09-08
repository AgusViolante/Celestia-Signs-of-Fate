// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "interfaces/I_Equipar.h"

#ifdef CELESTIA_SIGNSOFFATE_I_Equipar_generated_h
#error "I_Equipar.generated.h already included, missing '#pragma once' in I_Equipar.h"
#endif
#define CELESTIA_SIGNSOFFATE_I_Equipar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UI_Equipar ***********************************************************
#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddHelmet_Implementation(int32 Coins) {}; \
	DECLARE_FUNCTION(execAddHelmet);


#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_CALLBACK_WRAPPERS
CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UI_Equipar_NoRegister();

#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CELESTIA_SIGNSOFFATE_API UI_Equipar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UI_Equipar(UI_Equipar&&) = delete; \
	UI_Equipar(const UI_Equipar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CELESTIA_SIGNSOFFATE_API, UI_Equipar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_Equipar); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_Equipar) \
	virtual ~UI_Equipar() = default;


#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUI_Equipar(); \
	friend struct Z_Construct_UClass_UI_Equipar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CELESTIA_SIGNSOFFATE_API UClass* Z_Construct_UClass_UI_Equipar_NoRegister(); \
public: \
	DECLARE_CLASS2(UI_Equipar, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Celestia_SignsofFate"), Z_Construct_UClass_UI_Equipar_NoRegister) \
	DECLARE_SERIALIZER(UI_Equipar)


#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~II_Equipar() {} \
public: \
	typedef UI_Equipar UClassType; \
	typedef II_Equipar ThisClass; \
	static void Execute_AddHelmet(UObject* O, int32 Coins); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_11_PROLOG
#define FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_CALLBACK_WRAPPERS \
	FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UI_Equipar;

// ********** End Interface UI_Equipar *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_violanteagus_Desktop_Githubs_Celestia_Signs_of_Fate_Celestia_SignsofFate_Source_Celestia_SignsofFate_Public_interfaces_I_Equipar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
