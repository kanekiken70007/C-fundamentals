#include <stdio.h>

int main(void)
{
    printf("Give a word: ");
    char word[20];
    scanf("%s", word);

    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s\n", word);

    return 0;
}