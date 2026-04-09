#include <stdio.h>

// Recursive function to calculate factorial
long factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

// Function that stores the factorial result using a pointer
void storeFactorial(int n, long *result) 
{
    *result = factorial(n);   // store the returned factorial into pointer
}

int main() 
{
    int n;
    long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    storeFactorial(n, &result);   // pass address of result

    printf("Factorial of %d = %ld\n", n, result);

    return 0;
}
