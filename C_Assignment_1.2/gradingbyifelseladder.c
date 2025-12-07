#include <stdio.h>

int main()
{
    int num;
    printf("Enter the marks: ");
    scanf("%d",&num);

    if(num <= 0 || num >= 100)
    {
        printf("Enter a valid marks between 0 - 100.");
        return 0;
    }

    if(num>=80)
    {
        printf("Grade A.");
    }

    else if(num>=60)
    {
        printf("Grade B.");
    }

    else if(num>=50)
    {
        printf("Grade C.");
    }

    else if(num>=40)
    {
        printf("Grade D.");
    }

    else
    {
        printf("Grade F.");
    }

    return 0;
}
