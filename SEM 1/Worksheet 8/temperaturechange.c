#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float toFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Kelvin
float toKelvin(float celsius)
{
    return celsius + 273.15;
}


int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Fahrenheit = %.2fF\n", toFahrenheit(celsius));
    printf("Kelvin = %.2fK\n", toKelvin(celsius));

    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Celsius = %.2fC\n", toCelsius(fahrenheit));

    return 0;
}
