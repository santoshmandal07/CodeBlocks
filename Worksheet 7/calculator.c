#include <stdio.h>

int main()
{
    int a, b, r1=0, choice;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    //giving user choice
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: "); //geting choice
    scanf("%d",&choice);


    switch(choice)
    {
      case 1:
        r1 = a+b;
        printf("The Addition is %d.",r1);
        break;
      case 2:
        r1 = a-b;
        printf("The Subtraction is %d.",r1);
        break;
      case 3:
        r1 = a*b;
        printf("The Multiplication is %d.",r1);
        break;
      case 4:
        r1 = a/b;
        printf("The Division is %d.",r1);
        break;
      case 5:
        r1 = a%b;
        printf("The Remainder is %d.",r1);
        break;
      default:
        printf("Please enter a valid choice.");
        break;
    }
    return 0;
}
