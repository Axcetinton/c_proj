#include <graphics.h>      // 引用图形库头文件
#include <conio.h>
void initial_picture();
void Left_type_key(int x);
void Mid_type_key(int x );
void Right_type_key(int x );
void blackkey(int x);


void initial_picture()		//画出钢琴键盘界面
{
	int x,y;
	setfillcolor(RGB(0, 255, 255));
	solidrectangle(0, 0, 1400, 500);

	for(y=20;y<=860;y+=420)
	{
		x=y;
		blackkey(x+30);
		blackkey(x+90);
		blackkey(x+210);
		blackkey(x+270);
		blackkey(x+330);
		setfillcolor(WHITE);
		Left_type_key(x);
		Left_type_key(x+180);
		Mid_type_key(x+70);
		Mid_type_key(x+250);
		Mid_type_key(x+310);
		Right_type_key(x+130);
		Right_type_key(x+370);
	}
}

void Left_type_key(int x)		//根据横坐标画出“左型”白键
{
	solidrectangle(x,25,x+30,275);
	
	solidrectangle(x+30,175,x+40,275);

}
void Mid_type_key(int x)		//根据横坐标画出“中型”白键
{
	solidrectangle(x,25,x+20,175);
	
	solidrectangle(x-10,176,x+30,275);
	

}
void Right_type_key(int x)		//根据横坐标画出“右型”白键
{
	solidrectangle(x,25,x+30,275);
	
	solidrectangle(x-10,176,x,275);
	

}
void blackkey(int x)			//根据横坐标画出黑键
{
	setfillcolor(BLACK);
	solidrectangle(x, 25, x+40, 175);
}
