#include <stdio.h>

int main() 
{
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    // Reverse the number so digits print in correct order
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    // Print digits in words
    while (rev > 0) 
    {
        int digit = rev % 10;

        switch (digit) 
        {
            case 0: printf("ZERO "); break;
            case 1: printf("ONE "); break;
            case 2: printf("TWO "); break;
            case 3: printf("THREE "); break;
            case 4: printf("FOUR "); break;
            case 5: printf("FIVE "); break;
            case 6: printf("SIX "); break;
            case 7: printf("SEVEN "); break;
            case 8: printf("EIGHT "); break;
            case 9: printf("NINE "); break;
        }

        rev /= 10;
    }

    return 0;
}
