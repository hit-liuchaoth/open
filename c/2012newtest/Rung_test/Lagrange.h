#ifndef __Lagrange__
#define __Lagrange__
#include <fstream>
using namespace std;
#define MAX 50


class Lagrange
{
public:
	int n;
	double x[MAX];
	double y[MAX];
	double a,b;
	double l[MAX];
	fstream file;
	fstream file_out;


	void insert(char *p,char *q);

	void init();
	double L(double in,int j);
	double cal(double in);

	void to_cal(int c);
	virtual double f(double x);
} ;
	








#endif