#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter the value of n: \n");
    scanf("%d",&n);

    printf("The odd numbers in 'n' are: ");
    for(i=1; i<=n; i++)
    {
        int oddnum=2*i-1;
        printf("%d\n", oddnum);
        sum+=oddnum;
    }
    printf("Sum of these odd numbers: %d",sum);
    return 0;
}
