#pragma once
#include <windows.h>
class WindowHelp
{
public:
	HRESULT InitWindow(HINSTANCE hInstance, int nCmdShow);
	HINSTANCE GetInst();
	HWND GetWind();
private:
	WindowHelp();

	static WindowHelp* _winInstance;
	HINSTANCE l_hInst;
	HWND l_hWnd;
public:
	static WindowHelp* getInstance();
};