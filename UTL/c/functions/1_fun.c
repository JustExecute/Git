#include<stdio.h>

void fun();

int main()
	{
	fun();
	return 0;
	}

void fun()
	{
	int a,b;
	printf("Enter the Value of A: \t");
	scanf("%d",&a);

	printf("Enter the Value of B: \t");
	scanf("%d",&b);

	printf("Addition of A + B = %d\n", a+b);

	}


