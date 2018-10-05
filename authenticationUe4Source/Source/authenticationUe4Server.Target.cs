
// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class authenticationUe4ServerTarget : TargetRules   // Change this line as shown previously
{
       public authenticationUe4ServerTarget(TargetInfo Target) : base(Target)  // Change this line as shown previously
       {
        Type = TargetType.Server;
        ExtraModuleNames.Add("authenticationUe4");    // Change this line as shown previously
       }
}