// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_InterfaceOverlord_generated_h
#error "InterfaceOverlord.generated.h already included, missing '#pragma once' in InterfaceOverlord.h"
#endif
#define ARKANOID_InterfaceOverlord_generated_h

#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_SPARSE_DATA
#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_RPC_WRAPPERS
#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARKANOID_API UInterfaceOverlord(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceOverlord) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARKANOID_API, UInterfaceOverlord); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceOverlord); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARKANOID_API UInterfaceOverlord(UInterfaceOverlord&&); \
	ARKANOID_API UInterfaceOverlord(const UInterfaceOverlord&); \
public:


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARKANOID_API UInterfaceOverlord(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARKANOID_API UInterfaceOverlord(UInterfaceOverlord&&); \
	ARKANOID_API UInterfaceOverlord(const UInterfaceOverlord&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARKANOID_API, UInterfaceOverlord); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceOverlord); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceOverlord)


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfaceOverlord(); \
	friend struct Z_Construct_UClass_UInterfaceOverlord_Statics; \
public: \
	DECLARE_CLASS(UInterfaceOverlord, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arkanoid"), ARKANOID_API) \
	DECLARE_SERIALIZER(UInterfaceOverlord)


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_GENERATED_UINTERFACE_BODY() \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_GENERATED_UINTERFACE_BODY() \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfaceOverlord() {} \
public: \
	typedef UInterfaceOverlord UClassType; \
	typedef IInterfaceOverlord ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterfaceOverlord() {} \
public: \
	typedef UInterfaceOverlord UClassType; \
	typedef IInterfaceOverlord ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_10_PROLOG
#define Strategy_Source_Arkanoid_InterfaceOverlord_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_SPARSE_DATA \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_RPC_WRAPPERS \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_InterfaceOverlord_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_SPARSE_DATA \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_InterfaceOverlord_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class UInterfaceOverlord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Arkanoid_InterfaceOverlord_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
