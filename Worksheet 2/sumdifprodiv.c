#include <stdio.h>

int main()
{
    int a, b, s, dif, p;
    float div;

    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    printf("\n\n");

    s=a+b;
    dif=a-b;
    p=a*b;
    div=a/b;

    printf("Sum of %d and %d is: %d\n",a,b,s);
    printf("Difference of %d and %d is: %d\n",a,b,dif);
    printf("Product of %d and %d is: %d\n",a,b,p);
    printf("Quotient of %d and %d is: %.2f\n",a,b,div);

    return 0;
}
