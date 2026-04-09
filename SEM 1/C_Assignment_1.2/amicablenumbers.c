#include <stdio.h>

int main()
{
    int num1, num2;
    int sum1=0, sum2=0;

    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);

    if(num1 % 2 == 0 && num2 % 2 != 0)
    {
        printf("Both numbers will be either even or odd not mixed!");
        return 0;
    }

    else if(num1 % 2 != 0 && num2 % 2 == 0)
    {
        printf("Both numbers will be either even or odd not mixed!");
        return 0;
    }
    
    printf("The divisors of %d are: \n",num1);
    for( int i=1; i<=num1/2; i++)
    {
        if(num1 % i == 0)
        {
            printf("%d  ",i);
            sum1 += i;
        }
    }

    printf("\nThe divisors of %d are: \n",num2);
    for( int i=1; i<=num2/2; i++)
    {
        if(num2 % i == 0)
        {
            printf("%d ",i);
            sum2 += i;
        }
    }

    printf("\nThe sum of divisors of %d is %d\n",num1,sum1);
    printf("The sum of divisors of %d is %d\n",num2,sum2);

    if(num1 == sum2 && num2 == sum1)
    {
        printf("%d and %d are amicable numbers.\n",num1,num2);
    }

    else
    {
        printf("%d and %d are not amicable numbers.\n",num1,num2);
    }

    return 0;
}
