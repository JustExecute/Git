#include <stdio.h>


main ()
{

int *ptr;
int  x =1;
char b;  
ptr = &x;
b = *(char *) ptr;

if ( b != 0 )
printf ("Little Endian\n");
else
printf ("Big Endian\n");

}
