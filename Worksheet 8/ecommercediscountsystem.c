#include <stdio.h>

// Function to input item price
float inputItems()
{
    float price;
    printf("Enter item price (Rs.): ");
    scanf("%f", &price);
    return price;
}

// Function to calculate total amount
float calculateTotal(float p1, float p2, float p3)
{
    return p1 + p2 + p3;
}

// Function to calculate discount based on total
float applyDiscount(float total)
{
    float discount = 0;

    if (total < 1000)
        discount = 0;
    else if (total <= 5000)
        discount = total * 0.10;   // 10% discount
    else
        discount = total * 0.20;   // 20% discount

    return discount;
}

// Function to display final bill
void displayBill(float total, float discount, float finalBill)
{
    printf("\n------ Shopping Bill ------\n");
    printf("Total Amount: Rs.%.2f\n", total);
    printf("Discount: Rs.%.2f\n", discount);
    printf("Final Bill: Rs.%.2f\n", finalBill);
}

int main()
{
    float price1, price2, price3;
    float total, discount, finalBill;

    printf("Enter price of 3 items:\n");
    price1 = inputItems();
    price2 = inputItems();
    price3 = inputItems();

    total = calculateTotal(price1, price2, price3);
    discount = applyDiscount(total);
    finalBill = total - discount;

    displayBill(total, discount, finalBill);

    return 0;
}
