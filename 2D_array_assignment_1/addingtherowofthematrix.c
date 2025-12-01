#include <stdio.h>

int main()
{
    int i, j, m[3][3], sum=0;
    printf("Enter the elements of 3 X 3 array matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the %d %d element: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += m[i][j];
        }
        printf("Sum of row %d: %d\n",i,sum);
        sum=0;
    }
    return 0;
}
