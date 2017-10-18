//Its like creating a Virus - we cannot print ouput 
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>




int fd;

int main()
{
	close(1);
	
        fd = open("log.txt", O_WRONLY | O_CREAT, 0644);
	

	printf("Open FD is %d",fd);

}
