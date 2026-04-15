#include <stdio.h>

int main(void)
{
    // going to crash the stack.
    
    int arr[10000000]; 
    printf("Still alive\n");

    //most likely going to crash because we put those in the stack
    //if we malloc() this array into the heap, we can hold it easily using about 40MB or RAM... nothing
    
    return 0;
}