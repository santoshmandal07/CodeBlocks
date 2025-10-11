#include <stdio.h>

int main()
{
    int n, i, prime=1;
    printf("Enter the number you want to check: ");
    scanf("%d",&n);

    if(n<=1)
    {
        prime=0;
    }
    else
    {
        for(i=2; i<n/2; i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
        }
    }

    if(prime==1)
    {
        printf("It is a prime number.");
    }
    else
    {
        printf("It is not a prime number.");
    }
    return 0;
}
