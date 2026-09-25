// Copyright (c) 2026 Krileon. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"

#include "GameplayTagsEnhancedBlueprint.generated.h"

UCLASS()
class GAMEPLAYTAGSENHANCED_API UGameplayTagsEnhancedBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintCallable, meta = ( ReturnDisplayName = "Tag" ), Category = "GameplayTags" )
		static FGameplayTag RequestGameplayTag( FName TagName );
};
