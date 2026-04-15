#include <signal.h>
#include <stdio.h>
#include <unistd.h>



void pressed(int sig){
    printf("\nYou tried to kill me using Ctrl+C... won't work\n");
    printf("Signal number: %d\n", sig);
    sleep(2);
}


int main(void)
{
    signal(SIGINT, pressed);

    while (1) {
        sleep(1);
        printf("I'm still running\n\n");
    }

    return 0;
}