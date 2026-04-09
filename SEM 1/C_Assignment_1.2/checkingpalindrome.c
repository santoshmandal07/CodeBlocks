#include <stdio.h>

int reverseNum(int n)
{
    int original, rem, reverse=0;
    while(n>0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    return reverse;
}

int main()
{
    int num, reverse;

    printf("Enter the number to check it is palindrome or not: ");
    scanf("%d",&num);

    reverse = reverseNum(num);

    if(num == reverse)
    {
        printf("The number is palindrome.");

    }

    else
    {
        printf("The number is not a palindrome.");
    }
    return 0;
}
