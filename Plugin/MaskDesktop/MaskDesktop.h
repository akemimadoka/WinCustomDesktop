﻿#pragma once
#include <atlimage.h>


class MaskDesktop final
{
public:
	MaskDesktop(HMODULE hModule);

private:
	HMODULE m_module;

	CImage m_img;
	POINTS m_curPos;


	bool OnFileListWndProc(UINT message, WPARAM wParam, LPARAM lParam, LRESULT& res);
	bool OnPostDrawIcon(HDC& hdc);
};
