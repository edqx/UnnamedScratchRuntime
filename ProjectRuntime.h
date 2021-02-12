#pragma once

#include <vector>
#include <d3d9.h>

#include "./ScratchSprite.h"

class ProjectRuntime
{
	IDirect3DDevice9* device;
	std::vector<ScratchSprite> sprites;
public:
	BOOL Init(IDirect3DDevice9* device);
	BOOL CreateSprite(std::)
};