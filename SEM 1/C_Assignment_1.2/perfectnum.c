#include <stdio.h>

int findSumOfDivisors(int *n)
{
    int i;
    int sum = 0;
    printf("The divisors of %d are: \n",*n);
    for(i=1; i<=*n/2; i++)
    {
        if(*n % i == 0)
        {
            printf("%d ",i);
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int num, sum;
    int *p;
    p = &num;

    printf("Enter the number: ");
    scanf("%d",p);
    sum = findSumOfDivisors(p);
    printf("\nThe sum of divisors is: %d",sum);

    if(num == sum)
        printf("\n%d is perfect number.");

    else
        printf("%d is not a perfect number.");

    return 0;
}
