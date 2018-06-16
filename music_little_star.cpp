#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void sound(char);
void change_key_color(char);
void initial_picture();
void mode_2();
void second_main();

void music_little_star()			//歌曲《小星星》的曲谱子函数
{
	int i,x;
	char ch;
	float mistake=0,accuracy=0;
	char s[4];
	char music_score[]="sshhjjh ggffdds hhggffd hhggffd sshhjjh ggffdds";
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(20,300,music_score);
	for(i=0;i<47;i++)
	{
		if(music_score[i]!=' ')
		{
			ch=getch();
			if(ch==27)
				mode_2();
			sound(ch);
			change_key_color(ch);
			settextcolor(WHITE);
			outtextxy(20,300,music_score);
			x=20+i*25;
			if(ch==music_score[i])
				settextcolor(GREEN);
				else
			{
				settextcolor(RED);
				mistake+=1;
			}
			outtextxy(x,300,music_score[i]);
		}
	}
	cleardevice();
	settextcolor(GREEN);
	accuracy=(1-mistake/42)*100;
	settextstyle(50, 0, TEXT("楷体"));
	outtextxy(600, 150, TEXT("Nice Try"));
	settextstyle(50,0,TEXT("楷体"));
	outtextxy(600, 300, TEXT("Accuracy is           %"));
	sprintf(s,"%f",accuracy);
	outtextxy(900,300,s);
	getch();
	second_main();
}
