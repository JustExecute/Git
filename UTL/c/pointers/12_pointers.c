#include<stdio.h>
void fun(int* ,int);
int main()
	{
	int a[5]={5,10,15,20,25};
	int size;
	int sum=0;	
	int i=0;

	printf("sizeof(a)    : %ld\n",sizeof(a));
	printf("sizeof(a[0]) : %ld\n",sizeof(a[0]));

	size = sizeof(a)/sizeof(a[0]);

	fun(a,size);

	for(i=0;i<size;i++)
	printf("2xa[%d] = %d\n",i,a[i]);	

	return 0;
	}

void fun(int* x,int size)
	{
	int d;

	for(d=0;d<size;d++)
	x[d]=2*x[d];

	}
	



