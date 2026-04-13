
#include <stdio.h>


int regular(void){
   
    int y = 1;
    printf("%d",y);
    y++;
    
}

int next_value(void){

    static int x = 1;
    printf("%d",x);
    x++;


}


int main(void){


    printf("Without static: \n");

    regular();
    regular();
    regular();
    regular();



    printf("\nWith static: \n");

    next_value();
    next_value();
    next_value();
    next_value();

}