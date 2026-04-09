#include <stdio.h>
int main() 
{
    int start, end, i, sum = 0;
    // Input the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Even numbers between %d and %d are:\n", start, end);
    // Loop through the range
    i=start;
    while(i<=end)
    {
        if (i % 2 == 0) 
        {
            printf("%d ", i);
            sum += i;
        }
        i++;
    }
    printf("\nThe sum of the even numbers is: %d",sum);
    return 0;
}