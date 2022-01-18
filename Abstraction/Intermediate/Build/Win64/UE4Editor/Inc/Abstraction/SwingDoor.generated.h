// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ABSTRACTION_SwingDoor_generated_h
#error "SwingDoor.generated.h already included, missing '#pragma once' in SwingDoor.h"
#endif
#define ABSTRACTION_SwingDoor_generated_h

#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_SPARSE_DATA
#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDoor); \
	DECLARE_FUNCTION(execOpenDoor); \
	DECLARE_FUNCTION(execCloseDoor);


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDoor); \
	DECLARE_FUNCTION(execOpenDoor); \
	DECLARE_FUNCTION(execCloseDoor);


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwingDoor(); \
	friend struct Z_Construct_UClass_ASwingDoor_Statics; \
public: \
	DECLARE_CLASS(ASwingDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(ASwingDoor)


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwingDoor(); \
	friend struct Z_Construct_UClass_ASwingDoor_Statics; \
public: \
	DECLARE_CLASS(ASwingDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(ASwingDoor)


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwingDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwingDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwingDoor(ASwingDoor&&); \
	NO_API ASwingDoor(const ASwingDoor&); \
public:


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwingDoor(ASwingDoor&&); \
	NO_API ASwingDoor(const ASwingDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwingDoor)


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_PRIVATE_PROPERTY_OFFSET
#define Abstraction_Source_Abstraction_Public_SwingDoor_h_9_PROLOG
#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_RPC_WRAPPERS \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_INCLASS \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Abstraction_Source_Abstraction_Public_SwingDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_INCLASS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_SwingDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABSTRACTION_API UClass* StaticClass<class ASwingDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Abstraction_Source_Abstraction_Public_SwingDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
