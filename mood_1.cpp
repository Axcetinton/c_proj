#include <conio.h>
#include <graphics.h>

void second_main();
void choose_picture();
void initial_picture();			//初始化图形界面
void change_key_color(char);	//实现按键变色
void sound(char);				//按键发出声音

void mood_1()					//模式1（自弹模式）子函数
{
	char ch;
	initgraph(1350, 500);
	initial_picture();
	while(1)
	{
		ch=getch();
		if(ch==27)				//判断是否返回上一层程序
			second_main();
		sound(ch);
		change_key_color(ch);
	}
	
}