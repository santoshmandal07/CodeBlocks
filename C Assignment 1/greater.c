#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers you want to compare: ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("The maximum number is: %d",a);

    else
        printf("The maximum number is: %d",b);

    return 0;
}
