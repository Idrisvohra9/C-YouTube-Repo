#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    profit = sp - cp;
    loss = cp - sp;
    if(sp > cp) printf("The seller has made a profit of %f", profit);
    else if(cp > sp) printf("The seller has incurred a loss of %f", loss);
    else printf("The seller has neither made a profit nor incurred a loss");
    return 0;
}