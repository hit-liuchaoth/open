
#include "Match.h"

void init(INDIV *p,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		(p+i)->id=0;
		for(j=0;j<MAX_NAME;j++)
		{
			(p+i)->name[j]='\0';
		}
		(p+i)->hight_g=0;
		(p+i)->weight_g=0;
		(p+i)->hight_w=0;
		(p+i)->weight_w=0;
		(p+i)->valid=0;
		(p+i)->need=NO_NEED;
		(p+i)->match_with=0;
	}
}

void to_find(INDIV *p)
{
	int i,j;
	for(i=0;i<MAX_NUM;i++)
	{
		if((p+i)->valid==1)
		{
			if((p+i)->need==NEED||(p+i)->need==NOT_FIND)
			{
				for(j=i+1;j<MAX_NUM;j++)
				{
					if((p+j)->valid==1)
					{
						if((p+j)->need==NEED)
						{
							if(	  ((p+i)->hight_w	==	(p+j)->hight_g)	
								&&((p+i)->weight_w	==	(p+j)->weight_g)
								&&((p+i)->hight_g	==	(p+j)->hight_w)
								&&((p+i)->weight_g	==	(p+j)->weight_w))
							{
								(p+i)->match_with=j;
								(p+j)->match_with=i;
								(p+i)->need=FIND;
								(p+j)->need=FIND;
								break;
							}
							else
								continue;
						}
						else
							continue;
					}
					else
					{
						(p+i)->need=NOT_FIND;
						break;
					}
				}
			}//end of (p+i)->need==NEED
		}
		else
			break;
	}
}

int insert(INDIV *p,char *name,int hight_g,int weight_g,int need,int hight_w,int weight_w)
{
	int i,j,k;
	for(i=0;i<MAX_NUM;i++)
	{
		if((p+i)->valid==0)
		{
			k=0;
			for(j=MAX_NAME;j>0;j--)
			{
				if((name+k)!='\0')
				{
					*((p+i)->name+k)=*(name+k);
					k++;
				}
				else
					break;
			}
			(p+i)->valid=1;
			(p+i)->hight_g=hight_g;
			(p+i)->weight_g=weight_g;
			(p+i)->hight_w=hight_w;
			(p+i)->weight_w=weight_w;
			(p+i)->need=need;
			return 0;
		}
	}
	return NO_MORE;
}

void display(INDIV *p)
{
	int i;
	printf("Name\tH_g\tW_g\tNeed\tHw\tW_w\tMatch_with\n");
	for(i=0;i<MAX_NUM;i++)
	{
		if((p+i)->valid==0)
		{
			break;
		}
		else
		{
			printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",(p+i)->name,(p+i)->hight_g,(p+i)->weight_g,(p+i)->need,(p+i)->hight_w,(p+i)->weight_w,(p+i)->match_with);
		}
	}
}



