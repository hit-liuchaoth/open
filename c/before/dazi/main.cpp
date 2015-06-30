#include"head.h"
#include<process.h>
#include<stddef.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
	dazi sazi;
//	union
//	{
//		void (*display1)(void *);
//		void (dazi::*display)(void *);
//	}pro;
//	pro.display=&dazi::display;
	sazi.init();
	srand(time(NULL));
	while(1)
	{
		sazi.rand1();
		sazi.check2();
		sazi.rece(sazi.flag);
		sazi.display();
		Sleep(10);
	}
}