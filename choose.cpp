#include<stdio.h>
#include<windows.h>
#include <graphics.h>
 

void choose_picture()			//����ѡ�����
{
	initgraph(1350, 500);
	setbkcolor(RGB(100, 253, 251));
	cleardevice();
	settextstyle(50, 0, TEXT("����"));
	outtextxy(600, 150, TEXT("PIANO"));
	settextstyle(50, 0, TEXT("����"));
	outtextxy(150, 250, TEXT("1.�Ե�ģʽ"));
	settextstyle(50, 0, TEXT("����"));
	outtextxy(150, 350, TEXT("2.��ѧģʽ"));
}
