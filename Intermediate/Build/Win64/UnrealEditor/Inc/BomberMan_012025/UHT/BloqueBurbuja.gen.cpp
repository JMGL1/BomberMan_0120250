// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueBurbuja.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbuja() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbuja();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueBurbuja
void ABloqueBurbuja::StaticRegisterNativesABloqueBurbuja()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBurbuja);
UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister()
{
	return ABloqueBurbuja::StaticClass();
}
struct Z_Construct_UClass_ABloqueBurbuja_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueBurbuja.h" },
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPuedeMoverse_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Aqu\xef\xbf\xbd puedes agregar cualquier l\xef\xbf\xbdgica adicional que necesites al inicio del juego\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aqu\xef\xbf\xbd puedes agregar cualquier l\xef\xbf\xbdgica adicional que necesites al inicio del juego" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatSpeed_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controla si el actor se puede mover\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controla si el actor se puede mover" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Velocidad del movimiento\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocidad del movimiento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Altura m\xef\xbf\xbdnima permitida\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Altura m\xef\xbf\xbdnima permitida" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPuedeMoverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPuedeMoverse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbuja>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse_SetBit(void* Obj)
{
	((ABloqueBurbuja*)Obj)->bPuedeMoverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse = { "bPuedeMoverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloqueBurbuja), &Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPuedeMoverse_MetaData), NewProp_bPuedeMoverse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_FloatSpeed = { "FloatSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, FloatSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatSpeed_MetaData), NewProp_FloatSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, MinZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZ_MetaData), NewProp_MinZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, MaxZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZ_MetaData), NewProp_MaxZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_FloatSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_MinZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_MaxZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams = {
	&ABloqueBurbuja::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBurbuja()
{
	if (!Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton, Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueBurbuja>()
{
	return ABloqueBurbuja::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbuja);
ABloqueBurbuja::~ABloqueBurbuja() {}
// End Class ABloqueBurbuja

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBurbuja, ABloqueBurbuja::StaticClass, TEXT("ABloqueBurbuja"), &Z_Registration_Info_UClass_ABloqueBurbuja, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBurbuja), 221524498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_3841863316(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
