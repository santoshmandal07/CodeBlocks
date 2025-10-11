#include <stdio.h>

int main()
{
    char name[50];
    int units;
    float amount = 0, surcharge = 0, total;

    // Input
    printf("Enter the name of consumer: ");
    scanf("%s", name);

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Bill calculation
    if (units <= 200)
    {
        amount = units * 0.80;
    }
    else if (units <= 300)
    {
        amount = (200 * 0.80) + ((units - 200) * 0.90);
    }
    else
    {
        amount = (200 * 0.80) + (100 * 0.90) + ((units - 300) * 1.00);
    }

    // Add minimum charge
    amount = amount + 100;

    // Apply surcharge if bill exceeds 400
    if (amount > 400)
    {
        surcharge = amount * 0.15;
    }

    total = amount + surcharge;

    // Output
    printf("Consumer name = %s\n", name);
    printf("Units consumed = %d\n", units);
    printf("Bill amount = %f rupees\n", total);

    return 0;
}
