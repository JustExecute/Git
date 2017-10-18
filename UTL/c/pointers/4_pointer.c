#include<stdio.h>

int main()
	{
	int i=10;
	int *p;
	p=&i;

	printf("i : %d\n",i);
	printf("*p : %d\n",*p);
	printf("p : %p\n",p);
	printf("p+1 : %p\n",(p+1));
	printf("*(p+1) : %d\n",*(p+1));
	
	return 0;
	}
