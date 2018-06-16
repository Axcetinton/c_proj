#include <conio.h>
#include <graphics.h>

void initial_picture();

void change_key_color(char ch)			//实现按键则钢琴上相应的键变色
{
	setfillcolor(RGB(190,190,190));
	switch(ch)
	{

	case'z':
		solidrectangle(20,25,50,275);
		solidrectangle(51,175,60,275);
		break;

	case'x':
		solidrectangle(90,25,110,275);
		solidrectangle(80,176,120,275);
		break;

	case'c':			
		solidrectangle(150,25,180,275);
		solidrectangle(140,176,150,275);
		break;

	case'v':
		solidrectangle(200,25,230,275);
		solidrectangle(231,175,240,275);
		break;

	case'b':		
		solidrectangle(270,25,290,275);
		solidrectangle(260,176,300,275);
		break;

	case'n':			
		solidrectangle(330,25,350,275);
		solidrectangle(320,176,360,275);
		break;

	case'm':		
		solidrectangle(390,25,420,275);
		solidrectangle(380,176,390,275);
		break;

	case's':	
		solidrectangle(440,25,470,275);
		solidrectangle(471,175,480,275);
		break;

	case'd':
		solidrectangle(510,25,530,275);
		solidrectangle(500,176,540,275);
		break;

	case'f':		
		solidrectangle(570,25,600,275);
		solidrectangle(560,176,570,275);
		break;

	case'g':	
		solidrectangle(620,25,650,275);
		solidrectangle(651,175,660,275);
		break;

	case'h':	
		solidrectangle(690,25,710,275);
		solidrectangle(680,176,720,275);
		break;

	case'j':
		solidrectangle(750,25,770,275);
		solidrectangle(740,176,780,275);
		break;

	case'k':	
		solidrectangle(810,25,840,275);
		solidrectangle(800,176,820,275);
		break;

	case'w':		
		solidrectangle(860,25,890,275);	
		solidrectangle(891,175,900,275);
		break;

	case'e':		
		solidrectangle(930,25,950,275);
		solidrectangle(920,176,960,275);
		break;

	case'r':		
		solidrectangle(990,25,1020,275);
		solidrectangle(980,176,990,275);
		break;

	case't':	
		solidrectangle(1040,25,1070,275);
		solidrectangle(1071,175,1080,275);
		break;

	case'y':	
		solidrectangle(1110,25,1130,275);
		solidrectangle(1100,176,1140,275);
		break;

	case'u':	
		solidrectangle(1170,25,1190,275);
		solidrectangle(1160,176,1200,275);
		break;

	case'i':		
		solidrectangle(1230,25,1260,275);
		solidrectangle(1220,176,1230,275);
		break;
	}
	Sleep(40);
	initial_picture();						//变色停滞40毫秒后键盘回复初始的样子
}
