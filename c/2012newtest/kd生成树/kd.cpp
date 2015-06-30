#include "kd.h"
using namespace std;

const char *table_1[4]={"tcp","udp","icmp","default"};
const char *table_2[70]={"http","smtp","finger","domain_u","auth","telnet","ftp","eco_i","ntp_u","ecr_i",
"other","private","pop_3","ftp_data","rje","time","mtp","link","remote_job","gopher","ssh","name","whois","domain",
"login","imap4","daytime","ctf","nntp","shell","IRC","nnsp","http_443","exec","printer","efs","courier","uucp","klogin",
"kshell","echo","discard","systat","supdup","iso_tsap","hostnames","csnet_ns","pop_2","sunrpc","uucp_path","netbios_ns",
"netbios_ssn","netbios_dgm","sql_net","vmnet","bgp","Z39_50","ldap","netstat","urh_i","X11",
"urp_i","pm_dump","tftp_u","tim_i","red_i","default"};
const char *table_3[30]={"normal","buffer_overflow","loadmodule","perl","neptune",
"smurf","guess_passwd","pod","teardrop","portsweep","ipsweep","land","ftp_write","back","imap","satan",
"phf","nmap","multihop","warezmaster","warezclient","spy","rootkit","0","default"};
const char *table_4[20]={"SF","S1","REJ","S2","S0","S3","RSTO","RSTR","RSTOS0","OTH","SH","default"};



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
	int c[7];//1,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[4];//2,3,41,4
	//double c3[7];//25-31
}NODE_DATA;
*/
	d->c[0]=find_i(p,0);
	d->c[1]=find_i(p,4);
	d->c[2]=find_i(p,5);
	d->c[3]=find_i(p,7);
	d->c[4]=find_i(p,8);
	d->c[5]=find_i(p,22);
	d->c[6]=find_i(p,23);

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
	d->type[3]=get_type4(p);
	
	return 0;
}

int KD_TREE::get_type1(char *p)
{
	//2,can be optimized;
	char tmp[10]={'\0'};
	find_c(p,tmp,1);
	return compare(tmp,table_1,4);

}

int KD_TREE::get_type2(char *p)
{
	//3,can be optimized;
	char tmp[10]={'\0'};
	
	find_c(p,tmp,2);
	
	return compare(tmp,table_2,70);

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
	return compare(tmp,table_3,30);

}

int KD_TREE::get_type4(char *p)
{
	//2,can be optimized;
	char tmp[10]={'\0'};
	find_c(p,tmp,3);
	return compare(tmp,table_4,20);
}

int KD_TREE::compare(char *p,const char *q[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(q[i]=='\0')return MAX;
		if(!strcmp(p,q[i]))return i;
	}
	return MAX;
}

KD_TREE::KD_TREE()
{
	int i;
	LEAF *tmp=new LEAF;
	LEAF *tmp_99=new LEAF;
	l_current=tmp;
	l_start=tmp;
	l2_current=tmp_99;
	l2_start=tmp_99;
	DATA_AFTER *tmp1=new DATA_AFTER;
	DATA_AFTER *tmp_98=new DATA_AFTER;
	a_start=tmp1;
	a_current=tmp1;
	insert1=tmp_98;
	insert_current=tmp_98;
	for(i=0;i<7;i++)
	{
		big.c[i]=0;
		big.c2[i]=0;
		small.c[i]=9999;
		small.c2[i]=9999;
	}

}

void KD_TREE:: display()
{
/*
typedef struct node_data
{
	int c[7];//1,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[4];//2,3,41,4
	//double c3[7];//25-31
}NODE_DATA;
*/

	
/*	while(tmp->next!=0)
	{
		
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
		
		for(i=0;i<3;i++)
		{
			printf("%d,",tmp->data->type[i]);
		}
		printf("%d\n",j);
		
		j++;
		tmp=tmp->next;
		

		
	
	}


		for(i=0;i<7;i++)
		{
			printf("%d,",big.c[i]);
		}
		printf("\n");
		for(i=0;i<7;i++)
		{
			printf("%f,",big.c2[i]);
		}
		printf("\n");

		for(i=0;i<7;i++)
		{
			printf("%d,",small.c[i]);
		}
		printf("\n");
		for(i=0;i<7;i++)
		{
			printf("%f,",small.c2[i]);
		}
		printf("\n");
		printf("\n");
		for(i=0;i<7;i++)
		{
			printf("%f,",l_start->data->c2[i]);
		}*/
	int i;
	DATA_AFTER *tmp=a_start;
	/*
	while(tmp->next!=0)
	{
		for(i=0;i<20;i++)
		printf("%f,",tmp->d[i]);
		tmp=tmp->next;
		printf("\n");
		printf("\n");
	}*/
	while(tmp->next!=0)
	{
		for(i=5;i<7;i++)
		printf("%f,",tmp->d[i]);
		tmp=tmp->next;
		printf("\n");
		printf("\n");
	}
}


