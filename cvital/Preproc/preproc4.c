#include<stdio.h>

#define NUMBER 23
main()
{

#if (NUMBER == 23) 
{
printf("number:%d\n",NUMBER);
}
#else
printf("number is not equal\n");
#endif
}
