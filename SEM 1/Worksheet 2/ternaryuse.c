#include <stdio.h>

int main()
{
    int a, b, large;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    large=(a>b)?a:b;
    printf("The larger number among %d and %d is %d.",a,b,large);
    return 0;
}
