#include <stdio.h>

int main()
{
    int i, j, m1[3][3], m2[3][3], result[3][3];
    printf("Enter the elements of 1st 3 X 3 array matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the %d %d element: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter the elements of 2nd 3 X 3 array matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the %d %d element: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    //adding the matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            result[i][j]= m1[i][j] + m2[i][j];
        }
    }

    printf("The 1st matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

    printf("The 2st matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

    printf("The sum of 1st and 2nd matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}
