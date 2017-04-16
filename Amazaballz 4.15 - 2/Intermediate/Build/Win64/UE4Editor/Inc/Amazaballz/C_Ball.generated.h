// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AMAZABALLZ_C_Ball_generated_h
#error "C_Ball.generated.h already included, missing '#pragma once' in C_Ball.h"
#endif
#define AMAZABALLZ_C_Ball_generated_h

#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Respawn(); \
		P_NATIVE_END; \
	}


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Respawn(); \
		P_NATIVE_END; \
	}


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAC_Ball(); \
	friend AMAZABALLZ_API class UClass* Z_Construct_UClass_AC_Ball(); \
	public: \
	DECLARE_CLASS(AC_Ball, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Amazaballz"), NO_API) \
	DECLARE_SERIALIZER(AC_Ball) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesAC_Ball(); \
	friend AMAZABALLZ_API class UClass* Z_Construct_UClass_AC_Ball(); \
	public: \
	DECLARE_CLASS(AC_Ball, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Amazaballz"), NO_API) \
	DECLARE_SERIALIZER(AC_Ball) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Ball(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Ball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Ball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Ball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Ball(AC_Ball&&); \
	NO_API AC_Ball(const AC_Ball&); \
public:


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Ball(AC_Ball&&); \
	NO_API AC_Ball(const AC_Ball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Ball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Ball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Ball)


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__spawn_point_() { return STRUCT_OFFSET(AC_Ball, spawn_point_); }


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_20_PROLOG
#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_PRIVATE_PROPERTY_OFFSET \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_RPC_WRAPPERS \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_INCLASS \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_PRIVATE_PROPERTY_OFFSET \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_INCLASS_NO_PURE_DECLS \
	Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Amazaballz_4_15___2_Source_Amazaballz_Game_Modes_C_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
