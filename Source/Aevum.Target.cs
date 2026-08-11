using UnrealBuildTool;
using System.Collections.Generic;

public class AevumTarget : TargetRules
{
	public AevumTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V7;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_8;
		ExtraModuleNames.Add("Aevum");
	}
}
