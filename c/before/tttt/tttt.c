#include<stdio.h>
#include<windows.h>
#include<dos.h>
main()
{
	char i,j,k;
	while(1)
	{
		while(kbhit())
		{
		j=kbhit();
		i=getch();
		k=kbhit();
		printf("\n%d,%d,%d",i,j,k);
		}
		Sleep(10);
	}
}