#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // printf("n = %d\n", n);
    return n * factorial(n - 1);
}
int main()
{
    int result = factorial(5);
    printf("Factorial of 5 is %d\n", result);// 5 * 4 * 3 * 2 * 1 = 120
    return 0;
}