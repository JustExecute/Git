#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = (int *)malloc(10000000000);

	if (p == NULL)
	{
	printf("malloc FAILS\n");
	return -1;	
	}
	*p=2;
	printf("*p:%d p:%p\n",*p,p);
	
//	p++; // free(): invalid pointer:
	free(p);
	return 0;
}
