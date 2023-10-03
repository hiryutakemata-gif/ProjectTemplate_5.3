// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ObjectTools.h"
#include "ISourceControlModule.h"
#include "FileHelpers.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetTools/Private/AssetTools.h"
#include "CoreMinimal.h" 
#include "DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "IAssetTools.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "LevelInstance/LevelInstanceInterface.h"
#include "Modules/ModuleManager.h"
#include "UObject/Object.h"

#include "NS_UETools.generated.h"


class FNS_UEToolsModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UCLASS()
class  UNS_UETools : public UBlueprintFunctionLibrary
{
		GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "NS_UETools")
		static TArray<FString> OpenFileDialog();
		UFUNCTION(BlueprintCallable, Category = "NS_UETools")
		static FString OpenDirectoryDialog(const FString& ContentPath);
		UFUNCTION(BlueprintCallable, Category = "NS_UETools")
		static bool ExitLevelInstanceEdit(ALevelInstance* LevelInstanceActor,bool bDiscardEdits);

		UFUNCTION(BlueprintCallable, Category = "NS_UETools")
		static UWorld* GetWorldAsset(UObject* Asset);
};

UCLASS(BlueprintType, Blueprintable)
class  UCustomObject : public UObject
{
	GENERATED_BODY()
		
		virtual UWorld* GetWorld() const override;
};

USTRUCT(BlueprintType)
struct FMaterialMappingDataTable : public FTableRowBase
{
		GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MaterialMappingDataTable")
		TObjectPtr<UMaterialInstance> MaterialReplacement = nullptr;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MaterialMappingDataTable")
			FString Describe;
};