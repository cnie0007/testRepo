// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MCAV_Khanh_VR_AREditorTarget : TargetRules
{
	public MCAV_Khanh_VR_AREditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "MCAV_Khanh_VR_AR" } );
	}
}
