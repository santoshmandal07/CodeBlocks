#include <stdio.h>

int main()
{
    int n, i, j, k, space;
    printf("Enter the size of the diamond: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for (space = i; space < n; space++)
            printf(" ");

        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for (space = i; space <=n; space++)
            printf(" ");

        for(k=i-1; k>=1; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}