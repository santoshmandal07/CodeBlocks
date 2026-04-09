#include <stdio.h>
#define pi 3.14 //defining the value of pi
int main()
{
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("The area of the circle is: %.2f\n",area);
    printf("The perimeter of the circle is: %.2f",perimeter);
    return 0;
}