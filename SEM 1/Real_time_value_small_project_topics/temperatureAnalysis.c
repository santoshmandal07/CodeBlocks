/*
    This is temperature analytics for Weather Data Monitoring 
    This system finds the average temperature for 7 days and also
    the highest and lowest temperature in this 7 days.

    Programer : SANTOSH MANDAL
    Mail ID : santoshmandal8583@gmail.com
    Date : 06/12/2025
*/



#include <stdio.h>

float average(float *p, int n)
{
    float sum = 0.0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum += *p;
        p++;
    }

    return sum / n;
}

float highest(float *p, int n)
{
    float max = *p;
    int i;

    for (i = 1; i < n; i++)
    {
        p++;
        if (*p > max)
        {
            max = *p;
        }
    }

    return max;
}

float lowest(float *p, int n)
{
    float min = *p;
    int i;

    for (i = 1; i < n; i++)
    {
        p++;
        if (*p < min)          // FIXED: should check < not >
        {
            min = *p;
        }
    }

    return min;
}

int main()
{
    int choice;
    float avg, high, low;
    float temp[7];
    float *p = temp;

    printf("Enter the temperature of 7 Days:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%f", &temp[i]);   // FIXED: earlier you used &p (wrong)
    }

    while (1)
    {
        printf("\n--- Temperature Analytics ---\n");
        printf("1. Average of Temperatures\n");
        printf("2. Highest Temperature\n");
        printf("3. Lowest Temperature\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                avg = average(temp, 7);
                printf("The average temperature is: %.2f\n", avg);
                break;

            case 2:
                high = highest(temp, 7);
                printf("The highest temperature is: %.2f\n", high);
                break;

            case 3:
                low = lowest(temp, 7);
                printf("The lowest temperature is: %.2f\n", low);
                break;

            case 4:
                printf("Thank you for using the system.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
