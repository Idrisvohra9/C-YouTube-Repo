#include <stdio.h>
int main()
{
    int n1, n2, n3, x;
    printf("Enter three numbers:");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) x = n1;
    else if (n2 > n1 && n2 > n3) x = n2;
    else x = n3;
    printf("The greater number is %d", x);
    return 0;
}