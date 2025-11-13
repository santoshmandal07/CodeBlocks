#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter size of square: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // Print * for border or diagonals
            if (i == 1 || i == n || j == 1 || j == n || i == j || (i + j) == (n + 1))
                printf("* ");
            else
                printf("  "); // spaces inside
        }
        printf("\n");
    }

    return 0;
}
