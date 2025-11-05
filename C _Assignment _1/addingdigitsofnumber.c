#include <stdio.h>
int main()
{
    int num, remainder, sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder;
        num = num/10;
    }
    printf("The sum of digits is: %d",sum);
    return 0;
}