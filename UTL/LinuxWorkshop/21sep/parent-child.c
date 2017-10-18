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
           
		printf("CHILD : -> Hi Mom\n");
		sleep(2);
		printf("CHILD : -> How are you Mom\n");
		sleep(2);
	    	_exit(EXIT_SUCCESS);

    default:            /* Parent */
		sleep(1);       	
		printf("PARENT: -> Hi beta\n");
		sleep(2);     
       		_exit(EXIT_SUCCESS);
    }
}
