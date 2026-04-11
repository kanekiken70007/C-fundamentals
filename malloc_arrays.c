#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int s);
float average(int *arr, int s);
int max(int *arr, int s);


int main(void){


    //asks for an amount of numbers for an array
    printf("How many numbers?\n");
    int n;

    scanf("%d",&n);

    //allocates the exact memory needed for this array
    int *arr = malloc(n*sizeof(int));

    //before doing anything we have to check whether malloc proceeded
    if(arr==NULL){
        printf("Operation failed, not enough memory to continue\n");
        return 1;
    }

    //uses array like a normal array
    printf("enter %d numbers\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",arr+i);
    }

    int s = n;

    printf("Sum: %d\n",sum(arr,s));
    printf("Average: %f\n",average(arr,s));
    printf("Maximum: %d\n",max(arr,s));

    //don't forget to free the memory borrowed
    free(arr);
}




//function for finding the sum
int sum(int *arr,int m){
    int s = 0;
    for(int i = 0; i<m; i++){
        s = s + arr[i];
    }

return s;
}


//function for finding the average
float average(int *arr,int m){

    int s = sum(arr,m);

return (float)s/m;
}


//function for finding max
int max(int *arr,int s){

    int m = arr[0];
    for(int i = 1; i < s; i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
return m;
}