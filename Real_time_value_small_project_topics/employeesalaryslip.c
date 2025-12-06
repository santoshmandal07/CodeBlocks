/*
    This is a Employee salary slip Program for getting the net salary of each 
    employee in a company.
    

    Programer : SANTOSH MANDAL
    Mail ID : santoshmandal8583@gmail.com
    Date : 06/12/2025
*/



#include <stdio.h>

// Function to calculate DA (Dearness Allowance)
float calculateDA(float basic)
{
    return basic * 0.10;   // 10%
}

// Function to calculate HRA (House Rent Allowance)
float calculateHRA(float basic)
{
    return basic * 0.08;   // 8%
}

// Function to calculate PF (Provident Fund)
float calculatePF(float basic)
{
    return basic * 0.05;   // 5%
}

// Function to calculate Net Salary
float calculateNet(float basic)
{
    float da = calculateDA(basic);
    float hra = calculateHRA(basic);
    float pf = calculatePF(basic);

    return basic + da + hra - pf;
}

int main()
{
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    float salary[n];        // store basic salary
    float *p = salary;      // pointer to the array

    // Input salaries
    printf("\nEnter basic salary for %d employees:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Employee %d salary: ", i + 1);
        scanf("%f", (p + i));        // pointer arithmetic
    }

    // Display salary slip
    printf("\n---------- Salary Slip ----------\n");

    for (i = 0; i < n; i++)
    {
        float basic = *(p + i);

        float da = calculateDA(basic);
        float hra = calculateHRA(basic);
        float pf = calculatePF(basic);
        float net = calculateNet(basic);

        printf("\nEmployee %d:\n", i + 1);
        printf("Basic Salary : %.2f\n", basic);
        printf("DA (10%%)     : %.2f\n", da);
        printf("HRA (8%%)    : %.2f\n", hra);
        printf("PF (5%%)     : %.2f\n", pf);
        printf("Net Salary   : %.2f\n", net);
    }

    printf("\nSalary calculation completed.\n");

    return 0;
}
