#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

void *thread_function(void *arg);

char message[] = "Hello World";

int main() {
    int res;
    pthread_t a_thread;
    void *thread_result;
    
    printf("1-> Initially Message is '%s'\n",message);
///////////////////////////////////////////////////////////////////////////////
    res = pthread_create(&a_thread, NULL, thread_function, (void *)message);if (res != 0){ perror("Thread creation failed");exit(EXIT_FAILURE);}
    printf("2-> pthread_creat: Waiting for thread to finish...\n");
    res = pthread_join(a_thread, &thread_result);if (res != 0) {perror("Thread join failed");exit(EXIT_FAILURE);}
///////////////////////////////////////////////////////////////////////////////
    printf("4-> pthread_join: Thread joined, it returned %s\n", (char *)thread_result);
    printf("5-> Finally the Message is now changed to '%s'\n", message);
    exit(EXIT_SUCCESS);
}
/////////////////////////////////////////////////////////////////////////////
void *thread_function(void *arg) {
    printf("3-> thread_function: thread_function is running. Argument was %s\n", (char *)arg);
    sleep(1);
    strcpy(message, "Bye!");
    pthread_exit("pthread_exit : Thank you for the CPU time");
}
