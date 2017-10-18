#include<stdio.h>
#include<limits.h>

void main()
	{
	int a=10;
	int b;
	b=sizeof(a++);
	printf(" Value of b=size(a++); is %d\n",b);
	}
