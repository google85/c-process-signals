#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>

int main(int argc, char* argv[]) {
    //Get program argument
    pid_t pid = atoi(argv[1]);

    //Send signal to the specified process
    kill(pid, SIGUSR1);

    //Print message and exit
    printf("Sent signal to process %d\n", pid);

    return 0;
}