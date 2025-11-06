#include <stdio.h>

// Function to input employee details
float inputDetails()
{
    float basic;
    printf("Enter Basic Salary (Rs.): ");
    scanf("%f", &basic);
    return basic;
}

// Function to calculate salary
float calculateSalary(float basic)
{
    float da, hra, gross, tax, net;

    da = 0.10 * basic;              // DA = 10% of basic
    hra = 0.15 * basic;             // HRA = 15% of basic
    gross = basic + da + hra;       // Gross = Basic + DA + HRA
    tax = 0.05 * gross;             // Tax = 5% of gross
    net = gross - tax;              // Net = Gross - Tax

    return net;
}

// Function to display salary slip
void displaySlip(float basic, float net)
{
    printf("\n------ Salary Slip ------\n");
    printf("Employee Name: Ankit\n");
    printf("Basic Salary: Rs.%.2f\n", basic);
    printf("Net Salary: Rs.%.2f\n", net);
}

int main()
{
    float basic, net;

    basic = inputDetails();          // Step 1: Input basic salary
    net = calculateSalary(basic);    // Step 2: Calculate net salary
    displaySlip(basic, net);         // Step 3: Display salary slip

    return 0;
}
