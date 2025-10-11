#include <stdio.h>

int main()
{
    float radius, area, perimeter;
    float pi = 3.1416;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("The area of the circle is: %.2f\n",area);
    printf("The perimeter of the circle is: %.2f\n",perimeter);
    return 0;
}
