#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10
#define RATE 90
#define WRONG 99
#define SPEED 100

class dazi
{
public:
	char content[MAX];
	int step[2][MAX];
	int score;
	int flag;
	COORD pos[MAX];
	HANDLE hand;
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	void init(void);
	void display(void);
	int check(void);
	void rand1(void);
	void rece(int x);
	void check2(void);
};

void dazi::check2(void)
{
	flag=check();
}
void dazi::init(void)
{
	int i;
	hand=GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hand,&csbi);
	for(i=0;i<MAX;i++)
	{
		content[i]='0';
		step[0][i]=rand()%15+10;
		step[1][i]=step[0][i];
	}
	score=0;
	flag=-1;
}

void dazi::rand1(void)
{
	int i;
	int j;
	for(i=0;i<MAX;i++)
	{
		if(content[i]=='0')
		{
			j=rand()%RATE;
			switch(j)
			{
			case 0:
				content[i]=rand()%('z'-'a'+1)+'a';
				pos[i].X=rand()%50+10;
				pos[i].Y=1;
			}
		}
	}
}

int dazi::check(void)
{
	int i;
	char tem='0';
	if(kbhit())
	{
		tem=getch();
		if(tem!='0')
		{
			for(i=0;i<MAX;i++)
			{
				if(tem==content[i])
					return i;
			}
			return WRONG;
		}
		else
			return -1;
	}
	else
	{
		return -1;
	}
}

void dazi::display(void )
{
	int i;

	system("cls");
	for(i=0;i<MAX;i++)
	{
		if(content[i]!='0')
		{
			WriteConsoleOutputCharacter(hand,&content[i],1,pos[i],NULL);
			if(step[1][i]!=0)
			{
				step[1][i]--;
			}
			else
			{
				step[1][i]=step[0][i];
				pos[i].Y+=1;
			}
			if(pos[i].Y==20)
			{
				content[i]='0';
				rece(WRONG);
			}
		}
		
	}
	printf("%d",score);
}

void dazi::rece(int x)
{
	switch(x)
	{
	case -1:
		break;
	case WRONG:
		score-=1;
		flag=-1;
		break;
	default :
		score+=1;
		content[x]='0';
		flag=-1;
	}
}
