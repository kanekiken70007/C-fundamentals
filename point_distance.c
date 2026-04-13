

#include <math.h>
#include <stdio.h>

struct point {
    double x;
    double y;
};




double distance(struct point p1, struct point p2){

return sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
}


int main(void){


    struct point p1 = {0,0};

    struct point p2;

    printf("Give the point's X axis coordinate\n");
    scanf("%lf",&p2.x);
    printf("Give the point's Y axis coordinate\n");
    scanf("%lf",&p2.y);
    
    printf("Distance between origin and your point is %f\n",distance(p1,p2));


}