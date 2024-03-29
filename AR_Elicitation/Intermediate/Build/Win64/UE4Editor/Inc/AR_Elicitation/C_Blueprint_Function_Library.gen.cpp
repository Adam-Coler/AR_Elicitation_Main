// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AR_Elicitation/C_Blueprint_Function_Library.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Blueprint_Function_Library() {}
// Cross Module References
	AR_ELICITATION_API UClass* Z_Construct_UClass_UC_Blueprint_Function_Library_NoRegister();
	AR_ELICITATION_API UClass* Z_Construct_UClass_UC_Blueprint_Function_Library();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AR_Elicitation();
	AR_ELICITATION_API UFunction* Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString();
	AR_ELICITATION_API UFunction* Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString();
// End Cross Module References
	void UC_Blueprint_Function_Library::StaticRegisterNativesUC_Blueprint_Function_Library()
	{
		UClass* Class = UC_Blueprint_Function_Library::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadString", &UC_Blueprint_Function_Library::execFileLoadString },
			{ "FileSaveString", &UC_Blueprint_Function_Library::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics
	{
		struct C_Blueprint_Function_Library_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((C_Blueprint_Function_Library_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(C_Blueprint_Function_Library_eventFileLoadString_Parms), &Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_SaveTextA = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(C_Blueprint_Function_Library_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_FileNameA = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(C_Blueprint_Function_Library_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "C_Blueprint_Function_Library.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_Blueprint_Function_Library, "FileLoadString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(C_Blueprint_Function_Library_eventFileLoadString_Parms), Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics
	{
		struct C_Blueprint_Function_Library_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((C_Blueprint_Function_Library_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(C_Blueprint_Function_Library_eventFileSaveString_Parms), &Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_FileNameB = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(C_Blueprint_Function_Library_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_SaveTextB = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(C_Blueprint_Function_Library_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "C_Blueprint_Function_Library.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_Blueprint_Function_Library, "FileSaveString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(C_Blueprint_Function_Library_eventFileSaveString_Parms), Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UC_Blueprint_Function_Library_NoRegister()
	{
		return UC_Blueprint_Function_Library::StaticClass();
	}
	struct Z_Construct_UClass_UC_Blueprint_Function_Library_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AR_Elicitation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_Blueprint_Function_Library_FileLoadString, "FileLoadString" }, // 3806680145
		{ &Z_Construct_UFunction_UC_Blueprint_Function_Library_FileSaveString, "FileSaveString" }, // 3002528235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_Blueprint_Function_Library.h" },
		{ "ModuleRelativePath", "C_Blueprint_Function_Library.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_Blueprint_Function_Library>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::ClassParams = {
		&UC_Blueprint_Function_Library::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_Blueprint_Function_Library()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_Blueprint_Function_Library_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_Blueprint_Function_Library, 86154552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_Blueprint_Function_Library(Z_Construct_UClass_UC_Blueprint_Function_Library, &UC_Blueprint_Function_Library::StaticClass, TEXT("/Script/AR_Elicitation"), TEXT("UC_Blueprint_Function_Library"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_Blueprint_Function_Library);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
