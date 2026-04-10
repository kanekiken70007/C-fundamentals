#include <stdio.h>


int sum(int a, int b, int *s){

*s = a + b;

return 0;
}

int subtract(int a, int b, int *d){
if (a>b) {
*d = a - b;

} else {
 *d = b- a;
}

return 0;
}


int multiply(int a, int b, int *m){

*m = a*b;

return 0;
}


int divide(int a, int b, float *f){

if (b != 0) {
*f = (float)a/b;
}

return 0;
}



int main(void){

    int a;
    int b;
    printf("Give a two numbers a and b\n");
    scanf("%d %d",&a,&b);

    int s;
    int d;
    int m;
    float f;

     sum(a,b,&s);
     subtract(a, b,  &d);
     multiply(a, b,  &m);
     divide(a, b,  &f);


    printf("Sum: %d\n",s);

    printf("Difference: %d\n",d);

    printf("Product: %d\n",m);

    printf("Quotent: %f\n",f);



return 0;
}