#include <stdio.h>

int main()
{
    int a1, a2, a3;
    printf("Enter the first angle: ");
    scanf("%d",&a1);

    printf("Enter the second angle: ");
    scanf("%d",&a2);

    printf("Enter the third angle: ");
    scanf("%d",&a3);

    if(a1+a2+a3==180)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is invalid.");
    }
    return 0;
}
