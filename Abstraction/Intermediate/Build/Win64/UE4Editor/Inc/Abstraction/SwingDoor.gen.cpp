// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/SwingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingDoor() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_ASwingDoor_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_ASwingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASwingDoor::execToggleDoor)
	{
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDoor(Z_Param_ForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwingDoor::execOpenDoor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor(Z_Param_dt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwingDoor::execCloseDoor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor(Z_Param_dt);
		P_NATIVE_END;
	}
	void ASwingDoor::StaticRegisterNativesASwingDoor()
	{
		UClass* Class = ASwingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ASwingDoor::execCloseDoor },
			{ "OpenDoor", &ASwingDoor::execOpenDoor },
			{ "ToggleDoor", &ASwingDoor::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics
	{
		struct SwingDoor_eventCloseDoor_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwingDoor_eventCloseDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "CloseDoor", nullptr, nullptr, sizeof(SwingDoor_eventCloseDoor_Parms), Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics
	{
		struct SwingDoor_eventOpenDoor_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwingDoor_eventOpenDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "OpenDoor", nullptr, nullptr, sizeof(SwingDoor_eventOpenDoor_Parms), Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics
	{
		struct SwingDoor_eventToggleDoor_Parms
		{
			FVector ForwardVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwingDoor_eventToggleDoor_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::NewProp_ForwardVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "ToggleDoor", nullptr, nullptr, sizeof(SwingDoor_eventToggleDoor_Parms), Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_ToggleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwingDoor_NoRegister()
	{
		return ASwingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASwingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwingDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwingDoor_CloseDoor, "CloseDoor" }, // 512702919
		{ &Z_Construct_UFunction_ASwingDoor_OpenDoor, "OpenDoor" }, // 1458736027
		{ &Z_Construct_UFunction_ASwingDoor_ToggleDoor, "ToggleDoor" }, // 1845059302
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwingDoor.h" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "Box Comps" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwingDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwingDoor_Statics::ClassParams = {
		&ASwingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwingDoor, 3466219193);
	template<> ABSTRACTION_API UClass* StaticClass<ASwingDoor>()
	{
		return ASwingDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwingDoor(Z_Construct_UClass_ASwingDoor, &ASwingDoor::StaticClass, TEXT("/Script/Abstraction"), TEXT("ASwingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
