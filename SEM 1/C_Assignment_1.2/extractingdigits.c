#include <stdio.h>

int LtoR(int n)
{
    int temp; 
    int divisor = 1;
    int digit;
    temp = n;
    while(temp >= 10)
    {
        temp /= 10;
        divisor *= 10;
    }
    temp = n;
    printf("Digits left to right: ");
    while(divisor > 0)
    {
        digit = temp / divisor;
        printf("%d ", digit);
        temp %= divisor;
        divisor /= 10;
    }
}

int RtoL(int n) 
{

    printf("Digits right to left: ");

    while (n > 0) {
        int digit = n % 10;
        printf("%d ", digit);
        n /= 10;
    }
}

int main()
{
    int n, temp, choice, divisor = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("How you want to print the digits: \n");
    printf("1. Left to Right\n");
    printf("2. Right to Left\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        LtoR(n);
        break;

        case 2:
        RtoL(n);
        break;

        default:
        printf("Invalid choice");

    }
    return 0;
}