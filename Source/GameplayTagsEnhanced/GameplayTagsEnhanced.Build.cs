// Copyright (c) 2026 Krileon. All Rights Reserved.

using UnrealBuildTool;

public class GameplayTagsEnhanced : ModuleRules
{
	public GameplayTagsEnhanced(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"GameplayTags"
		});
	}
}
