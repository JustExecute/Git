#include<stdio.h>


//#define NUMBER 23
main()
{

#ifndef NUMBER 
{
printf("number is not defined\n");
#define NUMBER 200
printf("number:%d\n",NUMBER);
}
#else
printf("number is defined\n");
#endif
}
