#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    //print the process id
    printf("Process ID: %d\n", getpid());

    //print message in an infinite loop
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