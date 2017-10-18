#include<stdio.h>

/*Assume that 0x7600 is an address. How will you store 50 in that address? */
/* This porgram running time face segmentation fault error */

main ()
{
	int *x = (int *) 0x7600;
	getchar();
	*x = 50;

//	printf ("p:%p *p:%d\n",p,*p);
}
