#include <math.h>


double f(double x)
{
	return x*exp(x)-1;
}
main()
{
double y;
double x1=0.567143;
double x2=0.567095;
int i;

for(i=0;i<10;i++)
{
y=f(x1)*x2/(f(x1)-f(x2))+f(x2)*x1/(f(x2)-f(x1));

printf("%f\n",y);
}

}