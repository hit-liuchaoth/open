#ifndef __MATCH__
#define __MATCH__


#define MAX_NUM		400
#define MAX_NAME	10
#define NEED		1
#define NO_NEED		0
#define FIND		2
#define NOT_FIND	3
#define NO_MORE		1	
#define MAX_LEN		10

typedef struct indiv
{
	int		id;
	char	name[MAX_NAME];
	int		hight_g;
	int		weight_g;
	int		hight_w;
	int		weight_w;
	int		valid;
	int		need;
	int		match_with;
}INDIV;

void to_find(INDIV *p);
void init(INDIV *p,int n);
int insert(INDIV *p,char *name,int hight_g,int weight_g,int need,int hight_w,int weight_w);
void display(INDIV *p);

#endif