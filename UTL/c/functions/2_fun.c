#include<stdio.h>

int fun();

int main()
	{

	int c;
	c=fun();
	
	printf("The Addition of A + B = %d\n",c);
	
	return 0;
	}


int fun()
	{
	int a,b;

	printf("Enter the Value of A \n");
	scanf("%d",&a);

	printf("Enter the Value of B \n");
	scanf("%d",&b);

	return (a+b);

	}
