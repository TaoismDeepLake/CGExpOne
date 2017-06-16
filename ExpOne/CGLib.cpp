#include"stdafx.h"

//Taoism Deeplake presents.

///The Bresenham alg. draw straight line
void DrawLine(HDC hdc, int x1, int y1, int x2, int y2, COLORREF c)
{
	int x = x1, 
		y = y1, 
		dx = x2 - x1, 
		dy = y2 - y1, 
		e = 0;

	//fourth quardrant or third quadrant
	if (dy <= 0)
	{
		//switch start and end
		x = x2;
		y = y2;

		dx = -dx;
		dy = -dy;
	}

	if (dx >= 0)
	{
		if (dx >= dy)
		{
			//normal : dx>=0, dy>=0, dx>=dy
			e = -dx;
			for (int i = 0; i <= dx; i++)
			{
				SetPixel(hdc, x, y, c);

				if (e >= 0)
				{
					y++;
					e -= dx << 1;
				}

				x ++;
				e += dy << 1;
			}
		}
		else
		{
			//normal : dx>=0, dy>=0, dx<dy
			e = -dy;
			for (int i = 0; i <= dy; i++)
			{
				SetPixel(hdc, x, y, c);

				if (e >= 0)
				{
					x++;
					e -= dy << 1;
				}

				y++;
				e += dx << 1;
			}
		}
	}
	else
	{//2nd quad
		if (-dx >= dy)
		{
			//normal : dx>=0, dy>=0, dx>=dy
			e = dx;
			for (int i = 0; i <= -dx; i++)
			{
				SetPixel(hdc, x, y, c);

				if (e >= 0)
				{
					y++;
					e += dx << 1;
				}

				x --;
				e += dy << 1;
			}
		}
		else
		{
			//dx<=0, dy>=0, -dx<dy
			e = -dy;
			for (int i = 0; i <= dy; i++)
			{
				SetPixel(hdc, x, y, c);

				if (e >= 0)
				{
					x--;
					e -= dy << 1;
				}

				y++;
				e-= dx << 1;
			}
		}
	}
}

void DrawLine(HDC hdc, int x1, int y1, int x2, int y2)
{
	DrawLine(hdc, x1, y1, x2, y2, RGB(200,200,200));
}

void DrawLineDelta(HDC hdc, int x1, int y1, int x2, int y2, int dx, int dy, COLORREF c)
{
	DrawLine(hdc, x1 + dx, y1 + dy, x2 + dx, y2 + dy, c);
}

void DrawName(HDC hdc, int x1, int y1, COLORREF c)
{
	//Hu
		//Gu
		DrawLineDelta(hdc, 15, 10, 15, 40, x1, y1, c);
		DrawLineDelta(hdc, 0, 30, 25, 27, x1, y1, c);
		DrawLineDelta(hdc, 5, 40, 20, 40, x1, y1, c);
		DrawLineDelta(hdc, 5, 40, 8, 55, x1, y1, c);
		DrawLineDelta(hdc, 8, 55, 20, 50, x1, y1, c);
		DrawLineDelta(hdc, 20, 40, 20, 50, x1, y1, c);
		//yue
		DrawLineDelta(hdc, 35, 10, 55, 10, x1, y1, c);
		DrawLineDelta(hdc, 35, 20, 55, 20, x1, y1, c);
		DrawLineDelta(hdc, 35, 30, 55, 30, x1, y1, c);
		DrawLineDelta(hdc, 35, 10, 35, 40, x1, y1, c);
		DrawLineDelta(hdc, 35, 40, 30, 55, x1, y1, c);
		DrawLineDelta(hdc, 55, 10, 55, 55, x1, y1, c);

	//Shen
		//wang
		DrawLineDelta(hdc, 2, 22, 15, 20, x1 + 70, y1, c);
		DrawLineDelta(hdc, 4, 34, 13, 30, x1 + 70, y1, c);
		DrawLineDelta(hdc, 2, 45, 15, 35, x1 + 70, y1, c);
		DrawLineDelta(hdc, 10, 21, 10, 40, x1 + 70, y1, c);

		//shen
		DrawLineDelta(hdc, 20, 20, 46, 19, x1 + 70, y1, c);
		DrawLineDelta(hdc, 22, 30, 45, 30, x1 + 70, y1, c);
		DrawLineDelta(hdc, 23, 40, 44, 40, x1 + 70, y1, c);
		DrawLineDelta(hdc, 20, 20, 23, 40, x1 + 70, y1, c);
		DrawLineDelta(hdc, 35, 10, 35, 55, x1 + 70, y1, c);
		DrawLineDelta(hdc, 46, 19, 44, 40, x1 + 70, y1, c);

	//Jia
		//ren
		DrawLineDelta(hdc, 15, 10, 5, 30, x1 + 130, y1, c);
		DrawLineDelta(hdc, 10, 20, 10, 50, x1 + 130, y1, c);

		//gui
		DrawLineDelta(hdc, 25, 10, 25, 50, x1 + 130, y1, c);
		DrawLineDelta(hdc, 20, 20, 30, 20, x1 + 130, y1, c);
		DrawLineDelta(hdc, 17, 28, 33, 28, x1 + 130, y1, c);
		DrawLineDelta(hdc, 20, 40, 30, 40, x1 + 130, y1, c);
		DrawLineDelta(hdc, 16, 50, 9999, 50, x1 + 130, y1, c);

}

