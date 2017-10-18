#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<errno.h>

int main()
	{
	int fd,ret;
	char buffer[20];
	
	fd=open("FileName",O_RDONLY);
	printf("fd:%d\n",fd);
	
	if(fd<0)
	{
	perror("");
	printf("errno = %d\n",errno);
	exit(0);
	}	


	while(read(fd,&buffer,20)!=0)
	{
	ret=write(1,&buffer,20);
	printf("buffer data : %s\n",buffer);
	}
	close(fd);
	return 0;
	}
