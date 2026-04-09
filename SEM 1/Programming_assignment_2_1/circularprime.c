#include <stdio.h>

// Function to check prime
int isPrime(int num)
{
    int i;
    if (num < 2)
        return 0;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to count digits
int countDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

// Function to rotate number
int rotateNumber(int num, int digits)
{
    int lastDigit = num % 10;
    num = num / 10;

    int multiplier = 1;
    for (int i = 1; i < digits; i++)
        multiplier *= 10;

    return lastDigit * multiplier + num;
}

int main()
{
    int num, temp, digits, i;
    int circularPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = countDigits(num);
    temp = num;

    for (i = 0; i < digits; i++)
    {
        if (!isPrime(temp))
        {
            circularPrime = 0;
            break;
        }
        temp = rotateNumber(temp, digits);
    }

    if (circularPrime)
        printf("%d is a Circular Prime number.\n", num);
    else
        printf("%d is NOT a Circular Prime number.\n", num);

    return 0;
}
