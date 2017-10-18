#include<stdio.h>
#include<stdlib.h>

int main()
	{
	printf("Printing ps ax & using system()\n");
	system("ps ax &");
	printf("Done Command Executed\n");
	exit(0);
	return 0;
	}
