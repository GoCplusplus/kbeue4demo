// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class kbengine_ue4_demoTarget : TargetRules
{
	public kbengine_ue4_demoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("kbengine_ue4_demo");
	}
}
