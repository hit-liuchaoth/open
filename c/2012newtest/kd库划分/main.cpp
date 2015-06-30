#include "kd.h"
#include <fstream>
#include <stdio.h>


//#define PATH "1/smurf"
#define PATH "1/kddcup.data_10_percent"
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

	file1.open(PATH);
	file2.open(PATH_OUT1,ios_base::out);
	file3.open(PATH_OUT2,ios_base::out);
	file4.open(PATH_OUT3,ios_base::out);
	file5.open(PATH_OUT4,ios_base::out);
	file6.open(PATH_OUT5,ios_base::out);
	file7.open(PATH_OUT6,ios_base::out);
	
	i=0;
	file1>>x;
	while(*x!='\0')
	{
		
		if(kd.get_type1(x)==3&&kd.get_type3(x)!=2)//icmp normal
		{
			file2<<x;
			file2<<'\n';
		}
		if(kd.get_type1(x)==3&&kd.get_type3(x)==2)//icmp smurf
		{
			file3<<x;
			file3<<'\n';
		}
		if(kd.get_type3(x)==2)//smurf
		{
			file4<<x;
			file4<<'\n';
		}
		if(kd.get_type3(x)==2&&kd.get_type2(x)==6)//smurf ecr_i
		{
			file5<<x;
			file5<<'\n';
		}
		if(kd.get_type3(x)==2&&kd.get_type2(x)!=6)//smurf n_ecr_i
		{
			file6<<x;
			file6<<'\n';
		}
		if(kd.get_type3(x)!=2&&kd.get_type2(x)==6)//normal ecr_i
		{
			file7<<x;
			file7<<'\n';
		}
		file1>>x;
	}
	

	
	
	return 0;
}