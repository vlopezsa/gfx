#include "DX12InterfaceImpl.h"

int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	LPCSTR Name = "GfxDX12 v1.0";
	uint32_t Width = 1280;
	uint32_t Height = 720;

	// create new DX sample
	return RunFramework(hInstance, lpCmdLine, nCmdShow, Width, Height, new Gfx(Name));
}