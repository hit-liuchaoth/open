#include "stdio.h"


void pri()
{
	while(1)
	{
		printf("attack!\n");
	}
}


main()
{
	int *p=(int *)pri;
	int x[50];
	int y;
	y=(int)x;
	int i;
	for(i=0;i<50;i++)
	{
		x[i]=*(p+i);
	}
//	pri();
	__asm
	{
		jmp y
	}
}