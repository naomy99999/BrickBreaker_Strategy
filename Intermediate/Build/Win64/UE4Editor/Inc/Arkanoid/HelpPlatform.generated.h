// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARKANOID_HelpPlatform_generated_h
#error "HelpPlatform.generated.h already included, missing '#pragma once' in HelpPlatform.h"
#endif
#define ARKANOID_HelpPlatform_generated_h

#define Strategy_Source_Arkanoid_HelpPlatform_h_13_SPARSE_DATA
#define Strategy_Source_Arkanoid_HelpPlatform_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHelpPlatform(); \
	friend struct Z_Construct_UClass_AHelpPlatform_Statics; \
public: \
	DECLARE_CLASS(AHelpPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(AHelpPlatform)


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHelpPlatform(); \
	friend struct Z_Construct_UClass_AHelpPlatform_Statics; \
public: \
	DECLARE_CLASS(AHelpPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(AHelpPlatform)


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHelpPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHelpPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelpPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelpPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHelpPlatform(AHelpPlatform&&); \
	NO_API AHelpPlatform(const AHelpPlatform&); \
public:


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHelpPlatform(AHelpPlatform&&); \
	NO_API AHelpPlatform(const AHelpPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHelpPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHelpPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHelpPlatform)


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_HelpPlatform() { return STRUCT_OFFSET(AHelpPlatform, SM_HelpPlatform); } \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(AHelpPlatform, BoxCollision); }


#define Strategy_Source_Arkanoid_HelpPlatform_h_10_PROLOG
#define Strategy_Source_Arkanoid_HelpPlatform_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_SPARSE_DATA \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_RPC_WRAPPERS \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_INCLASS \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_HelpPlatform_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_SPARSE_DATA \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_HelpPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class AHelpPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Arkanoid_HelpPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
