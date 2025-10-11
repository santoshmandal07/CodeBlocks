#include <stdio.h>

int main()
{
    int principle, time;
    float rate, simple_int;

    printf("Enter the principle amount: ");
    scanf("%d",&principle);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period: ");
    scanf("%d",&time);

    simple_int=(principle*rate*time)/100;
    printf("The simple interest of %d is: %.2f",principle, simple_int);
    return 0;
}
