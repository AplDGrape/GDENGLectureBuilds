// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "qwerty/SnowmanMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanMove() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
QWERTY_API UClass* Z_Construct_UClass_USnowmanMove();
QWERTY_API UClass* Z_Construct_UClass_USnowmanMove_NoRegister();
UPackage* Z_Construct_UPackage__Script_qwerty();
// End Cross Module References

// Begin Class USnowmanMove
void USnowmanMove::StaticRegisterNativesUSnowmanMove()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnowmanMove);
UClass* Z_Construct_UClass_USnowmanMove_NoRegister()
{
	return USnowmanMove::StaticClass();
}
struct Z_Construct_UClass_USnowmanMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SnowmanMove.h" },
		{ "ModuleRelativePath", "SnowmanMove.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnowmanMove>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnowmanMove_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_qwerty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanMove_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnowmanMove_Statics::ClassParams = {
	&USnowmanMove::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanMove_Statics::Class_MetaDataParams), Z_Construct_UClass_USnowmanMove_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnowmanMove()
{
	if (!Z_Registration_Info_UClass_USnowmanMove.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnowmanMove.OuterSingleton, Z_Construct_UClass_USnowmanMove_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnowmanMove.OuterSingleton;
}
template<> QWERTY_API UClass* StaticClass<USnowmanMove>()
{
	return USnowmanMove::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnowmanMove);
USnowmanMove::~USnowmanMove() {}
// End Class USnowmanMove

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Francis_Apolinar_Documents_Unreal_Projects_qwerty_Source_qwerty_SnowmanMove_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnowmanMove, USnowmanMove::StaticClass, TEXT("USnowmanMove"), &Z_Registration_Info_UClass_USnowmanMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnowmanMove), 2117787310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Francis_Apolinar_Documents_Unreal_Projects_qwerty_Source_qwerty_SnowmanMove_h_4082918423(TEXT("/Script/qwerty"),
	Z_CompiledInDeferFile_FID_Users_Francis_Apolinar_Documents_Unreal_Projects_qwerty_Source_qwerty_SnowmanMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Francis_Apolinar_Documents_Unreal_Projects_qwerty_Source_qwerty_SnowmanMove_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
