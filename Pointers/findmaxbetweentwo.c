#include <stdio.h>

int main()
{
    int a, b;
    int *p;
    int *t;
    p=&a;
    t=&b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    if(*p>*t)
        printf("%d is max",*p);
    else
        printf("%d is max",*t);

    return 0;
}
