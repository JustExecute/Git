#include<stdio.h>
#include <unistd.h>
#include <fcntl.h> 

#include <sys/types.h>
#include <sys/wait.h>


int main()
	{	
	int pipeFd[2];
	char rBuf[25];

	if(pipe(pipeFd)==-1)
	{
	printf("Pipe failed\n");
	return -1;
	}



switch(fork())
	{
	
	case -1 :
	return -1;

	case 0 :
	//read(pipeFd[0],rBuf,11);
	//printf(" child receive : %s\n ",rBuf);
        write(pipeFd[1],"Hello Boss\n",11);
	break;

	default :	
        write(pipeFd[1],"Hey Buddy\n",11);
	wait(NULL); //comment here and check output 
	read(pipeFd[0],rBuf,11);
	printf(" parent received : %s\n ",rBuf);
	}
	 return 0;
}
