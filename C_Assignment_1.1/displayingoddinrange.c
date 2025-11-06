#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the end of the range: ");
    scanf("%d",&n);
    printf("The odd numbers in the range [1,n] are:\n");
    i=1;
    while (i<=n)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}