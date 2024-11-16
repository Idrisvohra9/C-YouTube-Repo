#include <stdio.h>

int main()
{
    char alpha;
    int n, choice;
    printf("Enter 1. for character to ASCII\n2. for ASCII to character: \n");
    scanf("%d", &choice);
    getchar();

    switch(choice) {
        case 1:
            printf("Enter the character: ");
            scanf("%c", &alpha);
            printf("ASCII value of %c is: %d\n", alpha, alpha);
            break;
        case 2:
            printf("Enter the ASCII value: ");
            scanf("%d", &n);
            printf("Character of ASCII value %d is: %c\n", n, n);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}