#include <stdio.h>

// Function to input marks
void inputMarks(int *m1, int *m2, int *m3)
{
    printf("Enter marks of subject 1: ");
    scanf("%d", m1);
    printf("Enter marks of subject 2: ");
    scanf("%d", m2);
    printf("Enter marks of subject 3: ");
    scanf("%d", m3);
}
// Function to calculate average
float calculateAverage(int m1, int m2, int m3)
{
    return (m1 + m2 + m3) / 3.0;
}
// Function to display grade based on average
void displayResult(float avg)
{
    printf("\nAverage = %.2f -", avg);

    if (avg >= 80)
        printf("Grade A\n");
    else if (avg >= 60)
        printf("Grade B\n");
    else if (avg >= 40)
        printf("Grade C\n");
    else
        printf("Fail\n");
}
int main()
{
    int m1, m2, m3;
    float avg;

    printf("Enter marks of 3 subjects for Rahul:\n");
    inputMarks(&m1, &m2, &m3);

    avg = calculateAverage(m1, m2, m3);

    displayResult(avg);

    return 0;
}