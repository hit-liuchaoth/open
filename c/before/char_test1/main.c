#include "stdio.h"
main()
{
	char a='b';
	int c;
	c=sizeof(a);
	printf("0x%hhx\n %d\n%d\n",a,a,c);
}