// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/Blueprints/FCTweenBPActionVector2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenBPActionVector2D() {}
// Cross Module References
	FCTWEEN_API UFunction* Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FCTween();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionVector2D_NoRegister();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionVector2D();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPAction();
	FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EFCEase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics
	{
		struct _Script_FCTween_eventTweenUpdateVector2DOutputPin_Parms
		{
			FVector2D Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FCTween_eventTweenUpdateVector2DOutputPin_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FCTween, nullptr, "TweenUpdateVector2DOutputPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::_Script_FCTween_eventTweenUpdateVector2DOutputPin_Parms), Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFCTweenBPActionVector2D::execTweenVector2DCustomCurve)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Start);
		P_GET_STRUCT(FVector2D,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSecs);
		P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDelay);
		P_GET_UBOOL(Z_Param_bYoyo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_YoyoDelay);
		P_GET_UBOOL(Z_Param_bCanTickDuringPause);
		P_GET_UBOOL(Z_Param_bUseGlobalTimeDilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFCTweenBPActionVector2D**)Z_Param__Result=UFCTweenBPActionVector2D::TweenVector2DCustomCurve(Z_Param_Start,Z_Param_End,Z_Param_DurationSecs,Z_Param_Curve,Z_Param_Delay,Z_Param_Loops,Z_Param_LoopDelay,Z_Param_bYoyo,Z_Param_YoyoDelay,Z_Param_bCanTickDuringPause,Z_Param_bUseGlobalTimeDilation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFCTweenBPActionVector2D::execTweenVector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Start);
		P_GET_STRUCT(FVector2D,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSecs);
		P_GET_ENUM(EFCEase,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EaseParam1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EaseParam2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDelay);
		P_GET_UBOOL(Z_Param_bYoyo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_YoyoDelay);
		P_GET_UBOOL(Z_Param_bCanTickDuringPause);
		P_GET_UBOOL(Z_Param_bUseGlobalTimeDilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFCTweenBPActionVector2D**)Z_Param__Result=UFCTweenBPActionVector2D::TweenVector2D(Z_Param_Start,Z_Param_End,Z_Param_DurationSecs,EFCEase(Z_Param_EaseType),Z_Param_EaseParam1,Z_Param_EaseParam2,Z_Param_Delay,Z_Param_Loops,Z_Param_LoopDelay,Z_Param_bYoyo,Z_Param_YoyoDelay,Z_Param_bCanTickDuringPause,Z_Param_bUseGlobalTimeDilation);
		P_NATIVE_END;
	}
	void UFCTweenBPActionVector2D::StaticRegisterNativesUFCTweenBPActionVector2D()
	{
		UClass* Class = UFCTweenBPActionVector2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TweenVector2D", &UFCTweenBPActionVector2D::execTweenVector2D },
			{ "TweenVector2DCustomCurve", &UFCTweenBPActionVector2D::execTweenVector2DCustomCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics
	{
		struct FCTweenBPActionVector2D_eventTweenVector2D_Parms
		{
			FVector2D Start;
			FVector2D End;
			float DurationSecs;
			EFCEase EaseType;
			float EaseParam1;
			float EaseParam2;
			float Delay;
			int32 Loops;
			float LoopDelay;
			bool bYoyo;
			float YoyoDelay;
			bool bCanTickDuringPause;
			bool bUseGlobalTimeDilation;
			UFCTweenBPActionVector2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSecs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseParam1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseParam2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Loops;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopDelay;
		static void NewProp_bYoyo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bYoyo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YoyoDelay;
		static void NewProp_bCanTickDuringPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTickDuringPause;
		static void NewProp_bUseGlobalTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalTimeDilation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, Start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, End), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_DurationSecs = { "DurationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, DurationSecs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, EaseType), Z_Construct_UEnum_FCTween_EFCEase, METADATA_PARAMS(nullptr, 0) }; // 623727477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseParam1 = { "EaseParam1", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, EaseParam1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseParam2 = { "EaseParam2", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, EaseParam2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, LoopDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bYoyo_SetBit(void* Obj)
	{
		((FCTweenBPActionVector2D_eventTweenVector2D_Parms*)Obj)->bYoyo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bYoyo = { "bYoyo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionVector2D_eventTweenVector2D_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bYoyo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_YoyoDelay = { "YoyoDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, YoyoDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bCanTickDuringPause_SetBit(void* Obj)
	{
		((FCTweenBPActionVector2D_eventTweenVector2D_Parms*)Obj)->bCanTickDuringPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bCanTickDuringPause = { "bCanTickDuringPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionVector2D_eventTweenVector2D_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bCanTickDuringPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bUseGlobalTimeDilation_SetBit(void* Obj)
	{
		((FCTweenBPActionVector2D_eventTweenVector2D_Parms*)Obj)->bUseGlobalTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bUseGlobalTimeDilation = { "bUseGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionVector2D_eventTweenVector2D_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bUseGlobalTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2D_Parms, ReturnValue), Z_Construct_UClass_UFCTweenBPActionVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_DurationSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseParam1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_EaseParam2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_Loops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_LoopDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bYoyo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_YoyoDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bCanTickDuringPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_bUseGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Tween" },
		{ "Comment", "/**\n\x09 * @brief Tween a Vector parameter between the given values\n\x09 * @param Start The starting value\n\x09 * @param End The ending value\n\x09 * @param DurationSecs The seconds to go from start to end\n\x09 * @param EaseType The type of easing function to use for interpolation\n\x09 * @param EaseParam1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n\x09 * @param EaseParam2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n\x09 * @param Delay Seconds before the tween starts interpolating, after being created\n\x09 * @param Loops The number of loops to play. -1 for infinite\n\x09 * @param LoopDelay Seconds to pause before starting each loop\n\x09 * @param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n\x09 * @param YoyoDelay Seconds to pause before starting to yoyo\n\x09 * @param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu\n\x09 */" },
		{ "CPP_Default_bCanTickDuringPause", "false" },
		{ "CPP_Default_bUseGlobalTimeDilation", "true" },
		{ "CPP_Default_bYoyo", "false" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "CPP_Default_DurationSecs", "1.000000" },
		{ "CPP_Default_EaseParam1", "0.000000" },
		{ "CPP_Default_EaseParam2", "0.000000" },
		{ "CPP_Default_EaseType", "InOutQuad" },
		{ "CPP_Default_End", "" },
		{ "CPP_Default_LoopDelay", "0.000000" },
		{ "CPP_Default_Loops", "0" },
		{ "CPP_Default_Start", "" },
		{ "CPP_Default_YoyoDelay", "0.000000" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector2D.h" },
		{ "ToolTip", "@brief Tween a Vector parameter between the given values\n@param Start The starting value\n@param End The ending value\n@param DurationSecs The seconds to go from start to end\n@param EaseType The type of easing function to use for interpolation\n@param EaseParam1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n@param EaseParam2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n@param Delay Seconds before the tween starts interpolating, after being created\n@param Loops The number of loops to play. -1 for infinite\n@param LoopDelay Seconds to pause before starting each loop\n@param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n@param YoyoDelay Seconds to pause before starting to yoyo\n@param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBPActionVector2D, nullptr, "TweenVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::FCTweenBPActionVector2D_eventTweenVector2D_Parms), Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics
	{
		struct FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms
		{
			FVector2D Start;
			FVector2D End;
			float DurationSecs;
			UCurveFloat* Curve;
			float Delay;
			int32 Loops;
			float LoopDelay;
			bool bYoyo;
			float YoyoDelay;
			bool bCanTickDuringPause;
			bool bUseGlobalTimeDilation;
			UFCTweenBPActionVector2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSecs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Loops;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopDelay;
		static void NewProp_bYoyo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bYoyo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YoyoDelay;
		static void NewProp_bCanTickDuringPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTickDuringPause;
		static void NewProp_bUseGlobalTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalTimeDilation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, Start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, End), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_DurationSecs = { "DurationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, DurationSecs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, LoopDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bYoyo_SetBit(void* Obj)
	{
		((FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms*)Obj)->bYoyo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bYoyo = { "bYoyo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bYoyo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_YoyoDelay = { "YoyoDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, YoyoDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bCanTickDuringPause_SetBit(void* Obj)
	{
		((FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms*)Obj)->bCanTickDuringPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bCanTickDuringPause = { "bCanTickDuringPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bCanTickDuringPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bUseGlobalTimeDilation_SetBit(void* Obj)
	{
		((FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms*)Obj)->bUseGlobalTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bUseGlobalTimeDilation = { "bUseGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bUseGlobalTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms, ReturnValue), Z_Construct_UClass_UFCTweenBPActionVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_DurationSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_Loops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_LoopDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bYoyo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_YoyoDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bCanTickDuringPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_bUseGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Tween|Custom Curve" },
		{ "Comment", "/**\n\x09 * @brief Tween a float parameter between the given values\n\x09 * @param Start The starting value\n\x09 * @param End The ending value\n\x09 * @param DurationSecs The seconds to go from start to end\n\x09 * @param Curve The curve to interpolate with\n\x09 * @param Delay Seconds before the tween starts interpolating, after being created\n\x09 * @param Loops The number of loops to play. -1 for infinite\n\x09 * @param LoopDelay Seconds to pause before starting each loop\n\x09 * @param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n\x09 * @param YoyoDelay Seconds to pause before starting to yoyo\n\x09 * @param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu\n\x09 */" },
		{ "CPP_Default_bCanTickDuringPause", "false" },
		{ "CPP_Default_bUseGlobalTimeDilation", "true" },
		{ "CPP_Default_bYoyo", "false" },
		{ "CPP_Default_Curve", "None" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "CPP_Default_DurationSecs", "1.000000" },
		{ "CPP_Default_End", "" },
		{ "CPP_Default_LoopDelay", "0.000000" },
		{ "CPP_Default_Loops", "0" },
		{ "CPP_Default_Start", "" },
		{ "CPP_Default_YoyoDelay", "0.000000" },
		{ "DisplayName", "Tween Vector 2D Custom Curve" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector2D.h" },
		{ "ToolTip", "@brief Tween a float parameter between the given values\n@param Start The starting value\n@param End The ending value\n@param DurationSecs The seconds to go from start to end\n@param Curve The curve to interpolate with\n@param Delay Seconds before the tween starts interpolating, after being created\n@param Loops The number of loops to play. -1 for infinite\n@param LoopDelay Seconds to pause before starting each loop\n@param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n@param YoyoDelay Seconds to pause before starting to yoyo\n@param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBPActionVector2D, nullptr, "TweenVector2DCustomCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::FCTweenBPActionVector2D_eventTweenVector2DCustomCurve_Parms), Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFCTweenBPActionVector2D);
	UClass* Z_Construct_UClass_UFCTweenBPActionVector2D_NoRegister()
	{
		return UFCTweenBPActionVector2D::StaticClass();
	}
	struct Z_Construct_UClass_UFCTweenBPActionVector2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyEasing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplyEasing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFCTweenBPAction,
		(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2D, "TweenVector2D" }, // 2786094719
		{ &Z_Construct_UFunction_UFCTweenBPActionVector2D_TweenVector2DCustomCurve, "TweenVector2DCustomCurve" }, // 2424184259
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/FCTweenBPActionVector2D.h" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector2D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::NewProp_ApplyEasing_MetaData[] = {
		{ "Comment", "// Triggered every tween update. use \"Value\" to get the tweened float for this frame\n" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector2D.h" },
		{ "ToolTip", "Triggered every tween update. use \"Value\" to get the tweened float for this frame" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::NewProp_ApplyEasing = { "ApplyEasing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCTweenBPActionVector2D, ApplyEasing), Z_Construct_UDelegateFunction_FCTween_TweenUpdateVector2DOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::NewProp_ApplyEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::NewProp_ApplyEasing_MetaData)) }; // 3290294275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::NewProp_ApplyEasing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenBPActionVector2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::ClassParams = {
		&UFCTweenBPActionVector2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFCTweenBPActionVector2D()
	{
		if (!Z_Registration_Info_UClass_UFCTweenBPActionVector2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenBPActionVector2D.OuterSingleton, Z_Construct_UClass_UFCTweenBPActionVector2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFCTweenBPActionVector2D.OuterSingleton;
	}
	template<> FCTWEEN_API UClass* StaticClass<UFCTweenBPActionVector2D>()
	{
		return UFCTweenBPActionVector2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenBPActionVector2D);
	struct Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenBPActionVector2D, UFCTweenBPActionVector2D::StaticClass, TEXT("UFCTweenBPActionVector2D"), &Z_Registration_Info_UClass_UFCTweenBPActionVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenBPActionVector2D), 3380398875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_2413217458(TEXT("/Script/FCTween"),
		Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
