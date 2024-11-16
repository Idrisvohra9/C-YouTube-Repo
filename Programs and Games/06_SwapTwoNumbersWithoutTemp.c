#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20;
    printf("Before Swapping: num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2; // 30
    num2 = num1 - num2; // 10
    num1 = num1 - num2; // 20
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}