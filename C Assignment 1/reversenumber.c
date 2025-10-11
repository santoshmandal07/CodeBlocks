#include <stdio.h>

int main()
{
    int n, rem, s=0;
    printf("Enter the number you want to reverse: ");
    scanf("%d",&n);

    printf("The reverse of %d is: ",n);
    while (n>0)
    {
        rem = n%10;
        n = n/10;
        printf("%d",rem);
    }
    return 0;
}
