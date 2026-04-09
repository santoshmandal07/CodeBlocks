#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], Mul[n][n];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix to 0
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            Mul[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < n; k++)
            {
                Mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
