#include"Myheader.h"
#include<stdio.h>

int main()
{
    float a, b;
    int choice;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
         case 1:
            add(a,b);
            break;

        case 2:
            sub(a,b);
            break;

        case 3:
            mul(a,b);
            break;

        case 4:
            div(a,b);
            break;

        default:
            printf("Enter a valid choice!");
            break;
    }
    getchar();
    return 0;
}
