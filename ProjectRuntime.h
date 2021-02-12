#pragma once

#include <vector>
#include <d3d9.h>

#include "./ScratchSprite.h"

class ProjectRuntime
{
public:
	IDirect3DDevice9* device;
	std::vector<ScratchSprite> sprites;

	BOOL Init(IDirect3DDevice9* device);
	void Begin();
	void End();
};