#include <stdio.h>
#include "Myheader.h"


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
