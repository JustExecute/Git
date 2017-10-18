
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int main()
{

int ret;
int fd;
ret= fork();
        switch(ret)
        {
        case -1:
                printf("fork() failed\n"); 
		return -1;
        case 0:
		fd = open("testFile2", O_WRONLY | O_CREAT, 0644);
		write(fd,"Hello\n",6);
                close(fd); 
                break;
        default:
 		;
	}        
	printf("Bye...\n");
        
}

