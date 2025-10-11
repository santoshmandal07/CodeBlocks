#include <stdio.h>

int main()
{
    int a, b, i;
    printf("Enter the starting value: ");
    scanf("%d",&a);

    printf("Enter the ending value: ");
    scanf("%d",&b);

    printf("The numbers divisible by 3 or 5 are: \n");
    for (i=a; i<=b; i++)
    {
        if(i%3==0 || i%5==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
