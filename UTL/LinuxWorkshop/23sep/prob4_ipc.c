
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

	fd= dup(1);
        write(fd,"Hi\n",3 );
	
}
