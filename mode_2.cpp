#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void second_main();
void choose_picture();
void initial_picture();			//��ʼ��ͼ�ν���
void change_key_color(char);	//ʵ�ְ�����ɫ
void sound(char);				//������������
void music_little_grass();
void music_HappyNewYear();
void music_little_star();

void mode_2()					//ģʽ2����ѧģʽ���Ӻ�����ѡ���������
{
	char number;
	initgraph(1350, 500);
	setbkcolor(RGB(100, 253, 251));
	cleardevice();
	settextstyle(50, 0, TEXT("����"));
	outtextxy(150, 50, TEXT("��ѡ�����"));
	settextstyle(50, 0, TEXT("����"));
	outtextxy(150, 150, TEXT("1.С�ݣ�GRASS��"));
	settextstyle(50, 0, TEXT("����"));
	outtextxy(150, 220, TEXT("2.����ã�Happy New Year��"));
	settextstyle(50,0,TEXT("����"));
	outtextxy(150,290,TEXT("3.С����(Little Star)"));
	number=getch();
	if(number==27)
		second_main();
	initial_picture();
	switch(number)
	{
	case '1':music_little_grass();break;
	case '2':music_HappyNewYear();break;
	case '3':music_little_star();break;
	default:printf("�������Ӧ����ǰ������\n");
	}

}
