#include "kd.h"
#include <fstream>
#include <stdio.h>


//#define PATH "1/1"
#define PATH "1/kddcup.data_10_percent"
#define PATH_OUT "1/4"

using namespace std;
typedef struct data
{
	char x[20];
	int valid;
}DATA;

void init(DATA *p)
{
	int i,j;
	for(i=0;i<200;i++)
	{
		(p+i)->valid=0;
		for(j=0;j<20;j++)
		{
			(p+i)->x[j]='\0';
		}
	}
}

void empty(char *p)
{
	int i;
	for(i=0;i<20;i++)*(p+i)='\0';
}

int find(char *p,DATA *q)
{
	int i;
	for(i=0;i<200;i++)
	{
		if(!(q+i)->valid)return -1;
		if(!strcmp((q+i)->x,p))return 1;
	}
	


	return -1;
}

void insert(char *p,DATA *q)
{
	int i;
	int j=0;
	for(i=0;i<200;i++)
	{
		if((q+i)->valid)continue;
		while(*(p+j)!='\0')
		{
			(q+i)->x[j]=*(p+j);
			j++;
		}
		(q+i)->valid=1;
		break;
	}
}

int main()
{
	DATA da[200];
	KD_TREE kd;
	fstream file1;
	fstream file2;
	int i,j,k,s;
	char x[200];
//	char y[200][20]={'\0'};
	
	char tmp[20];

	init(da);

	file1.open(PATH);
	file2.open(PATH_OUT,ios_base::out);
	
	i=0;
	file1>>x;
	while(*x!='\0')
	{
		empty(tmp);
		
		kd.find_c(x,tmp,1);
		if(find(tmp,da)==-1)
		{
			insert(tmp,da);
			file2<<tmp;
			file2<<'\n';
			printf("%s\n",tmp);
		}
		file1>>x;
		i++;
	}
/*
		file1>>x;
		while(*x!='\0')
		{
		empty(tmp);
		
		s=0;
		s=kd.find(x,41);
		k=0;
		while(x[s]!='.')
		{
			tmp[k]=*(x+s);
			s++;
			k++;
		}
		if(find(tmp,da)==-1)
		{
			insert(tmp,da);
			file2<<tmp;
			file2<<'\n';
			printf("%s\n",tmp);
		}
		file1>>x;
		i++;
	}*/
	
	
	
	return 0;
}