
#include <stdio.h>


int main(void){

    int x = 10;
    int y = 20;

    const int *p = &x;

    // *p = 10 error

    p = &y; //no errors here, modifying only the pointer itself


    
    
    int * const q = &x;

    // q = &y; error

    *q = 30; //no errors, modifying the value, not the pointer that is a const


    printf("%d",x);


}