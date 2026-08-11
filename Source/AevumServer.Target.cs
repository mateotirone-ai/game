using UnrealBuildTool;
using System.Collections.Generic;

// Dedicated authoritative server target (future). Keep in sync with Aevum.Target.cs.
public class AevumServerTarget : TargetRules
{
	public AevumServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("Aevum");
	}
}
