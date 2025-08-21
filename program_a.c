#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void handler_sigint(int sig) {
    printf("\nPlay audio meow.mp3!\n");
}

void handle_sigusr1(int sig) {
    printf("\nReceived SIGUSR1 signal! Continuing...\n");
}

int main(void) {
    //Install the SIGINT handler [Ctrl+C]
    signal(SIGINT, handler_sigint);

    //Install the SIGUSR1 handler
    signal(SIGUSR1, handle_sigusr1);

    //Print the process id
    printf("Process ID: %d\n", getpid());

    //Print message in an infinite loop
    const char* message = "Subscribe";
    while(1) {
        printf("\n            ");
        printf("\r%s", message);
        fflush(stdout);
        sleep(1);

        for(int i=0; i < 3; i++) {
            printf(".");
            fflush(stdout);
            sleep(1);
        }
    }

    return 0;
}