#include<stdio.h>
#include<unistd.h>

int main()
{
 
int ret;
ret= fork();
	switch(ret)
	{
	case -1:
		printf("fork() failed\n"); break;
	case 0:
		printf("I am the Child Process,pid=%u, ppid=%u\n",getpid(),getppid());
		break;
	default:
		printf("I am the Parent Process,pid=%u, ppid%u\n",getpid(),getppid());
	}
}
