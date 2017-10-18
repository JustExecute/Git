#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{

int ret1,ret2;

ret1=fork();
if(ret1=0)
	{
	printf("CHILD-1\n");
        execl("/bin/ls", "ls", "-l", (char *) NULL);
	}
	wait(NULL);

ret2=fork();
if(ret2=0)
	{
	printf("CHILD-2");
	execl("/usr/bin/printenv", "printenv", "USER", (char *) NULL);
	}

	wait(NULL);
        printf("Bye...........\n");
        

}

