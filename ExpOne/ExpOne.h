#pragma once

#include "resource.h"

void DrawLine(HDC hdc, int x1, int y1, int x2, int y2, COLORREF c);
void DrawLine(HDC hdc, int x1, int y1, int x2, int y2);
void DrawLineDelta(HDC hdc, int x1, int y1, int x2, int y2, int dx, int dy, COLORREF c);
void DrawName(HDC hdc, int x1, int y1, COLORREF c);