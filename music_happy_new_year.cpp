#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void sound(char);
void change_key_color(char);
void initial_picture();
void mode_2();
void second_main();

void music_HappyNewYear()			//歌曲happy new year自弹模式子函数
{
	int i,x;
	char ch;
	float mistake=0,accuracy=0;
	char s[4];
	char music_score[]="sssb fffs sfhh gfd dfgg fdfs sfdb mds";//曲谱字符数组
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(20,300,music_score);
	for(i=0;i<37;i++)
	{
		if(music_score[i]!=' ')		//若音符对应的字母不是空格
		{
			ch=getch();				
			if(ch==27)				//判断按下的键是否为ESC，若是则返回上一层程序，否则继续执行
				mode_2();
			sound(ch);
			change_key_color(ch);
			settextcolor(WHITE);
			outtextxy(20,300,music_score);//在键盘下方写上字母曲谱
			x=20+i*25;				//正在弹奏的音符对应的字母在屏幕上的横坐标
			if(ch==music_score[i])
				settextcolor(GREEN);//当前音弹奏正确则相应字母变绿
			else
			{
				settextcolor(RED);	//当前音弹奏错误则相应字母变红
				mistake+=1;
			}
			outtextxy(x,300,music_score[i]);
		}
	}
	cleardevice();
	settextcolor(GREEN);
	accuracy=(1-mistake/30)*100;	//弹奏完计算弹奏的准确度
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(600, 150, TEXT("Nice Try"));
	settextstyle(50,0,TEXT("楷体"));
	outtextxy(600, 300, TEXT("Accuracy is           %"));
	sprintf(s,"%f",accuracy);		//在屏幕上显示准确度
	outtextxy(900,300,s);
	getch();
	second_main();					//返回主界面
}
