// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/Blueprints/FCTweenBPActionRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenBPActionRotator() {}
// Cross Module References
	FCTWEEN_API UFunction* Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FCTween();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionRotator();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPAction();
	FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EFCEase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics
	{
		struct _Script_FCTween_eventTweenUpdateRotatorOutputPin_Parms
		{
			FRotator Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FCTween_eventTweenUpdateRotatorOutputPin_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionRotator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FCTween, nullptr, "TweenUpdateRotatorOutputPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::_Script_FCTween_eventTweenUpdateRotatorOutputPin_Parms), Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFCTweenBPActionRotator::execTweenRotatorCustomCurve)
	{
		P_GET_STRUCT(FRotator,Z_Param_Start);
		P_GET_STRUCT(FRotator,Z_Param_End);
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
		*(UFCTweenBPActionRotator**)Z_Param__Result=UFCTweenBPActionRotator::TweenRotatorCustomCurve(Z_Param_Start,Z_Param_End,Z_Param_DurationSecs,Z_Param_Curve,Z_Param_Delay,Z_Param_Loops,Z_Param_LoopDelay,Z_Param_bYoyo,Z_Param_YoyoDelay,Z_Param_bCanTickDuringPause,Z_Param_bUseGlobalTimeDilation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFCTweenBPActionRotator::execTweenRotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Start);
		P_GET_STRUCT(FRotator,Z_Param_End);
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
		*(UFCTweenBPActionRotator**)Z_Param__Result=UFCTweenBPActionRotator::TweenRotator(Z_Param_Start,Z_Param_End,Z_Param_DurationSecs,EFCEase(Z_Param_EaseType),Z_Param_EaseParam1,Z_Param_EaseParam2,Z_Param_Delay,Z_Param_Loops,Z_Param_LoopDelay,Z_Param_bYoyo,Z_Param_YoyoDelay,Z_Param_bCanTickDuringPause,Z_Param_bUseGlobalTimeDilation);
		P_NATIVE_END;
	}
	void UFCTweenBPActionRotator::StaticRegisterNativesUFCTweenBPActionRotator()
	{
		UClass* Class = UFCTweenBPActionRotator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TweenRotator", &UFCTweenBPActionRotator::execTweenRotator },
			{ "TweenRotatorCustomCurve", &UFCTweenBPActionRotator::execTweenRotatorCustomCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics
	{
		struct FCTweenBPActionRotator_eventTweenRotator_Parms
		{
			FRotator Start;
			FRotator End;
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
			UFCTweenBPActionRotator* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, Start), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, End), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_DurationSecs = { "DurationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, DurationSecs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, EaseType), Z_Construct_UEnum_FCTween_EFCEase, METADATA_PARAMS(nullptr, 0) }; // 623727477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseParam1 = { "EaseParam1", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, EaseParam1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseParam2 = { "EaseParam2", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, EaseParam2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, LoopDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bYoyo_SetBit(void* Obj)
	{
		((FCTweenBPActionRotator_eventTweenRotator_Parms*)Obj)->bYoyo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bYoyo = { "bYoyo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionRotator_eventTweenRotator_Parms), &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bYoyo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_YoyoDelay = { "YoyoDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, YoyoDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bCanTickDuringPause_SetBit(void* Obj)
	{
		((FCTweenBPActionRotator_eventTweenRotator_Parms*)Obj)->bCanTickDuringPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bCanTickDuringPause = { "bCanTickDuringPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionRotator_eventTweenRotator_Parms), &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bCanTickDuringPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bUseGlobalTimeDilation_SetBit(void* Obj)
	{
		((FCTweenBPActionRotator_eventTweenRotator_Parms*)Obj)->bUseGlobalTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bUseGlobalTimeDilation = { "bUseGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionRotator_eventTweenRotator_Parms), &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bUseGlobalTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotator_Parms, ReturnValue), Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_DurationSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseParam1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_EaseParam2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_Loops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_LoopDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bYoyo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_YoyoDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bCanTickDuringPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_bUseGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Tween" },
		{ "Comment", "/**\n\x09 * @brief Under the hood this just tweens a quaternion, but for convenience the input/output are converted to Rotators\n\x09 * @param Start The starting value\n\x09 * @param End The ending value\n\x09 * @param DurationSecs The seconds to go from start to end\n\x09 * @param EaseType The type of easing function to use for interpolation\n\x09 * @param EaseParam1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n\x09 * @param EaseParam2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n\x09 * @param Delay Seconds before the tween starts interpolating, after being created\n\x09 * @param Loops The number of loops to play. -1 for infinite\n\x09 * @param LoopDelay Seconds to pause before starting each loop\n\x09 * @param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n\x09 * @param YoyoDelay Seconds to pause before starting to yoyo\n\x09 * @param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu\n\x09 */" },
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
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionRotator.h" },
		{ "ToolTip", "@brief Under the hood this just tweens a quaternion, but for convenience the input/output are converted to Rotators\n@param Start The starting value\n@param End The ending value\n@param DurationSecs The seconds to go from start to end\n@param EaseType The type of easing function to use for interpolation\n@param EaseParam1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n@param EaseParam2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n@param Delay Seconds before the tween starts interpolating, after being created\n@param Loops The number of loops to play. -1 for infinite\n@param LoopDelay Seconds to pause before starting each loop\n@param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n@param YoyoDelay Seconds to pause before starting to yoyo\n@param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBPActionRotator, nullptr, "TweenRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::FCTweenBPActionRotator_eventTweenRotator_Parms), Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics
	{
		struct FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms
		{
			FRotator Start;
			FRotator End;
			float DurationSecs;
			UCurveFloat* Curve;
			float Delay;
			int32 Loops;
			float LoopDelay;
			bool bYoyo;
			float YoyoDelay;
			bool bCanTickDuringPause;
			bool bUseGlobalTimeDilation;
			UFCTweenBPActionRotator* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, Start), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, End), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_DurationSecs = { "DurationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, DurationSecs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, LoopDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bYoyo_SetBit(void* Obj)
	{
		((FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms*)Obj)->bYoyo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bYoyo = { "bYoyo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bYoyo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_YoyoDelay = { "YoyoDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, YoyoDelay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bCanTickDuringPause_SetBit(void* Obj)
	{
		((FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms*)Obj)->bCanTickDuringPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bCanTickDuringPause = { "bCanTickDuringPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bCanTickDuringPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation_SetBit(void* Obj)
	{
		((FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms*)Obj)->bUseGlobalTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation = { "bUseGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms, ReturnValue), Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_DurationSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_Loops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_LoopDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bYoyo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_YoyoDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bCanTickDuringPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::Function_MetaDataParams[] = {
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
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionRotator.h" },
		{ "ToolTip", "@brief Tween a float parameter between the given values\n@param Start The starting value\n@param End The ending value\n@param DurationSecs The seconds to go from start to end\n@param Curve The curve to interpolate with\n@param Delay Seconds before the tween starts interpolating, after being created\n@param Loops The number of loops to play. -1 for infinite\n@param LoopDelay Seconds to pause before starting each loop\n@param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n@param YoyoDelay Seconds to pause before starting to yoyo\n@param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBPActionRotator, nullptr, "TweenRotatorCustomCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::FCTweenBPActionRotator_eventTweenRotatorCustomCurve_Parms), Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFCTweenBPActionRotator);
	UClass* Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister()
	{
		return UFCTweenBPActionRotator::StaticClass();
	}
	struct Z_Construct_UClass_UFCTweenBPActionRotator_Statics
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
	UObject* (*const Z_Construct_UClass_UFCTweenBPActionRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFCTweenBPAction,
		(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFCTweenBPActionRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotator, "TweenRotator" }, // 2192346347
		{ &Z_Construct_UFunction_UFCTweenBPActionRotator_TweenRotatorCustomCurve, "TweenRotatorCustomCurve" }, // 3507250488
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCTweenBPActionRotator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/FCTweenBPActionRotator.h" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionRotator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCTweenBPActionRotator_Statics::NewProp_ApplyEasing_MetaData[] = {
		{ "Comment", "// Triggered every tween update. use \"Value\" to get the tweened float for this frame\n" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionRotator.h" },
		{ "ToolTip", "Triggered every tween update. use \"Value\" to get the tweened float for this frame" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFCTweenBPActionRotator_Statics::NewProp_ApplyEasing = { "ApplyEasing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCTweenBPActionRotator, ApplyEasing), Z_Construct_UDelegateFunction_FCTween_TweenUpdateRotatorOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFCTweenBPActionRotator_Statics::NewProp_ApplyEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionRotator_Statics::NewProp_ApplyEasing_MetaData)) }; // 1702109436
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFCTweenBPActionRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCTweenBPActionRotator_Statics::NewProp_ApplyEasing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFCTweenBPActionRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenBPActionRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenBPActionRotator_Statics::ClassParams = {
		&UFCTweenBPActionRotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFCTweenBPActionRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionRotator_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFCTweenBPActionRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFCTweenBPActionRotator()
	{
		if (!Z_Registration_Info_UClass_UFCTweenBPActionRotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenBPActionRotator.OuterSingleton, Z_Construct_UClass_UFCTweenBPActionRotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFCTweenBPActionRotator.OuterSingleton;
	}
	template<> FCTWEEN_API UClass* StaticClass<UFCTweenBPActionRotator>()
	{
		return UFCTweenBPActionRotator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenBPActionRotator);
	struct Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenBPActionRotator, UFCTweenBPActionRotator::StaticClass, TEXT("UFCTweenBPActionRotator"), &Z_Registration_Info_UClass_UFCTweenBPActionRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenBPActionRotator), 3346817943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_1869006218(TEXT("/Script/FCTween"),
		Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LightEater_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
