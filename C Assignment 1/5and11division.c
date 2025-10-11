#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number you want to check if it is divisible by 5 and 11 or not: ");
    scanf("%d",&a);

    if(a%5==0 && a%11==0)
    {
        printf("The number is divisible by both 5 and 11.");
    }
    else if(a%5==0)
    {
        printf("The number is divisible by 5 but not 11.");
    }
    else if(a%11==0)
    {
        printf("The number is divisible by 11 but not 5.");
    }
    else
    {
        printf("The number is not divisible by both 5 and 11.");
    }
    return 0;
}
