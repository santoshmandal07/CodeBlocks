#include <stdio.h>

int main()
{
    int a1, a2, a3;
    
    //taking the values of the angles
    printf("Enter the first angle: ");
    scanf("%d",&a1);

    printf("Enter the second angle: ");
    scanf("%d",&a2);

    printf("Enter the third angle: ");
    scanf("%d",&a3);
    
    //checking if any of the angle is zero or not
    if(a1>0 || a2>0 || a3>0)
    {
        printf("One of the angle is invalid.\n");
    }
    
    //checking triangle is valid or not
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
