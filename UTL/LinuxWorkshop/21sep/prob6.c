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

	switch(argv[1][0])
	{
		case 'e':
		case 'E':
		printf("Good Morning\n");break;
		case 'H':
       		case 'h':
        	printf("Namaskar\n");break;
       		case 'F':
		case 'f':
        	printf("Bonjour\n");break;
		default:
		printf("Give the Right Input");
	}

}


