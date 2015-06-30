
void main ()
{
	int i=0;
	int j=0;
	char str[100]="RPQLD JDOOLD HVW GLYLVD LQ SDUWHV WUHV";
				     si      i       i i   is	
	
	printf("%d   %d\n\n",' ','Z');

	for(j=1;j<26;j++)
	{
		i=0;
		do
		{
			if((str[i]+j)>=65&&(str[i]+j)<=90)
				printf("%c",str[i]+j);
			else if((str[i]+j)==32+j)
				printf(" ");
			else if((str[i]+j)>90)
				printf("%c",str[i]+j-26);
			i++;
		}while(str[i]!='\0');
		printf("\t%d\n",j);
	}
}