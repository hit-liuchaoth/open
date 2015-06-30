#ifndef __LIB_TEST__
#define __LIB_TEST__

#include "stdio.h"
extern "C" void show();

class LIB_TEST
{
public :
	LIB_TEST(int x);
	int a;
public:
	void show();
};


#endif