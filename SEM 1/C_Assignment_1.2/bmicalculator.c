#include <stdio.h>

int main()
{
    float weight, height, bmi;
    int category;

    printf("Enter the weight (in KGs): ");
    scanf("%f", &weight);

    printf("Enter the height (in meters): ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input.\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    // Convert BMI into a category code
    // 1 = Underweight
    // 2 = Normal
    // 3 = Overweight
    // 4 = Obese
    if (bmi < 18.5)
        category = 1;
    else if (bmi < 25)
        category = 2;
    else if (bmi < 30)
        category = 3;
    else
        category = 4;

    // Use switch case
    switch (category)
    {
        case 1:
            printf("You are Underweight.\n");
            break;
        case 2:
            printf("Your weight is Normal.\n");
            break;
        case 3:
            printf("You are Overweight.\n");
            break;
        case 4:
            printf("You are Obese.\n");
            break;
        default:
            printf("Invalid BMI.\n");
    }

    return 0;
}
