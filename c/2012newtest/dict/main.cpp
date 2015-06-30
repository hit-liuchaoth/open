#include <fstream>
#include "stdio.h"
using namespace std;
#define MAX 10



/*
main()///for a 10 bytes password
{
	int x[10];
	char a[11]="0123456789";
	char b[11]="\0";
	fstream file;
	file.open("dic.txt",ios::out);
	for(x[0]=0;x[0]<MAX;x[0]++)
	{
		for(x[1]=0;x[1]<MAX;x[1]++)
		{
			for(x[2]=0;x[2]<MAX;x[2]++)
			{
				for(x[3]=0;x[3]<MAX;x[3]++)
				{
					for(x[4]=0;x[4]<MAX;x[4]++)
					{
						for(x[5]=0;x[5]<MAX;x[5]++)
						{
							for(x[6]=0;x[6]<MAX;x[6]++)
							{
								for(x[7]=0;x[7]<MAX;x[7]++)
								{
									for(x[8]=0;x[8]<MAX;x[8]++)
									{
										b[0]=a[x[0]];
										b[1]=a[x[1]];
										b[2]=a[x[2]];
										b[3]=a[x[3]];
										b[4]=a[x[4]];
										b[5]=a[x[5]];
										b[6]=a[x[6]];
										b[7]=a[x[7]];
										b[8]=a[x[8]];
										file<<b<<endl;
									}
								}	
							}
						}
					}
				}
				printf("%9d\n",atoi(b));
			}
			
		}
		//printf("%d\n",x[0]);
	}
	printf("done\n");
	file.close();
}
*/
main()
{
	int x[10];
	char a[11]="0123456789";
	char b[11]="826\0\0\0\0\0\0\0";
	char name[5]="8260";
	int count=10;
	fstream file;
	while(count)
	{
	file.open(name,ios::out);

				
					for(x[4]=0;x[4]<MAX;x[4]++)
					{
						for(x[5]=0;x[5]<MAX;x[5]++)
						{
							for(x[6]=0;x[6]<MAX;x[6]++)
							{
								for(x[7]=0;x[7]<MAX;x[7]++)
								{
									for(x[8]=0;x[8]<MAX;x[8]++)
									{
										
										b[3]=name[3];
										b[4]=a[x[4]];
										b[5]=a[x[5]];
										b[6]=a[x[6]];
										b[7]=a[x[7]];
										b[8]=a[x[8]];
										file<<b<<endl;
									}
								}	
							}
						}
	
	}
	name[3]++;
	printf("done\n");
	file.close();
	count--;
	}
}
