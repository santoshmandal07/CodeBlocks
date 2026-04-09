#include <stdio.h>
#include <math.h>

int simple(int x, int y, float z)
{
    float s = (x*y*z)/100;
    printf("The Simple Interest is %.2f.",s);
}

int compound(int x, int y, float z)
{
    float a = x * pow((1+z/100),y);
    float c = a - x;
    printf("The Compound Interest is %.2f.",c);
}

int main()
{
    int principle, time, choice;
    float rate_of_interest;
    printf("Enter the Principle amount: ");
    scanf("%d",&principle);
    printf("Enter the Time period: ");
    scanf("%d",&time);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&rate_of_interest);

    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter the choice you want to do: ");
    scanf("%d",&choice);

    switch(choice)
    {
         case 1:
             simple(principle, time, rate_of_interest);
            break;
         case 2:
            compound(principle, time, rate_of_interest);
            break;
         default:
            printf("Please enter a valid choice!");
            break;
    }
    return 0;
}
