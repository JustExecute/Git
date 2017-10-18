#include<stdio.h>

//#define NUMBER 23
main()
{
int x;
#if 1
	x=10;
	#if (NUMBER  == 20)
	printf("number:%d is defined\n",NUMBER);
	#else
	printf("number is not defined\n");
	#endif
#endif
}
