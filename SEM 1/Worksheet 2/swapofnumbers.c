#include <stdio.h>

int main()
{
    int a,b,t=0;
    printf("Enter the value of a:  ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Before swaping, the value of a and b was %d and %d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("After swaping, the value of a and b is %d and %d\n",a,b);
    return 0;
}
