#include <stdio.h>

int main()
{
    int n, i,fib;
    int fib1=0; 
    int fib2=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Value of n should be greater than 0.");
    }

    printf("%d %d ",fib1,fib2);
    
    for(i=1; i<=n-2; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf("%d ",fib);
    }
    return 0;
}