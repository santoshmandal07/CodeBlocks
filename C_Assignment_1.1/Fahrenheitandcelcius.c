#include <stdio.h>

int main()
{
    float temperature, celcius, fahrenheit;
    int choice;
    printf("Enter the temperature you want to convert: ");
    scanf("%f",&temperature);
    printf("1. Convert into Fahrenheit.\n");
    printf("2. Fahrenheit into celcius.\n");
    printf("Choose an option.");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        fahrenheit = (temperature*5/9)+32;
        printf("Your temperature in Fahrenheit is: %.2f",fahrenheit);
        break;

        case 2:
        celcius = (temperature-32)*5/9;
        printf("Your temperature in celcius is: %.2f",celcius);
        break;

        default:
        printf("Enter a valid choice!!");
        break;
    }
    return 0;
}