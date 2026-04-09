/*
  Problem: to find the sum of the diagonals of a square matrix
  Programer: Santosh Mandal
  Date: 04/12/2025
*/

#include <stdio.h>

int main()
{
    int r, c;
    int i, j, sum1 = 0, sum2 = 0;

    printf("To find the sum of diagonal of the martrix\n");
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    
    if(r!=c)
    {
        printf("Only square matrix have diagonals.");
        return 0;
    }

    int matrix[r][c];

    printf("Enter the elements of the matrix: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            {
                sum1 += matrix[i][j];
            }
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(matrix[i][j] == matrix[i][c-1-i])
            {
                sum2 += matrix[i][j]; 
            }
        }
    }

    printf("The sum of the diagonal of the matrix is: %d\n",sum1);
    printf("The sum of the alternate diagonal of the matrix is: %d",sum2);

    return 0;
}