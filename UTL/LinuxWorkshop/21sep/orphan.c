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
            printf("Child running (parent PID=%ld)\n", (long) ppid);
            sleep(1);
        }
        printf("Child is orphaned (parent PID=%ld)\n", (long) ppid);
        _exit(EXIT_SUCCESS);

    default:            /* Parent */
        printf("Parent (PID=%ld) sleeping\n", (long) getpid());
        sleep(3);                           /* Give child a chance to start */
        printf("Parent exiting\n");
        exit(EXIT_SUCCESS);
    }
}
