#include<stdio.h>

main()
{
int x;
int *ptr = &x;
*ptr = 0x01;
if ( *(char *) ptr)
printf("LE\n");
else
printf("BE\n");


}
