#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
#include<signal.h>
#include<sys/types.h>


void  Handler()
	{
	printf("Hello Papa\n");
	}

int main(int argc, char *argv[])
{

	int ret;
    
   	signal(SIGINT, Handler) ;
	ret=fork();

switch(ret)
	{
	case 0:
   	//signal(SIGINT, Handler) ;

	sleep(10);
	break;

	default:
//	sleep(1);
	kill(ret, SIGINT);
	wait(NULL);
	}
//	printf("Hello\n");

}

