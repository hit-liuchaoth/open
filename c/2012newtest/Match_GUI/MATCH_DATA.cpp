#include "StdAfx.h"
#include "MATCH_DATA.h"

void MATCH_DATA::init()
{
	int i;
	num=0;
	NODE *tmp=new NODE;
	INDIV *tmp1=new INDIV;
	start=tmp;
	start->no=0;
	start->next=0;
	start->data=tmp1;
	current=start;
	tmp1->hight_g=0;
	tmp1->hight_w=0;
	tmp1->id=0;
	tmp1->match_with=0;
	tmp1->need=0;
	tmp1->weight_g=0;
	tmp1->weight_w=0;
	for(i=0;i<MAX_NAME;i++)
		tmp1->name[i]='\0';


}

void MATCH_DATA::to_find()
{
	NODE *tmp1,*tmp2;
	tmp1=start;
	while(tmp1->next!=0)
	{
		if(tmp1->data->need==NEED||tmp1->data->need==NOT_FIND)
		{
			tmp2=tmp1->next;
			while(tmp2->next!=0)
			{
				if(tmp2->data->need==NEED)
				{
					if(		  (tmp1->data->hight_w	==	tmp2->data->hight_g) 
							&&(tmp1->data->weight_w	==	tmp2->data->weight_g)
							&&(tmp1->data->hight_g	==	tmp2->data->hight_w)
							&&(tmp1->data->weight_g	==	tmp2->data->weight_w)
						)
					{
						tmp1->data->match_with=tmp2->no;
						tmp2->data->match_with=tmp1->no;
						tmp1->data->need=FIND;
						tmp2->data->need=FIND;
						break;
					}
					else
					{
						tmp2=tmp2->next;
						continue;
					}
				}
				else
				{
					tmp2=tmp2->next;
					continue;
				}//	if(tmp2->data->need==0)
			}//while(tmp2->next!=0)
			if(tmp1->data->need!=FIND)tmp1->data->need=NOT_FIND;
			tmp1=tmp1->next;
			continue;
		}
		else
		{
			tmp1=tmp1->next;
			continue;
		}
	}			
}

int MATCH_DATA::insert(int id,char *name,int hight_g,int weight_g,int need,int hight_w,int weight_w)
{
	int i;
	num++;

	NODE *tmp2=new NODE;
	tmp2=start;
	while(tmp2->next!=0)
	{
		if(strcmp(tmp2->data->name,name)==0)
		{
			return 1;
		}
		else
		{
			tmp2=tmp2->next;
		}
	}



	current->data->hight_g=hight_g;
	current->data->hight_w=hight_w;
	current->data->weight_g=weight_g;
	current->data->weight_w=weight_w;
	current->data->id=id;
	current->no=num;
	current->data->match_with=0;
	current->data->need=need;
	
	for(i=0;i<MAX_NAME;i++)
	{
		current->data->name[i]='\0';
	}
	for(i=0;i<MAX_NAME;i++)
	{
		if(name[i]=='\0')break;
		current->data->name[i]=name[i];
	}
	
	NODE *tmp=new NODE;
	INDIV *tmp1=new INDIV;
	current->next=tmp;
	current=tmp;
	current->next=0;
	current->data=tmp1;
	return 0;
}



CString *MATCH_DATA::get_result()
{
	NODE *tmp1=start;
	NODE *tmp2;
	NODE *tmp3;
	char tmp[MAX_NAME];
	result="\0";
	while(tmp1->next!=0)
	{
		itoa(tmp1->data->id,tmp,10);
		result+=tmp;
		result+="\t";

		result+=tmp1->data->name;
		result+="\t\t";

		itoa(tmp1->data->hight_g,tmp,10);
		result+=tmp;
		result+="\t";

		itoa(tmp1->data->weight_g,tmp,10);
		result+=tmp;
		result+="\t\t";

		itoa(tmp1->data->hight_w,tmp,10);
		result+=tmp;
		result+="\t";

		itoa(tmp1->data->weight_w,tmp,10);
		result+=tmp;
		result+="\t\t";
	
		if(tmp1->data->match_with!=0)
		{
			tmp3=start;
			while(tmp3->next!=0)
			{
				if(tmp1->data->match_with==tmp3->no)
				{
					result+=tmp3->data->name;
					result+="\r\n";
					break;
				}
				tmp3=tmp3->next;
			}
		}
		else
		{	
			itoa(tmp1->data->match_with,tmp,10);
			result+=tmp;
			result+="\r\n";
		}	/*
		itoa(tmp1->data->match_with,tmp,10);
		result+=tmp;
		result+="\r\n";
*/
		tmp1=tmp1->next;
	}
	return &result;
}

int MATCH_DATA::de_insert(char *p)
{
	NODE *tmp,*tmp2;
	NODE *tmp_b;
	tmp_b=0;
	tmp=start;
	while(tmp->next!=0)
	{
		if(strcmp(tmp->data->name,p)==0)
		{
			if(tmp->data->match_with!=0)
			{
				tmp2=start;
				while(tmp2->next!=0)
				{
					if(tmp2->no==tmp->data->match_with)
					{
						tmp2->data->need=NEED;
						tmp2->data->match_with=0;
						break;
					}
					tmp2=tmp2->next;
				}
			}
			if(tmp_b!=0)
			{
				tmp_b->next=tmp->next;
				delete tmp;
			}
			else
			{
				start=tmp->next;
				delete tmp;
			}
			return 0;
		}
		else
		{
			tmp_b=tmp;
			tmp=tmp->next;
		}
	}
	return 1;
}



void MATCH_DATA::save()
{
	NODE *tmp;
	tmp=start;
	file1.open(PATH,ios_base::out);
	file1<<num;
	file1<<"\r\n";
	while(tmp->next!=0)
	{
		file1<<tmp->data->id;
		file1<<"\r\n";
		file1<<tmp->data->name;
		file1<<"\r\n";
		file1<<tmp->data->hight_g;
		file1<<"\r\n";
		file1<<tmp->data->weight_g;
		file1<<"\r\n";
		file1<<tmp->data->hight_w;
		file1<<"\r\n";
		file1<<tmp->data->weight_w;
		file1<<"\r\n";
		file1<<tmp->data->need;
		file1<<"\r\n";
		file1<<tmp->data->match_with;
		file1<<"\r\n";
		file1<<tmp->no;
		file1<<"\r\n";

		
		tmp=tmp->next;
	}
}


void MATCH_DATA::restore()
{
	char x[20];
	int i=0;
	INDIV *z;
	NODE *tmp,*tmp2;
	tmp=start;
	file1.open(PATH);
	file1>>x;
	num=atoi(x);
	while(x[0]!='\0')
	{
		z=new INDIV;
		tmp->data=z;
		
		file1>>x;
		z->id=atoi(x);
		file1>>x;
		strcpy(z->name,x);
		file1>>x;
		z->hight_g=atoi(x);
		file1>>x;
		z->weight_g=atoi(x);
		file1>>x;
		z->hight_w=atoi(x);
		file1>>x;
		z->weight_w=atoi(x);
		file1>>x;
		z->need=atoi(x);
		file1>>x;
		z->match_with=atoi(x);
		file1>>x;
		tmp->no=atoi(x);
		if(i!=num)
		{
			tmp2=new NODE;
			tmp->next=tmp2;
			tmp2->next=0;
			tmp=tmp2;
		}
		else 
		{
			current=tmp;
			tmp->next=0;
		}
		i++;
	}

}