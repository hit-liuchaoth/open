#include "stdio.h"
#include "math.h"
#include "memory.h"
main()
{

	char a[10]="aac";
	char b[10]="aab";
	int c;
	char p='\2';
	c=memcmp(a,b,3);
	printf("%d\n%c\n",c,p);
}