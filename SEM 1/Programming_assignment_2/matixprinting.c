#include <stdio.h>

int main()
{
    int i, j;
    int matrix[3][3];

    printf("Enter elements of 3x3 matrix:\n");

    // Input matrix elements
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The 3x3 matrix is:\n");

    // Print matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
