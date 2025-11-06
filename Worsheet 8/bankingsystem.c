#include <stdio.h>

// Function declarations
// Function to deposit money
float deposit(float balance, float amount)
{
    if (amount > 0)
    {
        balance += amount;
        printf("Rs.%.2f deposited successfully.\n", amount);
        printf("New balance: Rs.%.2f\n", balance);
    }
    else
    {
        printf("Invalid deposit amount!\n");
    }
    return balance;
}

// Function to withdraw money
float withdraw(float balance, float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount!\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance! Transaction failed.\n");
    }
    else
    {
        balance -= amount;
        printf("Rs.%.2f withdrawn successfully.\n", amount);
        printf("New balance: Rs.%.2f\n", balance);
    }
    return balance;
}

// Function to display balance
void displayBalance(float balance)
{
    printf("Current balance: Rs.%.2f\n", balance);
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
            balance = deposit(balance, amount);
            break;

        case 2:
            printf("Enter amount to withdraw: Rs.");
            scanf("%f", &amount);
            balance = withdraw(balance, amount);
            break;

        case 3:
            displayBalance(balance);
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

