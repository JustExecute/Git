#include<stdio.h>
#include <signal.h>
#include<unistd.h>


static void sigHandler(int sig)
{
    printf("Ouch!\n");                  /* UNSAFE (see Section 21.1.2) */
}


int
main(int argc, char *argv[])
{
    int j;

    /* Establish handler for SIGINT */
    if (signal(SIGINT, SIG_ERR) == SIG_ERR)
	
//  if (signal(SIGINT, SIG_IGN) == SIG_ERR)
//  if (signal(SIGINT, sigHangler) == SIG_ERR)

	return -1;

    /* Loop continuously waiting for signals to be delivered */
    for (j = 0; ; j++) {
        printf("%d\n", j);
        sleep(3);                       /* Loop slowly... */
    }
}
