#pragma once

#include "DX12Interface.h"

class Gfx : public FrameworkWindows
{
public:
	Gfx(LPCSTR name);
	void OnCreate(HWND hWnd);
	void OnDestroy();
	void OnRender();
	bool OnEvent(MSG msg);
	void OnResize(uint32_t Width, uint32_t Height);
	void SetFullScreen(bool fullscreen);

private:
	Device                m_device;
	SwapChain             m_swapChain;

	DisplayModes              m_currentDisplayMode;
	std::vector<DisplayModes> m_displayModesAvailable;
	std::vector<const char *> m_displayModesNamesAvailable;
};
