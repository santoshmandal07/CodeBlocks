/*
    This is menu driven program for Mini ATM Banking system.
    I have initialize a base amount in the account i.e. Rs.10000.
    I have made seperate functions for different use.
    Uses:
       1. Withdrawl
       2. Deposit
       3. Checking Balance

    Programer : SANTOSH MANDAL
    Mail ID : santoshmandal8583@gmail.com
    Date : 06/12/2025
*/
#include <stdio.h>

// Function to deposit money
void deposit(float *balance, float amount)
{
    if (amount > 0)
    {
        *balance += amount;   // Updating using pointer
        printf("Rs.%.2f deposited successfully.\n", amount);
        printf("New balance: Rs.%.2f\n", *balance);
    }
    else
    {
        printf("Invalid deposit amount!\n");
    }
}

// Function to withdraw money
void withdraw(float *balance, float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount!\n");
    }
    else if (amount > *balance)
    {
        printf("Insufficient balance! Transaction failed.\n");
    }
    else
    {
        *balance -= amount;   // Updating using pointer
        printf("Rs.%.2f withdrawn successfully.\n", amount);
        printf("New balance: Rs.%.2f\n", *balance);
    }
}

// Function to display balance
void displayBalance(float *balance)
{
    printf("Current balance: Rs.%.2f\n", *balance);
}

int main()
{
    float balance = 10000.0;  // Starting balance
    int choice;
    float amount;

    while (1)
    {
        printf("\n------ Bank Account Menu ------\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Display Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to deposit: Rs.");
            scanf("%f", &amount);
            deposit(&balance, amount);   // passing address
            break;

        case 2:
            printf("Enter amount to withdraw: Rs.");
            scanf("%f", &amount);
            withdraw(&balance, amount);  // passing address
            break;

        case 3:
            displayBalance(&balance);    // passing address
            break;

        case 4:
            printf("Thank you for using our banking system!\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
