#include <stdio.h>

int lcm(int x, int y)
{
    int lcm;
    int i;
    for(i=(x>y)?x:y; i<=x*y; i++)
    {
        if(i%x==0 && i%y==0)
        {
            lcm=i;
            break;
        }
    }
    printf("The LCM is: %d",lcm);
}

int gcd(int x, int y)
{
    int gcd;
    int i;
    for(i=1; i<=x && i<=y; i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
    }
    printf("The GCD is: %d",gcd);
}

int main()
{
    int a, b, choice;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("1. LCM\n");
    printf("2. GCD\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
         case 1:
             lcm(a,b);
             break;
        case 2:
             gcd(a,b);
             break;
        default:
             printf("Enter a valid choice!");
             break;
    }
    return 0;
}
