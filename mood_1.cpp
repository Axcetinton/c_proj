#include <conio.h>
#include <graphics.h>

void second_main();
void choose_picture();
void initial_picture();			//��ʼ��ͼ�ν���
void change_key_color(char);	//ʵ�ְ�����ɫ
void sound(char);				//������������

void mood_1()					//ģʽ1���Ե�ģʽ���Ӻ���
{
	char ch;
	initgraph(1350, 500);
	initial_picture();
	while(1)
	{
		ch=getch();
		if(ch==27)				//�ж��Ƿ񷵻���һ�����
			second_main();
		sound(ch);
		change_key_color(ch);
	}
	
}