#include <stdio.h>

int main() 
{
    int n, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        // Print spaces for alignment
        for (j = 0; j < n - i - 1; j++)
            printf("  ");

        // Calculate and print values for each row
        for (j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;

            printf("%4d", num);
        }
        printf("\n");
    }

    return 0;
}
