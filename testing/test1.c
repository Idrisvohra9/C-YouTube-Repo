#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int chooseRandomNumber(int n)
{
    srand(time(0));
    return rand() % n + 1;
}
int main()
{
    printf("%d", chooseRandomNumber(100));
}