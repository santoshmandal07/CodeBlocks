#include <stdio.h>

void add(float a, float b)
{
    printf("\nAddition = %.2f", a + b);
}

void sub(float a, float b)
{
    printf("\nSubtraction = %.2f", a - b);
}

void mul(float a, float b)
{
    printf("\nMultiplication = %.2f", a * b);
}

void div(float a, float b)
{
    if (b != 0)
        printf("\nDivision = %.2f\n", a / b);
    else
        printf("\nDivision not possible (divide by zero)\n");
}

int main()
{
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    add(num1, num2);
    sub(num1, num2);
    mul(num1, num2);
    div(num1, num2);

    return 0;
}
