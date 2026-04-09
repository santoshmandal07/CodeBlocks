#include <stdio.h>
#include <math.h>

// Function to display Arithmetic Progression
void printAP(float a, float d, int n)
{
    float term;
    printf("Arithmetic Progression:\n");
    for (int i = 0; i < n; i++)
    {
        term = a + i * d;
        printf("%.2f ", term);
    }
    printf("\n");
}

// Function to display Geometric Progression
void printGP(float a, float d, int n)
{
    float term;
    printf("Geometric Progression:\n");
    for (int i = 0; i < n; i++)
    {
        term = a * pow(d, i);
        printf("%.2f ", term);
    }
    printf("\n");
}

int main()
{
    float a, d;
    int n, choice;

    // Input values
    printf("Enter the first term (a): ");
    scanf("%f", &a);

    printf("Enter the difference or multiplier (d): ");
    scanf("%f", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of terms must be greater than 0.\n");
        return 0;
    }

    // Choose progression type
    printf("\nChoose progression type:\n");
    printf("1. Arithmetic Progression (AP)\n");
    printf("2. Geometric Progression (GP)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("\nFirst %d terms:\n", n);

    // Switch case to call functions
    switch (choice)
    {
        case 1:
            printAP(a, d, n);
            break;

        case 2:
            printGP(a, d, n);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}
