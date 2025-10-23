#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three angles of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b+c==180)
    {
        if (a==0 || b==0 || c==0) //checking if any angle(s) is zero or not
        {
            printf("Triangle is inalid.");
        }

        else
        {
            printf("Triangle is valid.");
        }
    }
    else
    {
        printf("Triangle is invalid.");
    }
    return 0;
}
