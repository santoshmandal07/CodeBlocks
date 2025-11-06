#include <stdio.h>

int main()
{
    int n, m;
    int i, j;

    // Input values for n (number of tables) and m (rows per table)
    printf("Enter how many tables to display (n > 0): ");
    scanf("%d", &n);

    printf("Enter how many rows per table (m > 0): ");
    scanf("%d", &m);

    // Validate input
    if (n <= 0 || m <= 0)
    {
        printf("Both n and m must be greater than 0.\n");
        return 0;
    }

    // Display tables
    for (i = 1; i <= n; i++)
    {
        printf("\n--- Table of %d ---\n", i);
        for (j = 1; j <= m; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
