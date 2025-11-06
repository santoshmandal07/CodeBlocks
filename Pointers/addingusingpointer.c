#include <stdio.h>

int main()
{
    int a, b, sum;
    int *p;
    int *t;
    p=&a;
    t=&b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    sum = *p + *t;
    printf("The sum of %d and %d is %d",a,b,sum);
    printf("The address of a and b is %p %p",p,t);
    return 0;
}
