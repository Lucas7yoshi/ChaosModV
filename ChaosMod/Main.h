#pragma once
#include <Windows.h>
#include <memory>

class DebugMenu;

class Main
{
private:
	Main() {}

public:
	static bool Init();
	static void Loop();
	static void Stop();
	static void OnKeyboardInput(DWORD key, WORD repeats, BYTE scanCode, BOOL isExtended, BOOL isWithAlt, BOOL wasDownBefore, BOOL isUpNow);
};