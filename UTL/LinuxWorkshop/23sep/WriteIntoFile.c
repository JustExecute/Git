#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{

int fd,ret;

	fd =open("myfamily.txt", O_WRONLY | O_CREAT, 0644);
        write(fd,"I am Parent.....\n",20);
	
	ret=fork();

switch(ret)
	{
	case 0:
	write(fd,"I am Child1.....\n",20);
	exit(0);

	default :
	wait(NULL);
	ret=fork();
	}
	
switch(ret)
	{
	case 0:
	write(fd,"I am Child2, Sibling of Child1....\n",30);
	break;

	default :
	wait(NULL);
	write(fd,"We are Happy Family......\n",40);

        //close(fd);`
	}
}