void KD_TREE::find_b_s()
{
	LEAF *tmp1=l_start;
	int i;
/*	typedef struct node_data
{
	int c[7];//1,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[4];//2,3,41,4
	//double c3[7];//25-31
}NODE_DATA;*/
	while(tmp1->next!=0)
	{
		for(i=0;i<7;i++)
		{
			if(big.c[i]<tmp1->data->c[i])
			{
				big.c[i]=tmp1->data->c[i];
			}
			if(small.c[i]>tmp1->data->c[i])
			{
				small.c[i]=tmp1->data->c[i];
			}
			if(big.c2[i]<tmp1->data->c2[i])
			{
				big.c2[i]=tmp1->data->c2[i];
			}
			if(small.c2[i]>tmp1->data->c2[i])
			{
				small.c2[i]=tmp1->data->c2[i];
			}
		}
		tmp1=tmp1->next;
	}

}

DATA_AFTER * KD_TREE::divid(NODE_DATA *p)
{
	DATA_AFTER *tmp=new DATA_AFTER;
	tmp->next=0;
	int i;
	for(i=0;i<7;i++)
	{
		if(big.c[i]==0)
			tmp->d[i]=p->c[i];
		else
			tmp->d[i]=(float)(p->c[i])/big.c[i];
		if(big.c2[i]==0)
			tmp->d[i+7]=p->c2[i];
		else
			tmp->d[i+7]=(float)(p->c2[i])/big.c2[i];
	}
	tmp->d[14]=p->d[0];
	tmp->d[15]=p->d[1];
	tmp->d[16]=(float)p->type[0]/4;
	tmp->d[17]=(float)p->type[1]/70;
	tmp->d[18]=(float)p->type[2]/30;
	tmp->d[19]=(float)p->type[3]/20;
	return tmp;
}

void KD_TREE::to_divid()
{
	LEAF *tmp=l_start;
	DATA_AFTER *tmp2=a_start;
	while(tmp->next!=0)
	{
		tmp2->next=divid(tmp->data);
		tmp2=tmp2->next;
		tmp=tmp->next;

	}
}


void sort()
{
	
}


double KD_TREE::distance(DATA_AFTER *p,DATA_AFTER *q)
{
	return (p->d[1]-q->d[1])*(p->d[1]-q->d[1])+(p->d[5]-q->d[5])*(p->d[5]-q->d[5])+(p->d[6]-q->d[6])*(p->d[6]-q->d[6]);
}

int KD_TREE::insert2(char *p)
{
	NODE_DATA *tmp_data=new NODE_DATA;
	LEAF *tmp_leaf=new LEAF;

	l2_current->data=tmp_data;
	l2_current->next=tmp_leaf;
	l2_current->next->next=0;
	l2_current=tmp_leaf;
	
	
	get_data(tmp_data,p);


	return 1;
}

void KD_TREE::to_divid2()
{
	LEAF *tmp=l2_start;
	DATA_AFTER *tmp2=insert1;
	while(tmp->next!=0)
	{
		tmp2->next=divid(tmp->data);
		tmp2=tmp2->next;
		tmp=tmp->next;
	}
}

int KD_TREE::to_distance()
{
	DATA_AFTER *tmp1=a_start->next;
	DATA_AFTER *tmp2=insert1->next;
	int i=0,j=0;
	while(tmp1->next!=0)
	{
		while(tmp2->next!=0)
		{
			dis[i][j]=distance(tmp1,tmp2);
			tmp2=tmp2->next;
			j++;
			if(i>8||j>8)return 0;
		}
		i++;
		tmp1=tmp1->next;
		tmp2=insert1;
	}
}