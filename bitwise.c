#include <stdio.h>

#define FLAG_READ   (1 << 0) 
#define FLAG_WRITE  (1 << 1)
#define FLAG_EXEC   (1 << 2)
#define FLAG_HIDDEN (1 << 3)

void print_binary(unsigned char x)
{
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}

void show_flags(unsigned char x)
{
    printf("Binary: ");
    print_binary(x);
    
    printf("READ: %s\n", (x & FLAG_READ) ? "ON" : "OFF");
    printf("WRITE: %s\n", (x & FLAG_WRITE) ? "ON" : "OFF");
    printf("EXEC: %s\n", (x & FLAG_EXEC) ? "ON" : "OFF");
    printf("HIDDEN: %s\n", (x & FLAG_HIDDEN) ? "ON" : "OFF");
    printf("\n");
}

int main(void)
{
    unsigned char flags = 0;
    int choice;
    
    while (1) {
        printf("1. Toggle READ\n");
        printf("2. Toggle WRITE\n");
        printf("3. Toggle EXEC\n");
        printf("4. Toggle HIDDEN\n");
        printf("5. Show flags\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            flags = flags ^ FLAG_READ;
        } else if (choice == 2) {
            flags = flags ^ FLAG_WRITE;
        } else if (choice == 3) {
            flags = flags ^ FLAG_EXEC;
        } else if (choice == 4) {
            flags = flags ^ FLAG_HIDDEN;
        } else if (choice == 5) {
            show_flags(flags);
        } else if (choice == 6) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }
    
    return 0;
}