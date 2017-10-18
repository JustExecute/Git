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
	outputFd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while((readBytes=read(inputFd,buf,BUFSIZE)) > 0)
	{
		write(outputFd, buf, readBytes)!= readBytes;
	}


	close(inputFd);
	close(outputFd);
	return 0;
}


