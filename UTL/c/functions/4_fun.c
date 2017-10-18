#include<stdio.h>
int fun(int,int);

int main()
	{
	
	int a,b,c;

	printf("Enter the Value of A\t");
	scanf("%d",&a);

	printf("Enter the Value of B\t");
	scanf("%d",&b);
	
	c=fun(a,b);

	printf("A + B = %d\n",c);

	return 0;
	}

int fun(int a, int b)
	{
	
	return (a+b);

	}
