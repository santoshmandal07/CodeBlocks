#include <stdio.h>

int main()
{
    int l, b, area, peri;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&b);

    area = l*b;
    printf("The area of the rectangle is: %d\n",area);

    peri = 2*(l+b);
    printf("The perimeter of the rectangle is: %d\n",peri);

    return 0;
}
