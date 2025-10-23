#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d",&year);
    
    //dividing by 4 to check
    if(year%4==0)
    {
        printf("The year is Leap Year.");
    }

    else
    {
        printf("The year is not a Leap Year.");
    }
    return 0;
}