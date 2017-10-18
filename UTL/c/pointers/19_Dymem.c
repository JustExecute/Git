#include<stdio.h>
#include<stdlib.h>
void hello();
int add(int*,int*);
	

int main()
	{
	int a=2,b=3;

	int p;
	p=add(&a,&b);

	hello();

	printf("2 + 3 = %d\n",p);
	printf("address of 'a' in main() function :%p\n",&a);
	return 0;
	}

int add(int* x,int* y)
	{
	int c;
	printf("address of 'x' in add() function :%p\n",&x);
	c= (*x) + (*y);
	return c;
	}

void hello()
	{
	printf("Hello World \n");
	
	}
