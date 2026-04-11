#include <stdio.h>
#include <stdlib.h>

int main(int len, char *arg[]){




    //returns if arguments are less or more than 4
    if (len != 4) return 1; 

printf("operation successful\n");
    int a = atoi(arg[1]);
    int b = atoi(arg[3]);
    *arg[3] = atoi(arg[2]);

    if (**(arg+2) =='+') {

        return a+b;

    } else if (**(arg+2) =='-') {

        return a-b;
    
    } else if (**(arg+2) =='*') {

        return a*b;

    } else if (**(arg+2)=='/' && b!=0){
        return (float)a/b;

    }






}