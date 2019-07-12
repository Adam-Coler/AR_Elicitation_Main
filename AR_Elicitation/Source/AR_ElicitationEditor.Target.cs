// Copyright Adam Williams 2019 

using UnrealBuildTool;
using System.Collections.Generic;

public class AR_ElicitationEditorTarget : TargetRules
{
	public AR_ElicitationEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "AR_Elicitation" } );
	}
}
