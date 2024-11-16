#include <stdio.h>

//    1
//   2 3
//  4 5 6
// 7 8 9 10

int main()
{
    int n = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}