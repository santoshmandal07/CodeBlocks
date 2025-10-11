#include <stdio.h>

int main()
{
    int a1, a2, i;
    printf("Enter the starting value: ");
    scanf("%d",&a1);

    printf("Enter the ending value: ");
    scanf("%d",&a2);

    printf("The odd numbers in the given range are: \n");
    for (i=a1; i<=a2; i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
