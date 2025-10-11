#include <stdio.h>
#include <math.h>

int main()
{
    int num, num1, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num1 = num;


    while (num1 > 0)
    {
        num1 /= 10;
        ++n;
    }

    num1 = num;


    while (num1 > 0)
    {
        remainder = num1 % 10;
        result += pow(remainder, n);
        num1 /= 10;
    }


    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
