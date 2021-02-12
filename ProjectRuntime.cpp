#include "ProjectRuntime.h"

BOOL ProjectRuntime::Init(IDirect3DDevice9* device)
{
	this->device = device;
	return TRUE;
}

void ProjectRuntime::Begin()
{
	device->BeginScene();
}

void ProjectRuntime::End()
{
	device->EndScene();
}