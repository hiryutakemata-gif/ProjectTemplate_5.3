// Copyright Epic Games, Inc. All Rights Reserved.

#include "NS_UETools.h"


#define LOCTEXT_NAMESPACE "FNS_UEToolsModule"

void FNS_UEToolsModule::StartupModule()
{
}

void FNS_UEToolsModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNS_UEToolsModule, NS_UETools)

TArray<FString> UNS_UETools::OpenFileDialog()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	const void* ParentWindowWindowHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);
	TArray<FString> OutFileNames;
	DesktopPlatform->OpenFileDialog
	(
		ParentWindowWindowHandle,
		FString("Load Files"),
		FString(""),
		FString(""),
		FString("Datasmith Files|*.udatasmith"),
		EFileDialogFlags::Multiple,
		OutFileNames
	);
	return OutFileNames;
}

FString UNS_UETools::OpenDirectoryDialog(const FString& ContentPath)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	const void* ParentWindowWindowHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);
	FString OutDirectory;
	DesktopPlatform->OpenDirectoryDialog
	(
		ParentWindowWindowHandle,
		FString("Load Directories"),
		ContentPath,
		OutDirectory
	);
	return OutDirectory;
}

bool UNS_UETools::ExitLevelInstanceEdit(ALevelInstance* LevelInstanceActor, bool bDiscardEdits)
{
	return LevelInstanceActor->ExitEdit(bDiscardEdits);
}


UWorld* UNS_UETools::GetWorldAsset(UObject* Asset)
{
	return Asset->GetWorld();
}

UWorld* UCustomObject::GetWorld() const
{
	if (!HasAnyFlags(RF_ClassDefaultObject) && !GetOuter()->HasAnyFlags(RF_BeginDestroyed) && !GetOuter()->IsUnreachable())
	{
		UObject* Outer = GetTypedOuter<UObject>();
		if (Outer != nullptr)
		{
			return Outer->GetWorld();
		}
	}
	return nullptr;
}
