#include <stdio.h>

int main()
{
    int i, j, m[2][2];
    printf("Enter the elements of the array matrix: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Enter the %d %d element: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("The 2 X 2 matrix is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
