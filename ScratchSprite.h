#pragma once

#include "./ScratchCostume.h"

enum SpriteRotationStyle
{
	RotationStyleLeftRight,
	RotationStyleDontRotate,
	RotationStyleAllAround
};

struct SpriteInfo_t
{
	int x;
	int y;
	bool visible;
	int size;
	SpriteRotationStyle rotationStyle;
	bool draggable;
	int direction;
	bool isStage;
	int currentCostume;
	std::vector<ScratchCostume*> costume;

	SpriteInfo_t()
	{
		x = 0;
		y = 0;
		visible = true;
		size = 100;
		rotationStyle = RotationStyleAllAround;
		draggable = false;
		direction = 90;
		isStage = false;
		currentCostume = 0;
	}
};

class ScratchSprite
{
public:
	const char* name;
	SpriteInfo_t info;

	ScratchSprite(const char* name, SpriteInfo_t& info)
	{
		this->name = name;
		this->info = info;
	}
};