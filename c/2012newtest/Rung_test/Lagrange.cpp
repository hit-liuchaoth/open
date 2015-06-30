#include "Lagrange.h"

void Lagrange::init()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		x[i]=0;
		y[i]=0;
	}
	n=0;
}

double Lagrange::f(double x)
{
	return x;
}

void Lagrange::insert(char *p,char *q)
{
	int i;
	file.open(p);
	file_out.open(q,ios::out);
	file>>n;
	file>>a;
	file>>b;
	for(i=0;i<=n;i++)
	{
		x[i]=a+b*i;
		y[i]=f(x[i]);
	}
	
}



double Lagrange::L(double in,int j)
{
	int i;
	double tmp=1;
	for(i=0;i<=n;i++)
	{
		if(i!=j)
		{
			tmp*=(in-x[i]);
			if((x[j]-x[i])!=0)
				tmp/=(x[j]-x[i]);
		}
	}
	return tmp;
}


double Lagrange::cal(double in)
{
	int i;
	double sum=0;
	for(i=0;i<=n;i++)
	{
		sum+=L(in,i)*y[i];
	}
	return sum;
}

void Lagrange::to_cal(int c)
{
	int i;
	double tmp=(b*n)/c;
	for(i=0;i<=c;i++)
	{
		l[i]=cal(a+tmp*i);
	}
}