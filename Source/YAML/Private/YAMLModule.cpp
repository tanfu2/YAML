// Copyright Epic Games, Inc. All Rights Reserved.

#include "YAMLModule.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FYamlModule, YAML, "YAML" );

bool FYamlModule::IsGameModule() const
{
	return true;
}
