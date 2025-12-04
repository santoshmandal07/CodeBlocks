#include <stdio.h>

int main()
{
    int i, j;
    int r1, c1, r2, c2;

    printf("Enter the row of the first matrix: ");
    scanf("%d",&r1);
    printf("Enter the column of the first matrix: ");
    scanf("%d",&c1);

    printf("Enter the row of the second matrix: ");
    scanf("%d",&r2);
    printf("Enter the column of the second matrix: ");
    scanf("%d",&c2);

    if(c1!=r2)
    {
        printf("Multiplication not possible, because column of first and row of second matrix are not equal\n");
        return 0;
    }

    int m1[r1][c1];
    int m2[r2][c2];
    int r[r1][c2];

    printf("Enter the elements of the first matrix: ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    //multipication

    for(i = 0; i < r1; i++)
    {

        for(j = 0; j < c2; j++)
        {
            r[i][j] = 0;
            for(int k = 0; k < c1; k++)
            {
                r[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("The first matrix is: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

    printf("The resultant matrix is: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}