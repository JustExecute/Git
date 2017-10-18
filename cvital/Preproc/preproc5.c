#include<stdio.h>

void function1();
void function2();

#pragma startup function1
#pragma exit function2

main()
{
printf("main function \n");
}

void function1()
{
	printf("function1\n");
}

void function2()
{
	printf("function2\n");
}
