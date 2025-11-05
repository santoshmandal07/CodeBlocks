#include <stdio.h>
int main()
{
    int x, y, gcd, lcm, i;
    printf("Enter 1st number: ");
    scanf("%d",&x);
    printf("Enter 2nd number: ");
    scanf("%d",&y);
    for(i=(x>y)?x:y; i<=x*y; i++)
    {
        if(i%x==0 && i%y==0)
        {
            lcm=i;
            break;
        }
    }
    for(i=1; i<=x && i<=y; i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
    }
    printf("The LCM is: %d\n",lcm);
    printf("The GCD is: %d",gcd);
    return 0;
}