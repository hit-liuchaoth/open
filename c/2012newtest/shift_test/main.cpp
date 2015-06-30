#include "stdio.h"
#define rol(a,n) a=a<<n|a>>(32-n)
main()
{
	int a=0xf00f;
	rol(a,31);

	printf("%x\n",a);
}