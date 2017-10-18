//Programm to "read" the input from the USER and printing on the output screen 


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>

int main()
	{
	
	char buffer[100];
	int ret;

	printf("Enter the Data into the biffer[100]\n");

	ret=read(0,&buffer,100);

	if(ret<0)
	{
		printf("Read Systemcall Failed, it returns = %d,errno = %d\n",ret,errno);
		return -1;
	}
	else
	{
		printf("Read System Call Executed,the buffer data is : %s\n",buffer);
	}
	
	return 0;
	}
