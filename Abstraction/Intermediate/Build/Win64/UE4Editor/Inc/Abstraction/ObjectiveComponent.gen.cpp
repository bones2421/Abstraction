// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/ObjectiveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveComponent() {}
// Cross Module References
	ABSTRACTION_API UEnum* Z_Construct_UEnum_Abstraction_EObjectiveState();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveComponent_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_UObjectiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EObjectiveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Abstraction_EObjectiveState, Z_Construct_UPackage__Script_Abstraction(), TEXT("EObjectiveState"));
		}
		return Singleton;
	}
	template<> ABSTRACTION_API UEnum* StaticEnum<EObjectiveState>()
	{
		return EObjectiveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectiveState(EObjectiveState_StaticEnum, TEXT("/Script/Abstraction"), TEXT("EObjectiveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Abstraction_EObjectiveState_Hash() { return 2737915018U; }
	UEnum* Z_Construct_UEnum_Abstraction_EObjectiveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Abstraction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectiveState"), 0, Get_Z_Construct_UEnum_Abstraction_EObjectiveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectiveState::OS_Inactive", (int64)EObjectiveState::OS_Inactive },
				{ "EObjectiveState::OS_Active", (int64)EObjectiveState::OS_Active },
				{ "EObjectiveState::OS_Completed", (int64)EObjectiveState::OS_Completed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
				{ "OS_Active.DispayName", "Active" },
				{ "OS_Active.Name", "EObjectiveState::OS_Active" },
				{ "OS_Completed.DisplayName", "Completed" },
				{ "OS_Completed.Name", "EObjectiveState::OS_Completed" },
				{ "OS_Inactive.DisplayName", "Inactive" },
				{ "OS_Inactive.Name", "EObjectiveState::OS_Inactive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Abstraction,
				nullptr,
				"EObjectiveState",
				"EObjectiveState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UObjectiveComponent::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EObjectiveState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveComponent::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	void UObjectiveComponent::StaticRegisterNativesUObjectiveComponent()
	{
		UClass* Class = UObjectiveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDescription", &UObjectiveComponent::execGetDescription },
			{ "GetState", &UObjectiveComponent::execGetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics
	{
		struct ObjectiveComponent_eventGetDescription_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveComponent_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveComponent, nullptr, "GetDescription", nullptr, nullptr, sizeof(ObjectiveComponent_eventGetDescription_Parms), Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveComponent_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveComponent_GetState_Statics
	{
		struct ObjectiveComponent_eventGetState_Parms
		{
			EObjectiveState ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveComponent_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Abstraction_EObjectiveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveComponent, nullptr, "GetState", nullptr, nullptr, sizeof(ObjectiveComponent_eventGetState_Parms), Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveComponent_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectiveComponent_NoRegister()
	{
		return UObjectiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveComponent_GetDescription, "GetDescription" }, // 1445143044
		{ &Z_Construct_UFunction_UObjectiveComponent_GetState, "GetState" }, // 836796407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectiveComponent.h" },
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ObjectiveComponent" },
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveComponent, Description), METADATA_PARAMS(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ObjectiveComponent" },
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveComponent, State), Z_Construct_UEnum_Abstraction_EObjectiveState, METADATA_PARAMS(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveComponent_Statics::ClassParams = {
		&UObjectiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectiveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectiveComponent, 3234347936);
	template<> ABSTRACTION_API UClass* StaticClass<UObjectiveComponent>()
	{
		return UObjectiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveComponent(Z_Construct_UClass_UObjectiveComponent, &UObjectiveComponent::StaticClass, TEXT("/Script/Abstraction"), TEXT("UObjectiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
