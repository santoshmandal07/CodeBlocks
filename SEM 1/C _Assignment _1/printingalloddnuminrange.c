#include <stdio.h>

int main() 
{
    int start, end, i;

    // Input the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Odd numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (i = start; i <= end; i++) 
    {
        if (i % 2 != 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
