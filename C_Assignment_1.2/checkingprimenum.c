#include <stdio.h>

int main()
{
    int num, flag=1;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num <= 1)
    {
        printf("%d is not a prime number.",num);
        return 0;
    }

    for(int i=2; i<=num/2; i++)
    {
        if(num % i ==0)
        {
            flag = 0;
            break;
        }
    }

    if(flag!=0)
    {
        printf("%d is prime number.",num);
    }

    else
    {
        printf("%d is not a prime number.",num);
    }
    return 0;
}
