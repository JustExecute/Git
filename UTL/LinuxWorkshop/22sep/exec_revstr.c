#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
int
main(int argc, char *argv[])
{
int ret;
printf("Hi.........\n");

ret=fork();
switch(ret)
	{	
	case -1: 
	return -1;

	case 0:
    	execl("./a.out", "STRING_REVERSE",(char *) NULL);

	default :
	wait(NULL);
	printf("Bye...........\n");
	}

printf("End Message\n");
}
