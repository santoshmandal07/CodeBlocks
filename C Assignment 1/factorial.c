#include <stdio.h>

int main()
{
    int n, i, f=1;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d",&n);

    printf("The factorial of the number is: ");
    for(i=n; i>=1; i--)
    {
        f*=i;
    }
    printf("%d",f);
    return 0;
}
