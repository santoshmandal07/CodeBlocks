#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers to find which is maximum: \n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is max.",a);
    }

    else
    {
        printf("%d is max.",b);
    }
    return 0;
}