#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int main(int argc,char *argv[])
{

    if (argc != 2)
       {
	printf("Syntax: %s [language] ", argv[0]);
	return -1;
	}

	switch(atoi(argv[1]))
	{
		case 1:
		printf("Idly\n");break;
       		case 2:
        	printf("Oda\n");break;
		case 3:
        	printf("Dosa\n");break;
		default:
		printf("Give the Right Input: 1, 2 or 3\n");
	}

}


