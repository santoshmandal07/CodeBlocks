#include <stdio.h>
#include <math.h>

int main()
{
    int p, t;
    float r, amount=0, compound_interest=0;
    printf("Enter the principle amount: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%d",&t);

    amount = p * pow((1+r/100),t);
    compound_interest = amount - p;

    printf("Your compound interest will be: %.2f",compound_interest);
    return 0;
}
