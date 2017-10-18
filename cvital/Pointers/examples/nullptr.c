#include<stdio.h>

/* NULL Pointer exception , how to print main() fucntion addredd */

int main()
{
int *ptr= (int *) 0x0000;
int a =10;
//printf ("ptr:%p ptr:%d\n",ptr,*ptr);
printf ("&main:%p, ptr:%p, &ptr:%p sizeof(*ptr):%d sizeof(ptr):%d a:%d &a:%p \n",&main,ptr,&ptr, sizeof(*ptr), sizeof(ptr),a,&a);
//getchar();
return 0;
}
