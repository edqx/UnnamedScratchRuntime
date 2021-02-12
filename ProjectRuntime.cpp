#include "ProjectRuntime.h"

BOOL ProjectRuntime::Init(IDirect3DDevice9* device)
{
	this->device = device;
	return TRUE;
}