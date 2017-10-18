#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int getvalue(char*);
int main(int argc,char *argv[])
{
	int num=0;
	int inputFd=0;
	char buf[25];
	int bytesRead;	

 	int getvalue(char* p)
	{
 	p++;
	return (atoi(p));
	}


    if (argc != 3 || strcmp(argv[1], "--help") == 0)
       {
	printf("%s filename rn\n", argv[0]);
	return -1;
	}

	num=getvalue(argv[2]);
	inputFd = open(argv[1], O_RDONLY);
	    	if(inputFd == -1)
		{
        	printf("File open  failed\n");
		return -1;
		}

	bytesRead = read(inputFd,buf,num);
	buf[bytesRead+1]='\0';
	printf("read %d bytes: %s\n", num, buf);
	close(inputFd);
	return 0;
}


