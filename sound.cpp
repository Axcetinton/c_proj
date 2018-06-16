#include <cstdio>
#include <windows.h>

#define qDO 262						//将音调与相应的频率对应起来
#define qRE 294
#define qMI 330
#define qFA 349
#define qSO 392
#define qLA 440
#define qSI 494
#define DO 523
#define RE 578
#define MI 659
#define FA 698
#define SO 784
#define LA 880
#define SI 988
#define DO1 1046
#define RE1 1175
#define MI1 1318
#define FA1 1480
#define SO1 1568
#define LA1 1760
#define SI1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865

void sound(char ch)
{
	int tune;
	if(ch=='a'||ch=='l'||ch=='q'||ch=='o'||ch=='p');
	else
	{
		switch(ch)
		{
		case 'z': tune=qDO; break;
		case 'x': tune=qRE; break;
		case 'c': tune=qMI; break;
		case 'v': tune=qFA; break;
		case 'b': tune=qSO; break;
		case 'n': tune=qLA; break;
		case 'm': tune=qSI; break;
		case 's': tune=DO;  break;
		case 'd': tune=RE;  break;
		case 'f': tune=MI;  break;
		case 'g': tune=FA;  break;
		case 'h': tune=SO;  break;
		case 'j': tune=LA;  break;
		case 'k': tune=SI;  break;
		case 'w': tune=DO1; break;
		case 'e': tune=RE1; break;
		case 'r': tune=MI1; break;
		case 't': tune=FA1; break;
		case 'y': tune=SO1; break;
		case 'u': tune=LA1; break;
		case 'i': tune=SI1; break;
		}
		Beep(tune,100);						//发出与按下的键相对应的音调100毫秒
	}
}