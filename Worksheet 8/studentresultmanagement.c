#include <stdio.h>

int inputMarks()
{
    float a;
    float b;
    float c;
    float total;
    printf("Enter the marks of the first subject: ");
    scanf("%d",&a);
    printf("Enter the marks of the second subject: ");
    scanf("%d",&b);
    printf("Enter the marks of the third subject: ");
    scanf("%d",&c);
    total = a + b + c;
    return total;
}

int calculateAverage(float total)
{
    float average;
    average = total / 3;
    return average;
}

int displayResult(float average)
{
    if(average>=80)
    {
        printf("Grade A.");
    }
    else if(average>=60)
    {
        printf("Grade B.");
    }
    else if(average>=40)
    {
        printf("Grade C.");
    }
    else
    {
        printf("Fail.");
    }
}

int main()
{
    float totalmarks, average;
    totalmarks = inputMarks();
    average = calculateAverage(totalmarks);
    displayResult(average);
    return 0;
}