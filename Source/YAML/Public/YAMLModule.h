// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * YAML Module
 */
class FYamlModule : public IModuleInterface
{
public:
	/**
	 * Returns true if this module hosts gameplay code
	 *
	 * @return True for "gameplay modules", or false for engine code modules, plug-ins, etc.
	 */
	virtual bool IsGameModule() const override;
};
