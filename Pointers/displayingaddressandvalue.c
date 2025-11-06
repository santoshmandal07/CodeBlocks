#include <stdio.h>

int main()
{
    int x;
    int *p;
    p=&x;
    printf("Enter the value: ");
    scanf("%d",&x);
    printf("Value: %d\n",*p);
    printf("Address: %d\n",p);
    return 0;
}
