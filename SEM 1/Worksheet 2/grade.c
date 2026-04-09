#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks obtained out of 100: ");
    scanf("%d",&marks);
    printf("\n");

    if(marks>=90)
    {
        printf("Grade A.");
    }
    else if(marks>=75)
    {
        printf("Grade B.");
    }
    else if(marks>=50)
    {
        printf("Grade C.");
    }
    else
    {
        printf("Grade F.");
    }
    printf("\n\n");
    return 0;
}
