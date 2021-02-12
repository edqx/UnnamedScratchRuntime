#include "./ScratchAsset.h"

BOOL ScratchAsset::Init(IDirect3DDevice9* device)
{
	if (sprite) {
		sprite->Release();
		sprite = nullptr;
	}

	if (info.format == AssetFormatPNG &&
		FAILED(D3DXCreateSprite(device, &sprite)))
		return FALSE;

	this->device = device;

	return TRUE;
}

BOOL ScratchAsset::Render(int x, int y, int rotation, int scale)
{
	if (info.format == AssetFormatPNG)
	{

	}
}