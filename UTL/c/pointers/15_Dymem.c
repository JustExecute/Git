//Issue with the recursion technique 

#include<stdio.h>
int square(int);
int squareofsum(int , int);

int main()
	{
	int a=2,b=2;
	int result=0;

	result=squareofsum(a,b);	
	printf("Result: %d\n",result);
	return 0;
	}

int square(int x)
	{
	int q;
	q=x*x;
	printf("(x+y)*2 : %d\n",q);
	return q;	
	}

int squareofsum(int p, int q)
	{
	int r,z;
	z=p+q;
	r= square(z);
	printf("x+y : %d\n",r);
	return r;
	}
