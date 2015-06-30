#ifndef __KD__
#define __KD__


#include <iostream>


#define MAX 20
#define MAX_COM 10





typedef struct node_data
{
	int c[8];//1,4,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[3];//2,3,41
	//double c3[7];//25-31
}NODE_DATA;

typedef struct node
{
	int type;
	int id;
	int valid;
	struct node *l;
	struct node *r;
}NODE;


typedef struct leaf
{
	struct node_data *data;
	struct leaf *next;
}LEAF;

class KD_TREE
{
public:
	int insert(char *p);
	KD_TREE();
//private:
//	fstream file1; 
	NODE *root;
	LEAF *l_start,*l_current;
//private:
	
	int get_data(NODE_DATA *d,char *p);
	int find_c(char *p,char *q,int n);
	int find(char *p,int to);
	double find_f(char *p,int n);
	int find_i(char *p,int n);

	int get_type1(char *p);
	int get_type2(char *p);
	int get_type3(char *p);
	int compare(char *p,const char *q[]);

	void display();
};

#endif