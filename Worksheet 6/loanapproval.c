#include <stdio.h>

int main()
{
    int age, monthly_income, credit_score, loan_amount=0;
    char employment_status;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your employment status(E/S/U): ");
    scanf("%s",&employment_status);
    printf("Enter your monthly income: ");
    scanf("%d",&monthly_income);
    printf("Enter your credit score: ");
    scanf("%d",&credit_score);

    if(employment_status == 'U')
    {
        printf("Loan not approved.");
    }

    else if(employment_status == 'E' && age > 21 && credit_score > 650)
    {
        loan_amount = monthly_income * 10;
    }

    else if(employment_status == 'S' && age > 25 && credit_score > 700)
    {
        loan_amount = monthly_income * 12;
    }

    else
    {
        printf("Loan not approved.");
    }

    printf("Loan amount can be sanctioned is  Rs. %d",loan_amount);
    return 0;
}
