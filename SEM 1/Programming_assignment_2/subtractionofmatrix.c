#include <stdio.h>

int main()
{
    int i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], Sub[r][c];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtraction of matrices
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("Result of matrix subtraction (A - B):\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
