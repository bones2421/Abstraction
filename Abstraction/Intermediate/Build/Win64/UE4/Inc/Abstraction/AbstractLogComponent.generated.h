// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABSTRACTION_AbstractLogComponent_generated_h
#error "AbstractLogComponent.generated.h already included, missing '#pragma once' in AbstractLogComponent.h"
#endif
#define ABSTRACTION_AbstractLogComponent_generated_h

#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_SPARSE_DATA
#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_RPC_WRAPPERS
#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbstractLogComponent(); \
	friend struct Z_Construct_UClass_UAbstractLogComponent_Statics; \
public: \
	DECLARE_CLASS(UAbstractLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(UAbstractLogComponent)


#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAbstractLogComponent(); \
	friend struct Z_Construct_UClass_UAbstractLogComponent_Statics; \
public: \
	DECLARE_CLASS(UAbstractLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(UAbstractLogComponent)


#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbstractLogComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbstractLogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbstractLogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbstractLogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbstractLogComponent(UAbstractLogComponent&&); \
	NO_API UAbstractLogComponent(const UAbstractLogComponent&); \
public:


#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbstractLogComponent(UAbstractLogComponent&&); \
	NO_API UAbstractLogComponent(const UAbstractLogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbstractLogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbstractLogComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbstractLogComponent)


#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataString() { return STRUCT_OFFSET(UAbstractLogComponent, DataString); }


#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_10_PROLOG
#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_RPC_WRAPPERS \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_INCLASS \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_INCLASS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_AbstractLogComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABSTRACTION_API UClass* StaticClass<class UAbstractLogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Abstraction_Source_Abstraction_Public_AbstractLogComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
