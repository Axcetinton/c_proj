#include <conio.h>
#include <stdio.h>

void mood_1();
void mode_2();
void choose_picture();


void second_main()			//����ִ�е�һ�㣺ѡ��ģʽ�������棩
{


	choose_picture();
	switch(getch())
	{
	case '1':mood_1();break;
	case '2':mode_2();break;
	default:printf("�������Ӧģʽǰ������\n");
	}
}