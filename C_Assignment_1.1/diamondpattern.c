#include <stdio.h>

int main()
{
    int n, i, j, space;

    printf("Enter the size of the diamond (odd number): ");
    scanf("%d", &n);

    // If even, make it odd
    if(n % 2 == 0)
        n++;

    int mid = n / 2;

    // Upper part
    for(i = 0; i <= mid; i++)
    {
        // Spaces
        for(space = 0; space < mid - i; space++)
            printf(" ");

        // Stars (only odd numbers)
        for(j = 0; j < 2*i + 1; j++)
            printf("*");

        printf("\n");
    }

    // Lower part
    for(i = mid - 1; i >= 0; i--)
    {
        // Spaces
        for(space = 0; space < mid - i; space++)
            printf(" ");

        // Stars
        for(j = 0; j < 2*i + 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
