// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/InteractableDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDoor() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_AInteractableDoor_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_AInteractableDoor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
	ABSTRACTION_API UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister();
// End Cross Module References
	void AInteractableDoor::StaticRegisterNativesAInteractableDoor()
	{
	}
	UClass* Z_Construct_UClass_AInteractableDoor_NoRegister()
	{
		return AInteractableDoor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorInteractionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorInteractionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractableDoor.h" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent_MetaData[] = {
		{ "Category", "InteractableDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent = { "DoorInteractionComponent", nullptr, (EPropertyFlags)0x0020080002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableDoor, DoorInteractionComponent), Z_Construct_UClass_UDoorInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorInteractionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableDoor_Statics::ClassParams = {
		&AInteractableDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableDoor, 2687936385);
	template<> ABSTRACTION_API UClass* StaticClass<AInteractableDoor>()
	{
		return AInteractableDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableDoor(Z_Construct_UClass_AInteractableDoor, &AInteractableDoor::StaticClass, TEXT("/Script/Abstraction"), TEXT("AInteractableDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
