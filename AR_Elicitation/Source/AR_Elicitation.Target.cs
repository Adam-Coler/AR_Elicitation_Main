// Copyright Adam Williams 2019 

using UnrealBuildTool;
using System.Collections.Generic;

public class AR_ElicitationTarget : TargetRules
{
	public AR_ElicitationTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "AR_Elicitation" } );
	}
}
