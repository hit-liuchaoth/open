#include "kd.h"
using namespace std;

const char *table_1[MAX_COM]={"tcp","udp","icmp","default"};
const char *table_2[MAX_COM]={"http","smtp","finger","","","ecr_i","default"};
const char *table_3[MAX_COM]={"normal","smurf","default"};

#define TCP			1
#define UDP			2
#define ICMP		3	

#define HTTP		1
#define SMTP		2
#define FINGER		3
#define DOMAIN_U	4
#define AUTH		5
#define ECR_I		6

#define NORMAL		1
#define SMURF		2

int KD_TREE::find_i(char *p,int n)
{
	int i,j,k=0;
	char x[MAX]={'\0'};
	i=find(p,n);
	j=find(p,n+1);
	for(;i<j-1;i++)
	{
		x[k]=*(p+i);
		k++;
	}
//	return str2int(x);
	return atoi(x);
}

int KD_TREE::find(char *p ,int to)
{
	int i=0;
	while(to)
	{
		if(p[i]==',')
			to--;
		i++;
	}
	return i;
}

double KD_TREE::find_f(char *p,int n)
{
	int i,j,k=0;
	char x[MAX]={'\0'};
	i=find(p,n);
	j=find(p,n+1);
	for(;i<j-1;i++)
	{
		x[k]=*(p+i);
		k++;
	}

	return atof(x);
}

int KD_TREE::find_c(char *p,char *q,int n)
{
	int i,j,k=0;
	//q
	i=find(p,n);
	j=find(p,n+1);
	for(;i<j-1;i++)
	{
		q[k]=*(p+i);
		k++;
	}
	return 0;
}
int KD_TREE::insert(char *p)
{
	NODE_DATA *tmp_data=new NODE_DATA;
	LEAF *tmp_leaf=new LEAF;

	l_current->data=tmp_data;
	l_current->next=tmp_leaf;
	l_current->next->next=0;
	l_current=tmp_leaf;
	
	
	get_data(tmp_data,p);


	return 1;
}

int KD_TREE::get_data(NODE_DATA *d,char *p)
{
	
/*
typedef struct node_data
{
	int c[8];//1,4,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[3];//2,3,41
	//double c3[7];//25-31
}NODE_DATA;
*/
	d->c[0]=find_i(p,0);
	d->c[1]=find_i(p,3);
	d->c[2]=find_i(p,4);
	d->c[3]=find_i(p,5);
	d->c[4]=find_i(p,7);
	d->c[5]=find_i(p,8);
	d->c[6]=find_i(p,22);
	d->c[7]=find_i(p,23);

	d->d[0]=find_i(p,6);
	d->d[1]=find_i(p,21);

	d->c2[0]=find_f(p,24);
	d->c2[1]=find_f(p,25);
	d->c2[2]=find_f(p,26);
	d->c2[3]=find_f(p,27);
	d->c2[4]=find_f(p,28);
	d->c2[5]=find_f(p,29);
	d->c2[6]=find_f(p,30);

	d->type[0]=get_type1(p);
	d->type[1]=get_type2(p);
	d->type[2]=get_type3(p);
	
	return 0;
}

int KD_TREE::get_type1(char *p)
{
	//2,can be optimized;
	char tmp[10]={'\0'};
	find_c(p,tmp,1);
	
	switch(compare(tmp,table_1))
	{
	case 0:
		return TCP;
	case 1:
		return UDP;
	case 2:
		return ICMP;
	default:
		return MAX;
	}


}

int KD_TREE::get_type2(char *p)
{
	//3,can be optimized;
	char tmp[10]={'\0'};
	
	find_c(p,tmp,2);
	
	switch(compare(tmp,table_2))
	{
	case 0:
		return HTTP;
	case 5:
		return ECR_I;

	default:
		return MAX;
	}


}

int KD_TREE::get_type3(char *p)
{
	//2,can be optimized;
	char tmp[10]={'\0'};
	int i,k=0;
	i=find(p,41);
	
	while(p[i]!='.')
	{
		tmp[k]=*(p+i);
		i++;
		k++;
	}
	
	switch(compare(tmp,table_3))
	{
	case 0:
		return NORMAL;
	case 1:
		return SMURF;

	default:
		return MAX;
	}


}

int KD_TREE::compare(char *p,const char *q[])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		if(q[i]=='\0')return MAX;
		if(!strcmp(p,q[i]))return i;
	}
	return MAX;
}

KD_TREE::KD_TREE()
{
	
	LEAF *tmp=new LEAF;
	l_current=tmp;
	l_start=tmp;

}

void KD_TREE:: display()
{
	LEAF *tmp=l_start;
	int i;
	int j;
/*
typedef struct node_data
{
	int c[8];//1,4,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[3];//2,3,41
	//double c3[7];//25-31
}NODE_DATA;
*/

	j=0;
	while(tmp->next!=0)
	{
		/*
		for(i=0;i<8;i++)
		{
			printf("%d,",tmp->data->c[i]);
		}
		for(i=0;i<2;i++)
		{
			printf("%d,",tmp->data->d[i]);
		}
		for(i=0;i<7;i++)
		{
			printf("%f,",tmp->data->c2[i]);
		}
		*/
		for(i=0;i<3;i++)
		{
			printf("%d,",tmp->data->type[i]);
		}
		printf("%d\n",j);
		j++;
		tmp=tmp->next;
	}
}