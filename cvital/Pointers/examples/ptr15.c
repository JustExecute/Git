#include<stdio.h>

main ()
{
	int a=50, b=50;
	int *p = &b;
	p++;
	*p = 40;
	printf ("%d %d\n",a,b);
}
