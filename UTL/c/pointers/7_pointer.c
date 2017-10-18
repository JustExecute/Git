#include<stdio.h>

int main()
	{
	int i=10;
	int *p=&i;
	int **q=&p;
	int ***r=&q;

	printf("i: %d\n",i);
	printf("*p : %d\n",*p);
	printf("**q : %d\n",**q);
	printf("***r : %d\n",***r);

	
	printf("*q : %p\n",*q);
	printf("**q : %d\n",**q);

	printf("*r : %p\n",*r);
	printf("**r : %p\n",**r);
	printf("***r : %d\n",***r);

	return 0;
	}
