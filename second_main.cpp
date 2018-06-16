#include <conio.h>
#include <stdio.h>

void mood_1();
void mode_2();
void choose_picture();


void second_main()			//程序执行第一层：选择模式（主界面）
{


	choose_picture();
	switch(getch())
	{
	case '1':mood_1();break;
	case '2':mode_2();break;
	default:printf("请输出相应模式前的数字\n");
	}
}