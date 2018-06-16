#include<stdio.h>
#include<windows.h>
#include <graphics.h>
 

void choose_picture()			//画出选择界面
{
	initgraph(1350, 500);
	setbkcolor(RGB(100, 253, 251));
	cleardevice();
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(600, 150, TEXT("PIANO"));
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(150, 250, TEXT("1.自弹模式"));
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(150, 350, TEXT("2.教学模式"));
}
