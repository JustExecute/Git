#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
int
main(int argc, char *argv[])
{

    printf("Hi\n");
    execl("/usr/bin/printenv", "printenv", "USER", "SHELL", (char *) NULL);
    printf("Bye\n");
}
