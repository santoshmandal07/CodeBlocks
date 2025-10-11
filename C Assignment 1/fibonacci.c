#include <stdio.h>

int main()
{
    int n, i, fib, fib1=0, fib2=1;
    printf("Enter the value of n terms: ");
    scanf("%d",&n);

    printf("%d\t%d\t",fib1,fib2);
    for (i=1; i<=n; i++)
    {
        fib = fib1 + fib2;
        printf("%d\t",fib);
        fib1=fib2;
        fib2=fib;
    }
    return 0;
}
