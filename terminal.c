#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>   

int main() {

    while (1){
        printf("Shell$");
        char command[80];
        fgets(command,sizeof(command), stdin);

        int pid =fork();

         int pos =strcspn(command,"\n");  
        command[pos] = 0;

        if (pid==0){
            
            execlp(command,command, NULL);
            printf("command not found\n");
            exit(0);
        } else {
         wait(NULL);
        }
        



    }


    return 0;
}
