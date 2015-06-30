#ifndef __MATCH_DATA__
#define __MATCH_DATA__
#include <fstream>

using namespace std;


#define MAX_NUM		400
#define MAX_NAME	8
#define NEED		1
#define NO_NEED		0
#define FIND		2
#define NOT_FIND	3
#define NO_MORE		1	
#define MAX_LEN		10
#define PATH "data/save.txt"


typedef struct indiv
{
	int		id;
	char	name[MAX_NAME];
	int		hight_g;
	int		weight_g;
	int		hight_w;
	int		weight_w;
	int		need;
	int		match_with;
}INDIV;

typedef struct node
{
	struct indiv *data;
	struct node *next;
	int no;
}NODE;



class MATCH_DATA
{
private:
	int num;
	NODE *start,*current;
	CString result;
	fstream file1;

public:
	int insert(int id,char *name,int hight_g,int weight_g,int need,int hight_w,int weight_w);
	void to_find();
	void init();
	CString *get_result();
	int de_insert(char *p);
	void save();
	void restore();
};




#endif