#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)//光标位置函数  
{
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}