// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Celestia_SignsofFate : ModuleRules
{
	public Celestia_SignsofFate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Celestia_SignsofFate",
			"Celestia_SignsofFate/Variant_Platforming",
			"Celestia_SignsofFate/Variant_Platforming/Animation",
			"Celestia_SignsofFate/Variant_Combat",
			"Celestia_SignsofFate/Variant_Combat/AI",
			"Celestia_SignsofFate/Variant_Combat/Animation",
			"Celestia_SignsofFate/Variant_Combat/Gameplay",
			"Celestia_SignsofFate/Variant_Combat/Interfaces",
			"Celestia_SignsofFate/Variant_Combat/UI",
			"Celestia_SignsofFate/Variant_SideScrolling",
			"Celestia_SignsofFate/Variant_SideScrolling/AI",
			"Celestia_SignsofFate/Variant_SideScrolling/Gameplay",
			"Celestia_SignsofFate/Variant_SideScrolling/Interfaces",
			"Celestia_SignsofFate/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
