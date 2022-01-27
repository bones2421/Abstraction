// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/ObjectiveWorldSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveWorldSubsystem() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UObjectiveWorldSubsystem::execRemoveObjective)
	{
		P_GET_OBJECT(UObjectiveComponent,Z_Param_ObjectiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjective(Z_Param_ObjectiveComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveWorldSubsystem::execAddObjective)
	{
		P_GET_OBJECT(UObjectiveComponent,Z_Param_ObjectiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjective(Z_Param_ObjectiveComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveWorldSubsystem::execGetCurrentObjectiveDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentObjectiveDescription();
		P_NATIVE_END;
	}
	void UObjectiveWorldSubsystem::StaticRegisterNativesUObjectiveWorldSubsystem()
	{
		UClass* Class = UObjectiveWorldSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjective", &UObjectiveWorldSubsystem::execAddObjective },
			{ "GetCurrentObjectiveDescription", &UObjectiveWorldSubsystem::execGetCurrentObjectiveDescription },
			{ "RemoveObjective", &UObjectiveWorldSubsystem::execRemoveObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics
	{
		struct ObjectiveWorldSubsystem_eventAddObjective_Parms
		{
			UObjectiveComponent* ObjectiveComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent = { "ObjectiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveWorldSubsystem_eventAddObjective_Parms, ObjectiveComponent), Z_Construct_UClass_UObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWorldSubsystem, nullptr, "AddObjective", nullptr, nullptr, sizeof(ObjectiveWorldSubsystem_eventAddObjective_Parms), Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics
	{
		struct ObjectiveWorldSubsystem_eventGetCurrentObjectiveDescription_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveWorldSubsystem_eventGetCurrentObjectiveDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWorldSubsystem, nullptr, "GetCurrentObjectiveDescription", nullptr, nullptr, sizeof(ObjectiveWorldSubsystem_eventGetCurrentObjectiveDescription_Parms), Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics
	{
		struct ObjectiveWorldSubsystem_eventRemoveObjective_Parms
		{
			UObjectiveComponent* ObjectiveComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent = { "ObjectiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveWorldSubsystem_eventRemoveObjective_Parms, ObjectiveComponent), Z_Construct_UClass_UObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWorldSubsystem, nullptr, "RemoveObjective", nullptr, nullptr, sizeof(ObjectiveWorldSubsystem_eventRemoveObjective_Parms), Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem_NoRegister()
	{
		return UObjectiveWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective, "AddObjective" }, // 1709922051
		{ &Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription, "GetCurrentObjectiveDescription" }, // 4293411089
		{ &Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective, "RemoveObjective" }, // 3356325436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectiveWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveWorldSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::ClassParams = {
		&UObjectiveWorldSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectiveWorldSubsystem, 81909207);
	template<> ABSTRACTION_API UClass* StaticClass<UObjectiveWorldSubsystem>()
	{
		return UObjectiveWorldSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveWorldSubsystem(Z_Construct_UClass_UObjectiveWorldSubsystem, &UObjectiveWorldSubsystem::StaticClass, TEXT("/Script/Abstraction"), TEXT("UObjectiveWorldSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveWorldSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
