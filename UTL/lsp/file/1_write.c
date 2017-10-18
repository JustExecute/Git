//Programm to "write" the pre defined buffer data on the Output Screen 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>

int main()
	{
	int ret;
	ret = write(1,"Conquer your mind and body \n",50);

	if(ret < 0)
	{
		printf("ret = %d\n",ret);
		printf("Write failed\n");
		printf("errno = %d\n",errno);
	}
	else if(ret > 0)
	{
		printf("ret = %d\n",ret);	
		printf("Write Sucessfully Executed\n");
		printf("errno = %d\n",errno);
	}
	return 0;
	}
