#include <stdio.h>
const char *table[10]={"liu","ok","cc"};

void prit(const char **p)
{
	printf("%s\n",p);
}


main()
{
	int i;
	for(i=0;i<3;i++)
	{
		prit(table[i]);
	}
}