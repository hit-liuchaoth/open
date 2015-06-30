#ifndef __KD__
#define __KD__


#include <iostream>


#define MAX 70
#define MAX_COM 10





typedef struct node_data
{
	int c[7];//1,5,6,8,9,23,24
	bool d[2];//7,22
	float c2[7];//25-31
	int type[4];//2,3,41,4
	//double c3[7];//25-31
}NODE_DATA;

typedef struct data_after
{
	float d[20];
	struct data_after *next;
}DATA_AFTER;

typedef struct node
{
	int type;//leaf
	struct data_after *state;
	int dim;
	float hold;
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
	int insert2(char *p);
	KD_TREE();
//private:
//	fstream file1; 
	NODE *root;
	LEAF *l_start,*l_current;
	LEAF *l2_start,*l2_current;
	NODE_DATA big,small;
	DATA_AFTER *a_start,*a_current;
	DATA_AFTER *insert1,*insert_current;
//private:
	double dis[10][10];
	int get_data(NODE_DATA *d,char *p);
	int find_c(char *p,char *q,int n);
	int find(char *p,int to);
	double find_f(char *p,int n);
	int find_i(char *p,int n);

	int get_type1(char *p);
	int get_type2(char *p);
	int get_type3(char *p);
	int get_type4(char *p);
	int compare(char *p,const char *q[],int n);
	

	void find_b_s();

	void sort();
	void to_divid();
	DATA_AFTER * divid(NODE_DATA *p);
	void to_divid2();
	void display();
	double distance(DATA_AFTER *p,DATA_AFTER *q);
	int to_distance();
};

#endif