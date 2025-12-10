#include <stdio.h>

int isValid(int num, int base) 
{
    while (num > 0) {
        int digit = num % 10;
        if (digit >= base)   // invalid digit
            return 0;
        num /= 10;
    }
    return 1;
}

int toDecimal(int num, int base) 
{
    int power = 1;
    int decimal = 0;

    while (num > 0) {
        int digit = num % 10;
        decimal += digit * power;
        power *= base;
        num /= 10;
    }
    return decimal;
}

int fromDecimal(int decimal, int base) 
{
    int result = 0;
    int power = 1;

    while (decimal > 0) {
        int digit = decimal % base;
        result += digit * power;
        power *= 10;
        decimal /= base;
    }
    return result;
}

int main() 
{
    int num, inputBase, outputBase;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter input base (2-10): ");
    scanf("%d", &inputBase);

    printf("Enter output base (2-10): ");
    scanf("%d", &outputBase);

    // Validate bases
    if (inputBase < 2 || inputBase > 10 || outputBase < 2 || outputBase > 10) 
    {
        printf("Base must be between 2 and 10.\n");
        return 0;
    }

    // Validate number
    if (!isValid(num, inputBase)) 
    {
        printf("Invalid number for the given base.\n");
        return 0;
    }

    // Convert to decimal
    int decimalValue = toDecimal(num, inputBase);

    // Convert decimal to output base
    int converted = fromDecimal(decimalValue, outputBase);

    printf("Converted value: %d\n", converted);

    return 0;
}
