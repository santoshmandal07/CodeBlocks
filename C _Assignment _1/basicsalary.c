#include <stdio.h>

int main()
{
    float salary, hra, da, gross;
    printf("Enter the basic salary: ");
    scanf("%f",&salary);

    if(salary <= 10000)
    {
        hra = salary * 0.20;
        da = salary * 0.80;
    }

    else if(salary <= 20000)
    {
        hra = salary * 0.25;
        da = salary * 0.90;
    }

    else
    {
        hra = salary * 0.30;
        da = salary * 0.95;
    }

    gross = salary + hra + da;
    printf("The Gross Salary is: %.2f",gross);
    return 0;
}