#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)//���λ�ú���  
{
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}