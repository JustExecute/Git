#include<stdio.h>

int main()
	{
	int i=10;
	int *p;
	p=&i;

	printf("The value of i before dereferencing is : %d\n",i);
	*p=200; //Dereferencing 
	printf("The value of i After dereferencing is : %d\n",i);

	return 0;
	}
