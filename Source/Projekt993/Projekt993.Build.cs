// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Projekt993 : ModuleRules
{
	public Projekt993(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
