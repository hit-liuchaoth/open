#include<windows.h>
#include<conio.h>
main()
{
	char c;
	int x;
	while(1)
	{
		if(kbhit())
		{
			c=getch();
		}
		else
			c=0;
		switch(c)
		{
			case 'a':
				x=1;
				break;
			case 's':
				x=2;
				break;
			case 'd':
				x=3;
				break;
			case 'f':
				x=4;
				break;
			default :
				x=0;
		}
		Beep(x*800,50);
	}
}