const char table[10][10]={"liu","ok","cc"};

void prit(char *p)
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