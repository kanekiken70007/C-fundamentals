#include <stdio.h>
#include <errno.h>



int main(void)
{
    

    char search[30];
    printf("Give the name of the file you want to search for\n");
    scanf("%29s",search);





    printf("Error till line %d in the code:",__LINE__);
    printf("%d\n",errno);
    // output will be 0, no errors to be shown

    
    FILE *fp = fopen(search,"r");

    if (fp!=NULL) {

        printf("Success!\nFile exists in %s\n",__FILE__);

    } else {
    

    printf("Error:%d\n",errno);

    //file doesn't exist, so errno gets a missing file value
    //we can call perror to translate that value into english

    perror("Custom message");
    

    }

    return 0;
}