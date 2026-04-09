#include <stdio.h>
int main()
{
    int end, i;
    int fib1=0, fib2=1, fib;
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("The fibonacci series: \n");
    printf("%d %d ",fib1,fib2);
    for(i=1; i<=end-2; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf("%d ",fib);
    }
    return 0;
}