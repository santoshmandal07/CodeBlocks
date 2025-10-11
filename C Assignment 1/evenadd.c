#include <stdio.h>

int main()
{
    int a, b, i, sum=0;
    printf("Enter the starting value: ");
    scanf("%d",&a);

    printf("Enter the ending value: ");
    scanf("%d",&b);

    printf("All the even numbers in the range are: ");
    for (i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
    }
    printf("The sum of all numbers is: %d",sum);
    return 0;
}
