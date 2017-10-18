#include<stdio.h>

int main()
	{
	int i=1025;
	int *p1=&i;

	printf("i : %d\n",i);
	printf("*p1 : %d\n",*p1);
	printf("p1 : %p\n",p1);

	char *p2;
	p2=(char*)p1;//Typecasting

	printf("i : %d\n",i);
	printf("*p2 : %d\n",*p2);	
	printf("p2 : %p\n",p2);
	return 0;
	}
