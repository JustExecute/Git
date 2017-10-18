#include<stdio.h>

void fun(int*);

int main()
	{
	int a=10;
	fun(&a);
	printf(" a = %d\n",a);
	return 0;
	}

	void fun(int *x)
	{
		*x = *x + 50;
	}

