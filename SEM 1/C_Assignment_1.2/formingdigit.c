/*
    This program is to get digits a until user intputs -1, and form a
    number with the digits before -1.

    Programer : SANTOSH MANDAL
    Mail ID : santohsmandal8583@gmail.com
    Date : 07/12/2025
*/



#include <stdio.h>

int main() 
{
    int digit;
    long number = 0;  

    printf("Enter digits one by one (enter -1 to stop):\n");

    while (1) 
    {
        scanf("%d", &digit);

        if (digit == -1) 
        {   // sentinel value
            break;
        }

        // Validate input is a single digit
        if (digit < 0 || digit > 9) 
        {
            printf("Invalid input! Enter digits 0-9 or -1 to stop.\n");
            continue;
        }

        // Build the number
        number = number * 10 + digit;
    }

    printf("The formed number is: %ld\n", number);

    return 0;
}
