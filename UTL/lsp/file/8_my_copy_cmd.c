#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<errno.h>
#define BUFSIZE 25

int main(int argc, char *argv[])
{

	int file1=0,file2=0;
	char buffer[BUFSIZE];
	int readBytes;

	if(argc!=3 || strcmp(argv[1] , "--help")==0)
	{
		printf("Enter the 3 Arguments : $./a.out file1.c file2.c\n ");
	}

	else
	{
		file1=open(argv[1],O_RDONLY);
		if(file1==-1)
		{
			printf("File1 read Failed,Errno:%d\n",errno);
			perror("");
		}


		file2=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0664);
		if(file2==-1)
		{
			printf("File2 Open Failed,errno:%d\n",errno);
			perror("");
		}

		while((readBytes=read(file1,buffer,BUFSIZE))>0)
		{
			if(write(file2,buffer,readBytes)!=readBytes)
			printf("Read Bytes is not equals to write Bytes\n");
		}

		close(file1);
		close(file2);

	}

return 0;
}
