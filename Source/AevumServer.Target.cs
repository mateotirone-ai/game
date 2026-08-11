using UnrealBuildTool;
using System.Collections.Generic;

// Dedicated authoritative server target (future). Keep in sync with Aevum.Target.cs.
public class AevumServerTarget : TargetRules
{
	public AevumServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V7;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_8;
		ExtraModuleNames.Add("Aevum");
	}
}
