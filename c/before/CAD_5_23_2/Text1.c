#define M 1.0e21
#define NI 1.5e10
#define THT 38.6
#define Q 1.6e-19
#define EBXL 1.064e-12
#define N 50
#define H 0.000001
#include "math.h"
#include "stdio.h"

void zhuigan(double *out,double *in1,double *in2,int n)
{
 double r[100];
 double m[100];
 double beta[100];
 int i;
 beta[1]=in1[1];
 r[1]=in2[1];
 for(i=1;i<=n-1;i++)
 {
  m[i]=1/beta[i];
  beta[i+1]=in1[i+1]-m[i];
  r[i+1]=in2[i+1]-m[i]*r[i];
 }
 out[n]=r[n]/beta[n];
 for(i=n-1;i>=1;i--)
 {
  out[i]=(r[i]-out[i+1])/beta[i];
 }
}
void do_fine0(double *in,int n)
{
 int i;
 in[0]=0;
 for(i=1;i<=n;i++)
 {
  in[i]=log((M*H*i/(2*NI))+sqrt((M*H*i/(2*NI))*(M*H*i/(2*NI))+1))/THT;
 }
}
void do_b(double *out,double *in,int n)
{
 int i;
 for(i=1;i<=n-1;i++)
 {
  out[i]=-2-(Q/EBXL)*THT*NI*H*H*(exp(-THT*in[i])+exp(THT*in[i]));
 }
}

void do_j(double *out,double *in,int n)
{
 int i;
 for(i=1;i<=n-1;i++)
 {
  out[i]=-(Q/EBXL)*H*H*(M*i*H+NI*exp(-THT*in[i])-NI*exp(THT*in[i]))-in[i-1]+2*in[i]-in[i+1];
 }
}

void exchange(double *out,double *in,int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
  out[i]=in[i]+out[i];
 }
}
int check(double *in,int n)
{
 int i;
 for(i=0;i<=n;i++)
 {
  if(fabs(in[i])>1.0e-4)return 0;
 
 }
  return 1;
}

void main()
{
 double fine0[N+2];
 double fine[N+2]={0};
 double b[N+1];
 double j[N+1];
 int m;
 int flag=0;
 do_fine0(fine0,N);
 while(!flag)
 {
 do_b(b,fine0,N);
 do_j(j,fine0,N);
 zhuigan(fine,b,j,N-1);
 flag=check(fine,N);
 exchange(fine0,fine,N-1);
 }
 for(m=0;m<=25;m++)
 {
	 printf("%f\t%f\t%f\t%f\n",m*0.001,fine0[m],(m+25)*0.001,fine0[m+25]);
 }
}
