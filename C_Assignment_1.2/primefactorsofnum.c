#include <stdio.h>

int main() 
{
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Please enter a positive number!");
        return 0;
    }

    printf("Prime factors of %d are: ", num);

    // Step 1: Factor out 2
    while (num % 2 == 0) 
    {
        printf("2 ");
        num = num / 2;
    }

    // Step 2: Factor out odd numbers
    for (i = 3; i <= num/2; i += 2) 
    {
        while (num % i == 0) 
        {
            printf("%d ", i);
            num = num / i;
        }
    }

    // Step 3: If a prime > 2 remains
    if (num > 2) 
    {
        printf("%d", num);
    }

    printf("\n");

    return 0;
}
