#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basic);

    // Conditions for HRA and DA
    if (basic <= 10000) {
        hra = basic * 0.20;
        da  = basic * 0.80;
    }
    else if (basic <= 20000) {
        hra = basic * 0.25;
        da  = basic * 0.90;
    }
    else {
        hra = basic * 0.30;
        da  = basic * 0.95;
    }

    // Gross salary calculation
    gross = basic + hra + da;

    // Output result
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
