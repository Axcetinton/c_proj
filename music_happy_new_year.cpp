#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void sound(char);
void change_key_color(char);
void initial_picture();
void mode_2();
void second_main();

void music_HappyNewYear()			//����happy new year�Ե�ģʽ�Ӻ���
{
	int i,x;
	char ch;
	float mistake=0,accuracy=0;
	char s[4];
	char music_score[]="sssb fffs sfhh gfd dfgg fdfs sfdb mds";//�����ַ�����
	settextstyle(50, 0, TEXT("����"));
	outtextxy(20,300,music_score);
	for(i=0;i<37;i++)
	{
		if(music_score[i]!=' ')		//��������Ӧ����ĸ���ǿո�
		{
			ch=getch();				
			if(ch==27)				//�жϰ��µļ��Ƿ�ΪESC�������򷵻���һ����򣬷������ִ��
				mode_2();
			sound(ch);
			change_key_color(ch);
			settextcolor(WHITE);
			outtextxy(20,300,music_score);//�ڼ����·�д����ĸ����
			x=20+i*25;				//���ڵ����������Ӧ����ĸ����Ļ�ϵĺ�����
			if(ch==music_score[i])
				settextcolor(GREEN);//��ǰ��������ȷ����Ӧ��ĸ����
			else
			{
				settextcolor(RED);	//��ǰ�������������Ӧ��ĸ���
				mistake+=1;
			}
			outtextxy(x,300,music_score[i]);
		}
	}
	cleardevice();
	settextcolor(GREEN);
	accuracy=(1-mistake/30)*100;	//��������㵯���׼ȷ��
	settextstyle(50, 0, TEXT("����"));
	outtextxy(600, 150, TEXT("Nice Try"));
	settextstyle(50,0,TEXT("����"));
	outtextxy(600, 300, TEXT("Accuracy is           %"));
	sprintf(s,"%f",accuracy);		//����Ļ����ʾ׼ȷ��
	outtextxy(900,300,s);
	getch();
	second_main();					//����������
}
