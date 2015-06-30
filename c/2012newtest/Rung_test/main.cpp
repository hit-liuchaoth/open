#include "Lagrange.h"


#define PATH_IN "1/in.txt"

#define PATH_OUT "1/out.txt"


class la:public Lagrange
{

	double f(double x)
	{
		return 1/(1+25*x*x);
	}
};


main()
{
	la test;
	test.init();
	test.insert(PATH_IN,PATH_OUT);
	test.to_cal(20);
}