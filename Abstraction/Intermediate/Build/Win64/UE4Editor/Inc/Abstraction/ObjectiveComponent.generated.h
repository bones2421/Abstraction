// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EObjectiveState : int32;
#ifdef ABSTRACTION_ObjectiveComponent_generated_h
#error "ObjectiveComponent.generated.h already included, missing '#pragma once' in ObjectiveComponent.h"
#endif
#define ABSTRACTION_ObjectiveComponent_generated_h

#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_SPARSE_DATA
#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetDescription);


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetDescription);


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectiveComponent(); \
	friend struct Z_Construct_UClass_UObjectiveComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectiveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(UObjectiveComponent)


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUObjectiveComponent(); \
	friend struct Z_Construct_UClass_UObjectiveComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectiveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(UObjectiveComponent)


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectiveComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectiveComponent(UObjectiveComponent&&); \
	NO_API UObjectiveComponent(const UObjectiveComponent&); \
public:


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectiveComponent(UObjectiveComponent&&); \
	NO_API UObjectiveComponent(const UObjectiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectiveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectiveComponent)


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Description() { return STRUCT_OFFSET(UObjectiveComponent, Description); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UObjectiveComponent, State); }


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_18_PROLOG
#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_RPC_WRAPPERS \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_INCLASS \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_INCLASS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_ObjectiveComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABSTRACTION_API UClass* StaticClass<class UObjectiveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Abstraction_Source_Abstraction_Public_ObjectiveComponent_h


#define FOREACH_ENUM_EOBJECTIVESTATE(op) \
	op(EObjectiveState::OS_Inactive) \
	op(EObjectiveState::OS_Active) \
	op(EObjectiveState::OS_Completed) 

enum class EObjectiveState;
template<> ABSTRACTION_API UEnum* StaticEnum<EObjectiveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
