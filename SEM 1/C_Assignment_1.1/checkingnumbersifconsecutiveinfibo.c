#include <stdio.h>

int main()
{
    int n1, n2;
    int a = 0, b = 1, c;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Ensure n1 < n2 for easier comparison
    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    // Generate Fibonacci numbers until b >= n2
    while (b <= n2)
    {
        if (a == n1 && b == n2)
        {
            printf("%d and %d are consecutive Fibonacci numbers.\n", n1, n2);
            return 0;
        }
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d and %d are NOT consecutive Fibonacci numbers.\n", n1, n2);
    return 0;
}
