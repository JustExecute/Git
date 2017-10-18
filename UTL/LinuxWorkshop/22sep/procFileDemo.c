
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>


//int g_var=10;

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
		fd = open(testFile, O_WRONLY, O_CREAT, 0644);
		write(fd,"Hello\n"6);
                close(fd); 
                break;
        default:
                //printf("Parent Process Before Modification,g_var=%d\n",g_var);
		//g_var=123;
                //printf("Parent Process After Modification ,g_var=%d\n",g_var);

        }
}

