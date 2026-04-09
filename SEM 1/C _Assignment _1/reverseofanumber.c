#include <stdio.h>
int main() 
{
    int num, reversed = 0, remainder;
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Reverse the number using a loop
    while (num != 0) 
    {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Add it to reversed number
        num = num / 10;                    // Remove last digit
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}
