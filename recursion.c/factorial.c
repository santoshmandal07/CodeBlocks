#include <stdio.h>

int factorial(int n)
{
    if(n==1)
    return 1;
    else
    return n * factorial(n-1);
}

int main()
{
    int n;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d",&n);
    int r = factorial(n);
    printf("The factorial of %d is %d",n,r);
    return 0;
}
