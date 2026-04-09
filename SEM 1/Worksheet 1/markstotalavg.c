#include <stdio.h>

int main()
{
    int total, m, p, h, e, c;
    float avg;

    printf("Enter the marks of Mathematics: ");
    scanf("%d",&m);
    printf("Enter the marks of Physics: ");
    scanf("%d",&p);
    printf("Enter the marks of Hindi: ");
    scanf("%d",&h);
    printf("Enter the marks of English: ");
    scanf("%d",&e);
    printf("Enter the marks of Chemistry: ");
    scanf("%d",&c);

    total = m + p + h + e + c;
    printf("Total marks obtained: %d\n",total);

    avg = (m + p + h + e + c)/5;
    printf("Average of the marks obtained: %.2f\n",avg);
    return 0;
}
