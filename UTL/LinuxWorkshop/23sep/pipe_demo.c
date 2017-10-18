#include<stdio.h>
#include <unistd.h>
#include <fcntl.h> 

int main()
	{	
	int pipeFd[2];
	int rBuf[25];

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
	read(pipeFd[0],rBuf,11);
	printf("receive : %s\n ",rBuf);
	break;

	default :	
        write(pipeFd[1],"Hey Buddy\n",11);
	wait(NULL);
	}
	 return 0;
}
