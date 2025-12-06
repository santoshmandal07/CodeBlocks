/*
    This program is for billing purpose in grocery stores,
    I have taken 10 items in an array and fixed there price in different array,
    user will give the quantity of the items the buyer has purchased and this program will
    give the grand total of the Buyer has purchased from the grocery store.


    Programer : SANTOSH MANDAL
    Mail ID : santoshmandal8583@gmail.com
    Date : 06/12/2025
*/



#include <stdio.h>

// Function: calculate bill for one item
float calculateItemTotal(float price, int qty)
{
    return price * qty;
}

int main()
{
    // 10 grocery items
    char *items[10] = {
        "Rice", "Sugar", "Milk", "Bread", "Eggs",
        "Tea", "Coffee", "Oil", "Soap", "Salt"
    };

    // Corresponding 10 prices
    float prices[10] = {
        40.0, 50.0, 25.0, 20.0, 6.0,
        120.0, 180.0, 150.0, 30.0, 10.0
    };

    float *pPrice = prices;   // pointer to price array

    int choice, qty;
    float grandTotal = 0.0;

    while (1)
    {
        // Display menu
        printf("\n--------- GROCERY MENU (10 ITEMS) ---------\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d. %s  - Rs %.2f\n", i + 1, items[i], *(pPrice + i));
        }
        printf("11. Checkout / Exit\n");
        printf("-------------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 11)
        {
            printf("\nFinal Grand Total = Rs %.2f\n", grandTotal);
            printf("Thank you for shopping!\n");
            break;
        }

        if (choice < 1 || choice > 11)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        // Calculate cost for selected item
        float cost = calculateItemTotal(*(pPrice + (choice - 1)), qty);
        grandTotal += cost;

        printf("%s x %d = Rs %.2f added to bill.\n", items[choice - 1], qty, cost);

        printf("Current Total: Rs %.2f\n", grandTotal);
    }

    return 0;
}
