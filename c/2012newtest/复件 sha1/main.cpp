#include "stdio.h"
#include <fstream>
using namespace std;
/*
the input is less than 16 bytes
*/
const char table[20]={3,2,1,0,7,6,5,4,11,10,9,8,15,14,13,12};

void convert(unsigned char *p ,unsigned int *M)
{
	int i;
	unsigned char* m=(unsigned char *)M;
	for(i=0;i<488;i++)
	{
		if(*p!=0)
		{
			m[table[i]]=*p;
			p++;
		}
		else
		{
			m[table[i]]=0x80;
			M[15]=i*8;
			break;
		}
	}
}
/*
ft(B,C,D) = (B AND C) or ((NOT B) AND D)			( 0 <= t <= 19)

ft(B,C,D) = B XOR C XOR D							(20 <= t <= 39)

ft(B,C,D) = (B AND C) or (B AND D) or (C AND D)		(40 <= t <= 59)

ft(B,C,D) = B XOR C XOR D							(60 <= t <= 79).

*/

//#define rol(a,n)	((a<<n)|(a>>(32-n)))
//#define rol(x,n) ( ((x) << (n)) | ((x) >> (32-(n))) )
#define f1(b,c,d) (b&c)|((~b)&d)
#define f2(b,c,d) b^c^d
#define f3(b,c,d) (b&c)|(b&d)|(c&d)
#define f4(b,c,d) b^c^d


unsigned int rol(unsigned int x,unsigned int n)
{
	//这个右移原来出错了，注意！！
	//现在好使
	unsigned int y=0;
	unsigned int z=0;
	z=x<<n;
	y=(unsigned int)x>>(32-n);
	x=z|y;
	return x;
}
main()
{
	fstream file;
	file.open("out.txt",ios::out);
	file<<"by jochee\n\r";
	char tmpp[10];
	unsigned int M[16]={0};
	const unsigned int K[4]={	0x5a827999,
								0x6ed9eba1,
								0x8f1bbcdc,
								0xca62c1d6};

	unsigned int H[5]={	0x67452301,
						0xefcdab89,
						0x98badcfe,
						0x10325476,
						0xc3d2e1f0};
	unsigned int		A =	0x67452301,//a,b,c,d,e
						B =	0xefcdab89,
						C =	0x98badcfe,
						D =	0x10325476,
						E =	0xc3d2e1f0;

	unsigned int W[80];
	unsigned int tmp=0;
	unsigned int i;
	unsigned char ttt[100]="abc";
//	scanf("%s",ttt);
	convert(ttt,M);
	
	for(i=0;i<16;i++)
	{
		W[i]=M[i];
	}

	for(i=16;i<80;i++)
	{
		// Wt = S1(Wt-3 XOR Wt-8 XOR Wt- 14 XOR Wt-16).
		int x=0;
		x=W[i-3]^W[i-8]^W[i-14]^W[i-16];
		//x16=x13^x8^x2^x0
		W[i]=rol((x),1);
		

	}

	printf("\n");
	for(i=0;i<20;i++)
	{
	itoa(A,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(B,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(C,tmpp,16);						
		file<<tmpp;								
	file<<"\t";									
	itoa(D,tmpp,16);							
		file<<tmpp;								
	file<<"\t";									
	itoa(E,tmpp,16);						
	file<<tmpp;	
		file<<"\t";	
	itoa(W[i],tmpp,16);						
	file<<tmpp;	
	file<<endl;								
		//TEMP = S5(A) + ft(B,C,D) + E + Wt + Kt;
		tmp=rol(A,5);
		printf("%x\n",f1(B,C,D));//0x98bc...correct
		tmp+=(f1(B,C,D));
		tmp+=E;
		printf("%x\n",W[i]);//0x98bc...correct
		tmp+=W[i];
		tmp+=K[0];
		printf("%x\n",W[i]);//0x98bc...correct
		printf("%x\n\n",K[0]);//0x98bc...correct

		//E = D; 
		//D = C; 
		//C = S30(B); 
		//B = A; 
		//A = TEMP;
		E = D; 
		D = C; 
		C = rol(B,30); 
		B = A; 
		A = tmp;	

		

	}
	file<<endl;	
	for(i=20;i<40;i++)
	{
		
		itoa(A,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(B,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(C,tmpp,16);						
		file<<tmpp;								
	file<<"\t";									
	itoa(D,tmpp,16);							
		file<<tmpp;								
	file<<"\t";									
	itoa(E,tmpp,16);						
	file<<tmpp;		
	file<<"\t";	
	itoa(W[i],tmpp,16);						
	file<<tmpp;	
	file<<endl;						
		
		//TEMP = S5(A) + ft(B,C,D) + E + Wt + Kt;
		tmp=rol(A,5)+(f2(B,C,D))+E+W[i]+K[1];
		//E = D; 
		//D = C; 
		//C = S30(B); 
		//B = A; 
		//A = TEMP;
		E = D; 
		D = C; 
		C = rol(B,30); 
		B = A; 
		A = tmp;	
		
	}
	file<<endl;	
	for(i=40;i<60;i++)
	{
		
	itoa(A,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(B,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(C,tmpp,16);						
		file<<tmpp;								
	file<<"\t";									
	itoa(D,tmpp,16);							
		file<<tmpp;								
	file<<"\t";									
	itoa(E,tmpp,16);						
	file<<tmpp;	
	file<<"\t";	
	itoa(W[i],tmpp,16);						
	file<<tmpp;	
	file<<endl;						
		//TEMP = S5(A) + ft(B,C,D) + E + Wt + Kt;
		tmp=rol(A,5)+(f3(B,C,D))+E+W[i]+K[2];
		//E = D; 
		//D = C; 
		//C = S30(B); 
		//B = A; 
		//A = TEMP;
		E = D; 
		D = C; 
		C = rol(B,30); 
		B = A; 
		A = tmp;

	}
	file<<endl;	
	for(i=60;i<80;i++)
	{
	
		itoa(A,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(B,tmpp,16);						
	file<<tmpp;								
	file<<"\t";								
	itoa(C,tmpp,16);						
		file<<tmpp;								
	file<<"\t";									
	itoa(D,tmpp,16);							
		file<<tmpp;								
	file<<"\t";									
	itoa(E,tmpp,16);						
	file<<tmpp;	
	file<<"\t";	
	itoa(W[i],tmpp,16);						
	file<<tmpp;	
	file<<endl;						
		//TEMP = S5(A) + ft(B,C,D) + E + Wt + Kt;
		tmp=rol(A,5)+(f4(B,C,D))+E+W[i]+K[3];
		//E = D; 
		//D = C; 
		//C = S30(B); 
		//B = A; 
		//A = TEMP;
		E = D; 
		D = C; 
		C = rol(B,30); 
		B = A; 
		A = tmp;	
	
	}

	H[0]=H[0]+A;
	H[1]=H[1]+B;
	H[2]=H[2]+C;
	H[3]=H[3]+D;
	H[4]=H[4]+E;
	file.close();
printf("%8x\n%8x\n%8x\n%8x\n%8x\n",H[0],H[1],H[2],H[3],H[4]);

}