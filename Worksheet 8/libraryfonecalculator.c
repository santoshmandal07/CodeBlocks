#include <stdio.h>

// Function to input the number of days the book was kept
int inputDays()
{
    int days;
    printf("Enter the number of days book was returned after issue: ");
    scanf("%d", &days);
    return days;
}

// Function to calculate fine based on the rules
int calculateFine(int days)
{
    int fine = 0;

    if (days <= 14)
        fine = 0;
    else if (days <= 15)
        fine = (days - 14) * 1;  // Up to 15 days Rs.1/day
    else if (days <= 30)
        fine = (15 - 14) * 1 + (days - 15) * 2;  // 16–30 days Rs.2/day
    else
        fine = (15 - 14) * 1 + (30 - 15) * 2 + (days - 30) * 5; // Above 30 Rs.5/day

    return fine;
}

// Function to display fine
void displayFine(int fine)
{
    printf("Fine = Rs.%d\n", fine);
}

int main()
{
    int days, fine;

    days = inputDays();
    fine = calculateFine(days);
    displayFine(fine);

    return 0;
}
