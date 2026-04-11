#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    //asks user how many characters
    int x;
    printf("How many characters should the word be?\n");
    scanf( " %d",&x);

    //allocates an array with that size for a string
    char *word = malloc((x+1) *sizeof(char));

    if(word==NULL) return 1;
    
    //asks user to type a word
    printf("Give a word:\n");
    scanf("%s",word);


    //prints data
    printf("Word was: %s\n",word);
    int l = strlen(word);
    printf("Length of the word was: %d\n",l);

    //prints word reversed

    printf("Word reversed: ");
    for (int i = l-1; i >=0; i--){
        printf("%c",*(word+i));

    }
    printf("\n");

    free(word);



}