#include<stdio.h>
void fun(int,int);

int main()
	{
	int a,b;
	
	printf("Enter the value of A:\t");
	scanf("%d",&a);


	printf("Enter the value of B:\t");
	scanf("%d",&b);

	fun(a,b);

	return 0;
	}


void fun(int x, int y)
	{
	int c;
	c = x + y;
	printf(" A + B = %d\n",c); 

	}

