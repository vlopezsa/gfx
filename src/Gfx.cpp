#include "gfx.h"

const bool VALIDATION_ENABLED = false;
const uint32_t NUMBER_OF_BACK_BUFFERS = 3;

Gfx::Gfx(LPCSTR name) : FrameworkWindows(name)
{

}

void Gfx::OnCreate(HWND hWnd)
{
	// Create Device
	//
	m_device.OnCreate("myapp", "myEngine", VALIDATION_ENABLED, hWnd);
	m_device.CreatePipelineCache();
}

void Gfx::OnDestroy()
{

}

void Gfx::OnRender()
{

}


bool Gfx::OnEvent(MSG msg)
{
	return true;
}


void Gfx::OnResize(uint32_t Width, uint32_t Height)
{

}

void Gfx::SetFullScreen(bool fullscreen)
{

}

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