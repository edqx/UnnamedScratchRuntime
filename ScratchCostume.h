#pragma once

#include "./ScratchAsset.h"

class ScratchCostume
{
public:
	const char* name;
	ScratchAsset* asset;

	ScratchCostume(const char* name, ScratchAsset* asset)
	{
		this->name = name;
		this->asset = asset;
	}
};