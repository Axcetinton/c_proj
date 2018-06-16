#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void second_main();
void choose_picture();
void initial_picture();			//初始化图形界面
void change_key_color(char);	//实现按键变色
void sound(char);				//按键发出声音
void music_little_grass();
void music_HappyNewYear();
void music_little_star();

void mode_2()					//模式2（教学模式）子函数，选择歌曲界面
{
	char number;
	initgraph(1350, 500);
	setbkcolor(RGB(100, 253, 251));
	cleardevice();
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(150, 50, TEXT("请选择歌曲"));
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(150, 150, TEXT("1.小草（GRASS）"));
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(150, 220, TEXT("2.新年好（Happy New Year）"));
	settextstyle(50,0,TEXT("楷体"));
	outtextxy(150,290,TEXT("3.小星星(Little Star)"));
	number=getch();
	if(number==27)
		second_main();
	initial_picture();
	switch(number)
	{
	case '1':music_little_grass();break;
	case '2':music_HappyNewYear();break;
	case '3':music_little_star();break;
	default:printf("请输出相应歌曲前的数字\n");
	}

}
