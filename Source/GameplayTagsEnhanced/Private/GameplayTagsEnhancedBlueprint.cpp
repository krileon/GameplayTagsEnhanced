// Copyright (c) 2026 Krileon. All Rights Reserved.

#include "GameplayTagsEnhancedBlueprint.h"
#include "GameplayTagsManager.h"

FGameplayTag UGameplayTagsEnhancedBlueprint::RequestGameplayTag( FName TagName )
{
	return UGameplayTagsManager::Get().RequestGameplayTag( TagName, false );
}
