#include <stdio.h>

int main()
{
    int n, rem, sum=0;
    printf("Enter the digit: ");
    scanf("%d",&n);

    printf("The of the digits is: ");
    while (n>0)
    {
        rem = n%10;
        sum += rem;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}
