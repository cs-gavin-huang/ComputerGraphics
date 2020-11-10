// GraphicsTest02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <graphics.h>
#include <conio.h>
#include "DDA.h"
#include "BresenhamLine.h"
#include "BrehensamCircle.h"
#include "filling.h"
#include "windows.h"
#include "hanzi.h"


int main()
{
	initgraph(800, 600);
	
	Circle_Bresenham(380, 100, 50, GREEN);
	seed_filling(380, 100, RED, GREEN);
	lineBres(200, 180, 550, 180, RED);
	lineBres(200, 240, 550, 240, RED);
	const char *s = "１８软１　黄国立　１７０８０８２８０３１３０";
	hanzi(s);
	_getch();
	closegraph();
	return 0;
}
