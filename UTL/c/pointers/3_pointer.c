#include<stdio.h>
int main()
	{
	int i=10;
	int *p;
	p=&i;

	printf(" i = %d\n",i);
	printf(" *p  = %d\n",*p);
	printf("p=&i -> p = %p\n",p);
	
	int b=500;
	*p=b; 
	printf(" b = %d\n",b);
	printf(" *p  = %d\n",*p);
	printf("*p=b -> p = %p\n",p);

	return 0;
	}
