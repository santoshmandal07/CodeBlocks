#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive integer (n >= 0): ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    printf("\nNumber\tSquare\tCube\n");
    printf("-------------------------\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
