#include "kd.h"
#include <fstream>
#include <stdio.h>


#define PATH "1/normal"
#define PATH2 "1/smurf"
//#define PATH "1/kddcup.data_10_percent"
#define PATH_OUT1 "1/normal_icmp"
#define PATH_OUT2 "1/smurf_icmp"
#define PATH_OUT3 "1/smurf"
#define PATH_OUT4 "1/smurf_ecr_i"
#define PATH_OUT5 "1/smurf_n_ecr_i"
#define PATH_OUT6 "1/normal_ecr_i"

using namespace std;


int main()
{
	KD_TREE kd;
	fstream file1;
	fstream file2;
	fstream file3;
	fstream file4;
	fstream file5;
	fstream file6;
	fstream file7;

	int i,j,k;
	char x[200];
	char y[200];

	file1.open(PATH);
	file2.open(PATH2);
	
	i=100000;
	file1>>x;
	file2>>y;
	while(*x!='\0'&&i)
	{
		i--;
		kd.insert(x);
		
		file1>>x;
		
	}
	i=10000;
	while(*y!='\0'&&i)
	{
		i--;
		kd.insert2(y);
		
		file2>>y;
		
	}

	kd.find_b_s();
	kd.to_divid();
	kd.to_divid2();
	kd.to_distance();
//	kd.display();
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%f\n",kd.dis[i][j]);
		}
	}
	
	return 0;
}