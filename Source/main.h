#pragma once
#include <windows.h>
#include <windef.h>
#include <winnt.h>
#include <math.h>
#include <stdlib.h>
#include <winternl.h>
#define _USE_MATH_DEFINES 1
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <mmsystem.h>
#include <iostream>
#pragma comment(lib, "Winmm.lib")
#define RGBBRUSH (DWORD)0x1900ac010e
#define SRCBSH (DWORD)0x89345c
#define SquareWave(t, freq, sampleCount) (((BYTE)(2.f * (FLOAT)(freq) * ((t) / (FLOAT)(sampleCount))) % 2) == 0 ? 1.f : -1.f)
#define TriangleWave(t, freq, sampleCount) (4.f * ( FLOAT )fabs(((FLOAT)(t) / ((FLOAT)(sampleCount) / (FLOAT)(freq))) - floor(((FLOAT)(t) / ((FLOAT)(sampleCount) / (FLOAT)(freq)))) - .5f) - 1.f)
#define CUSRGB(r, g, b) (r | g << 8 | g << 16)
#define winapi WINAPI
#define lpvoid LPVOID
#define dword DWORD
#define ulonglong ULONGLONG
#define uint UINT
#define rdtsc __rdtsc
DWORD xs;
VOID SeedXorshift32(DWORD dwSeed) {
	xs = dwSeed;
}
DWORD xorshift32() {
	xs ^= xs << 13;
	xs ^= xs << 17;
	xs ^= xs << 5;
	return xs;
}
BOOL CALLBACK MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, PRECT prcBounds, LPARAM lParam);

RECT GetVirtualScreen()
{
	RECT rcScreen = { 0 };
	EnumDisplayMonitors(NULL, NULL, MonitorEnumProc, (LPARAM)&rcScreen);
	return rcScreen;
}
POINT GetVirtualScreenPos()
{
	RECT rcScreen = GetVirtualScreen();
	POINT ptScreen =
	{
		rcScreen.left,
		rcScreen.top
	};
	return ptScreen;
}
SIZE GetVirtualScreenSize()
{
	RECT rcScreen = GetVirtualScreen();
	SIZE szScreen =
	{
		rcScreen.right - rcScreen.left,
		rcScreen.bottom - rcScreen.top
	};
	return szScreen;
}
BOOL CALLBACK MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, PRECT prcBounds, LPARAM lParam)
{
	PRECT prcParam = (RECT*)lParam;
	UnionRect(prcParam, prcParam, prcBounds);
	return TRUE;
}

typedef union _RGBQUAD {
	COLORREF rgb;
	struct {
		BYTE b;
		BYTE g;
		BYTE r;
		BYTE unused;
	};
}
PRGBQUAD;