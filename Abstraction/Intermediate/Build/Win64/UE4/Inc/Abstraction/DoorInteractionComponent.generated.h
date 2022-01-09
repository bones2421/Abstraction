// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABSTRACTION_DoorInteractionComponent_generated_h
#error "DoorInteractionComponent.generated.h already included, missing '#pragma once' in DoorInteractionComponent.h"
#endif
#define ABSTRACTION_DoorInteractionComponent_generated_h

#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_SPARSE_DATA
#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS
#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abstraction"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public:


#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorInteractionComponent)


#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DesiredRotation() { return STRUCT_OFFSET(UDoorInteractionComponent, DesiredRotation); } \
	FORCEINLINE static uint32 __PPO__TimeToRotate() { return STRUCT_OFFSET(UDoorInteractionComponent, TimeToRotate); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(UDoorInteractionComponent, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__OpenCurve() { return STRUCT_OFFSET(UDoorInteractionComponent, OpenCurve); }


#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_12_PROLOG
#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_INCLASS \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_SPARSE_DATA \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
	Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABSTRACTION_API UClass* StaticClass<class UDoorInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Abstraction_Source_Abstraction_Public_DoorInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
