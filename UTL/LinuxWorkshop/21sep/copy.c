#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

#define BUFSIZE 25

int main(int argc,char *argv[])
{

	int inputFd=0;
	int outputFd=0;
	int buf[BUFSIZE];
	int readBytes=0;

    if (argc != 3 || strcmp(argv[1], "--help") == 0)
       {
	printf("%s old-file new-file\n", argv[0]);
	return -1;
	}

	inputFd = open(argv[1], O_RDONLY);
	    	if(inputFd == -1)
		{
        	printf("opening file %s is failed\n", argv[1]);
		return -1;
		}
	 
	outputFd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if(outputFd == -1)
	{
	printf("Openning file %s is failed\n", argv[2]);
	return -1;
	
	}

	while((readBytes=read(inputFd,buf,BUFSIZE)) > 0)
	{
		if(write(outputFd, buf, readBytes)!= readBytes)
		{
		printf("writing is having the probelum");
		return -1;
		}
	}


	close(inputFd);
	close(outputFd);
	return 0;
}


