#include <stdio.h>

int main()
{
    int n, i=1, sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("The first %d numbers are: ",n);
    while (i<=n)
    {
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
    printf("The sum of first %d numbers is: %d",n,sum);
    return 0;
}
