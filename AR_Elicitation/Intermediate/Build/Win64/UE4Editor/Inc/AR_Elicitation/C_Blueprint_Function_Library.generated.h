// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AR_ELICITATION_C_Blueprint_Function_Library_generated_h
#error "C_Blueprint_Function_Library.generated.h already included, missing '#pragma once' in C_Blueprint_Function_Library.h"
#endif
#define AR_ELICITATION_C_Blueprint_Function_Library_generated_h

#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UC_Blueprint_Function_Library::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UC_Blueprint_Function_Library::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UC_Blueprint_Function_Library::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UC_Blueprint_Function_Library::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_Blueprint_Function_Library(); \
	friend struct Z_Construct_UClass_UC_Blueprint_Function_Library_Statics; \
public: \
	DECLARE_CLASS(UC_Blueprint_Function_Library, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AR_Elicitation"), NO_API) \
	DECLARE_SERIALIZER(UC_Blueprint_Function_Library)


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUC_Blueprint_Function_Library(); \
	friend struct Z_Construct_UClass_UC_Blueprint_Function_Library_Statics; \
public: \
	DECLARE_CLASS(UC_Blueprint_Function_Library, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AR_Elicitation"), NO_API) \
	DECLARE_SERIALIZER(UC_Blueprint_Function_Library)


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_Blueprint_Function_Library(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_Blueprint_Function_Library) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_Blueprint_Function_Library); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_Blueprint_Function_Library); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_Blueprint_Function_Library(UC_Blueprint_Function_Library&&); \
	NO_API UC_Blueprint_Function_Library(const UC_Blueprint_Function_Library&); \
public:


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_Blueprint_Function_Library(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_Blueprint_Function_Library(UC_Blueprint_Function_Library&&); \
	NO_API UC_Blueprint_Function_Library(const UC_Blueprint_Function_Library&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_Blueprint_Function_Library); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_Blueprint_Function_Library); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_Blueprint_Function_Library)


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_PRIVATE_PROPERTY_OFFSET
#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_12_PROLOG
#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_PRIVATE_PROPERTY_OFFSET \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_RPC_WRAPPERS \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_INCLASS \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_PRIVATE_PROPERTY_OFFSET \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_INCLASS_NO_PURE_DECLS \
	AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AR_Elicitation_Source_AR_Elicitation_C_Blueprint_Function_Library_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
