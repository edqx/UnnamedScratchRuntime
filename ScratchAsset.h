#pragma once

#include <d3dx9.h>

enum AssetFormat
{
	AssetFormatPNG,
	AssetFormatSVG
};

struct AssetInfo_t
{
	unsigned char* data;
	int datalen;
	AssetFormat format;
};

class ScratchAsset
{
public:
	IDirect3DDevice9* device;
	ID3DXSprite* sprite;

	AssetInfo_t info;

	ScratchAsset(AssetInfo_t& info)
	{
		this->info = info;
	}

	BOOL Init(IDirect3DDevice9* device);
	BOOL Render(int x, int y, int rotation, int scale);
};