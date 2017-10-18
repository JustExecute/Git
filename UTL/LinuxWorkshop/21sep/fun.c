#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int
main(int argc, char *argv[])
{
    pid_t ppid;

    switch (fork()) {
    case -1:
        return -1;

    case 0:             /* Child */
        while ((ppid = getppid()) != 27353) {   /* Loop until orphaned */
	    
	    printf("hi\n");
            sleep(3);
	    printf("I am Not Well\n");
           
        }
        _exit(EXIT_SUCCESS);

    default:            /* Parent */
       
	printf("Hi\n");
        sleep(2);
	printf("How are you\n");
//	sleep(1);
     
        exit(EXIT_SUCCESS);
    }
}
