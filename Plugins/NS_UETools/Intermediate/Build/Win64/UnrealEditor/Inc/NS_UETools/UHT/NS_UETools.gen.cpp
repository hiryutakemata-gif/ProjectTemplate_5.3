// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NS_UETools/Public/NS_UETools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNS_UETools() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NS_UETOOLS_API UClass* Z_Construct_UClass_UCustomObject();
	NS_UETOOLS_API UClass* Z_Construct_UClass_UCustomObject_NoRegister();
	NS_UETOOLS_API UClass* Z_Construct_UClass_UNS_UETools();
	NS_UETOOLS_API UClass* Z_Construct_UClass_UNS_UETools_NoRegister();
	NS_UETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialMappingDataTable();
	UPackage* Z_Construct_UPackage__Script_NS_UETools();
// End Cross Module References
	DEFINE_FUNCTION(UNS_UETools::execGetWorldAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UNS_UETools::GetWorldAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNS_UETools::execExitLevelInstanceEdit)
	{
		P_GET_OBJECT(ALevelInstance,Z_Param_LevelInstanceActor);
		P_GET_UBOOL(Z_Param_bDiscardEdits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNS_UETools::ExitLevelInstanceEdit(Z_Param_LevelInstanceActor,Z_Param_bDiscardEdits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNS_UETools::execOpenDirectoryDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNS_UETools::OpenDirectoryDialog(Z_Param_ContentPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNS_UETools::execOpenFileDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UNS_UETools::OpenFileDialog();
		P_NATIVE_END;
	}
	void UNS_UETools::StaticRegisterNativesUNS_UETools()
	{
		UClass* Class = UNS_UETools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitLevelInstanceEdit", &UNS_UETools::execExitLevelInstanceEdit },
			{ "GetWorldAsset", &UNS_UETools::execGetWorldAsset },
			{ "OpenDirectoryDialog", &UNS_UETools::execOpenDirectoryDialog },
			{ "OpenFileDialog", &UNS_UETools::execOpenFileDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics
	{
		struct NS_UETools_eventExitLevelInstanceEdit_Parms
		{
			ALevelInstance* LevelInstanceActor;
			bool bDiscardEdits;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelInstanceActor;
		static void NewProp_bDiscardEdits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardEdits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_LevelInstanceActor = { "LevelInstanceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NS_UETools_eventExitLevelInstanceEdit_Parms, LevelInstanceActor), Z_Construct_UClass_ALevelInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_bDiscardEdits_SetBit(void* Obj)
	{
		((NS_UETools_eventExitLevelInstanceEdit_Parms*)Obj)->bDiscardEdits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_bDiscardEdits = { "bDiscardEdits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NS_UETools_eventExitLevelInstanceEdit_Parms), &Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_bDiscardEdits_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NS_UETools_eventExitLevelInstanceEdit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NS_UETools_eventExitLevelInstanceEdit_Parms), &Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_LevelInstanceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_bDiscardEdits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::Function_MetaDataParams[] = {
		{ "Category", "NS_UETools" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNS_UETools, nullptr, "ExitLevelInstanceEdit", nullptr, nullptr, Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NS_UETools_eventExitLevelInstanceEdit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::NS_UETools_eventExitLevelInstanceEdit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics
	{
		struct NS_UETools_eventGetWorldAsset_Parms
		{
			UObject* Asset;
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NS_UETools_eventGetWorldAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NS_UETools_eventGetWorldAsset_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "NS_UETools" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNS_UETools, nullptr, "GetWorldAsset", nullptr, nullptr, Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::NS_UETools_eventGetWorldAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::NS_UETools_eventGetWorldAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNS_UETools_GetWorldAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNS_UETools_GetWorldAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics
	{
		struct NS_UETools_eventOpenDirectoryDialog_Parms
		{
			FString ContentPath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NS_UETools_eventOpenDirectoryDialog_Parms, ContentPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ContentPath_MetaData), Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ContentPath_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NS_UETools_eventOpenDirectoryDialog_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ContentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "NS_UETools" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNS_UETools, nullptr, "OpenDirectoryDialog", nullptr, nullptr, Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NS_UETools_eventOpenDirectoryDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::NS_UETools_eventOpenDirectoryDialog_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics
	{
		struct NS_UETools_eventOpenFileDialog_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NS_UETools_eventOpenFileDialog_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "NS_UETools" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNS_UETools, nullptr, "OpenFileDialog", nullptr, nullptr, Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::NS_UETools_eventOpenFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::NS_UETools_eventOpenFileDialog_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNS_UETools_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNS_UETools_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNS_UETools);
	UClass* Z_Construct_UClass_UNS_UETools_NoRegister()
	{
		return UNS_UETools::StaticClass();
	}
	struct Z_Construct_UClass_UNS_UETools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNS_UETools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NS_UETools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNS_UETools_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNS_UETools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNS_UETools_ExitLevelInstanceEdit, "ExitLevelInstanceEdit" }, // 3932045627
		{ &Z_Construct_UFunction_UNS_UETools_GetWorldAsset, "GetWorldAsset" }, // 4077709133
		{ &Z_Construct_UFunction_UNS_UETools_OpenDirectoryDialog, "OpenDirectoryDialog" }, // 1952634774
		{ &Z_Construct_UFunction_UNS_UETools_OpenFileDialog, "OpenFileDialog" }, // 3166079872
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNS_UETools_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNS_UETools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NS_UETools.h" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNS_UETools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNS_UETools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNS_UETools_Statics::ClassParams = {
		&UNS_UETools::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNS_UETools_Statics::Class_MetaDataParams), Z_Construct_UClass_UNS_UETools_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNS_UETools()
	{
		if (!Z_Registration_Info_UClass_UNS_UETools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNS_UETools.OuterSingleton, Z_Construct_UClass_UNS_UETools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNS_UETools.OuterSingleton;
	}
	template<> NS_UETOOLS_API UClass* StaticClass<UNS_UETools>()
	{
		return UNS_UETools::StaticClass();
	}
	UNS_UETools::UNS_UETools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNS_UETools);
	UNS_UETools::~UNS_UETools() {}
	void UCustomObject::StaticRegisterNativesUCustomObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomObject);
	UClass* Z_Construct_UClass_UCustomObject_NoRegister()
	{
		return UCustomObject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NS_UETools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NS_UETools.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomObject_Statics::ClassParams = {
		&UCustomObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomObject()
	{
		if (!Z_Registration_Info_UClass_UCustomObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomObject.OuterSingleton, Z_Construct_UClass_UCustomObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomObject.OuterSingleton;
	}
	template<> NS_UETOOLS_API UClass* StaticClass<UCustomObject>()
	{
		return UCustomObject::StaticClass();
	}
	UCustomObject::UCustomObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomObject);
	UCustomObject::~UCustomObject() {}

static_assert(std::is_polymorphic<FMaterialMappingDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMaterialMappingDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialMappingDataTable;
class UScriptStruct* FMaterialMappingDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialMappingDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialMappingDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialMappingDataTable, (UObject*)Z_Construct_UPackage__Script_NS_UETools(), TEXT("MaterialMappingDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialMappingDataTable.OuterSingleton;
}
template<> NS_UETOOLS_API UScriptStruct* StaticStruct<FMaterialMappingDataTable>()
{
	return FMaterialMappingDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialReplacement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialReplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Describe_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Describe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialMappingDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_MaterialReplacement_MetaData[] = {
		{ "Category", "MaterialMappingDataTable" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_MaterialReplacement = { "MaterialReplacement", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialMappingDataTable, MaterialReplacement), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_MaterialReplacement_MetaData), Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_MaterialReplacement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_Describe_MetaData[] = {
		{ "Category", "MaterialMappingDataTable" },
		{ "ModuleRelativePath", "Public/NS_UETools.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_Describe = { "Describe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialMappingDataTable, Describe), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_Describe_MetaData), Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_Describe_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_MaterialReplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewProp_Describe,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NS_UETools,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MaterialMappingDataTable",
		Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::PropPointers),
		sizeof(FMaterialMappingDataTable),
		alignof(FMaterialMappingDataTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialMappingDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialMappingDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialMappingDataTable.InnerSingleton, Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialMappingDataTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics::ScriptStructInfo[] = {
		{ FMaterialMappingDataTable::StaticStruct, Z_Construct_UScriptStruct_FMaterialMappingDataTable_Statics::NewStructOps, TEXT("MaterialMappingDataTable"), &Z_Registration_Info_UScriptStruct_MaterialMappingDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialMappingDataTable), 357691703U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNS_UETools, UNS_UETools::StaticClass, TEXT("UNS_UETools"), &Z_Registration_Info_UClass_UNS_UETools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNS_UETools), 2543604592U) },
		{ Z_Construct_UClass_UCustomObject, UCustomObject::StaticClass, TEXT("UCustomObject"), &Z_Registration_Info_UClass_UCustomObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomObject), 59068357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_3549195830(TEXT("/Script/NS_UETools"),
		Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Git_UEPluginDevelopment_TemplateDevelopment_Plugins_NS_UETools_Source_NS_UETools_Public_NS_UETools_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
