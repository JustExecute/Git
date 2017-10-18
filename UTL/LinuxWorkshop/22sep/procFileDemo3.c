
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

        fd = open("testFile333", O_WRONLY | O_CREAT, 0644);
	ret= fork();
        switch(ret)
        {
        case -1:
                printf("fork() failed\n"); 
		return -1;
        case 0:
		write(fd,"Hello\n",6);       
                break;
        default:
 		write(fd,"chalo\n",6);
	}        
	printf("Bye...\n");
        
}

