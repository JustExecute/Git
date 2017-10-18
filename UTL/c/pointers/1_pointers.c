#include<stdio.h>


int main()
	{
	int a=10;
	int *p;

	p = &a;

	printf("*p= %d\n",*p);
	printf("p= %p\n",p);
	printf("a= %d\n",a);
	printf("&a= %p\n",&a);
	return 0;
	}

