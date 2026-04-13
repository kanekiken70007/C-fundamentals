
#include <stdio.h>

int main(void){

enum operation {add, subtract, divide, multiply};


int a, b;


printf("Give two numbers: \n");
scanf("%d\n %d",&a,&b);

int o;
int s;
float f;

printf("Give an operation (0=add,1=sub,2=div,3=mul): \n");
scanf("%d",&o);

switch (o) {

    case add:
    s = a + b;
    break;

    case subtract:
    s= a - b;
    break;

    case multiply:
    s = a * b;
    break;

    case divide:
    f = (float)a/b;
    break;

}

if (o!=divide){
printf("Your result: %d",s);
} else {
printf("Your result: %f",f);
}

}