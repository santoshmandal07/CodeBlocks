#include <stdio.h>
int main() 
{
    int n, i;
    unsigned long long factorial = 1;  // Use long long to handle large results
    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // Check if input is valid
    if (n < 0) 
    {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else 
    {
        // Calculate factorial using do-while loop
        i=1;
        while(i<=n)
        {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
