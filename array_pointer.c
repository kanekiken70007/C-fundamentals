#include <stdio.h>

int main(void){

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    int *ptr = arr;
    
    for (int i = 0; i < 10 ; i++) {
        printf("%d\n",*(ptr+i));

    }


    for (int i = 9; i >= 0 ; i--) {
    
        printf("%d\n",*(ptr+i));
    }

    //ptr can be reassigned to anything we want
    *ptr = 54;
    int x = 10;
    ptr = &x;
    
    //arr cannot be reassigned at all
    // arr = &x; !error






}