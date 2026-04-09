#include <stdio.h>

int main() 
{
    int marks;
    char grade;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) 
    {
        printf("Invalid marks!\n");
        return 0;
    }

    switch (marks / 10) 
    {
        case 10:  // for 100  
        case 9:   // 90–99
        case 8:   // 80–89
            grade = 'A';
            break;

        case 7:   // 70–79
        case 6:   // 60–69
            grade = 'B';
            break;

        case 5:   // 50–59
            grade = 'C';
            break;

        case 4:   // 40–49
            grade = 'D';
            break;

        default:  // 0–39
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);
    return 0;
}
