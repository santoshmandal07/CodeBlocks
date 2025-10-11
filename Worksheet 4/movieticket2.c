#include <stdio.h>

int main()
{
    int num;
    float ticketPrice=0;

    printf("Enter number of tickets: ");
    scanf("%d",&num);

    if(num<=4)
    {
        ticketPrice = num*200;
    }

    else if(num>=5 && num<=9)
    {
        ticketPrice = num*180;
    }

    else
    {
        ticketPrice = num*160;
    }

    printf("Total cost for %d tickets: Rs.%.2f",num,ticketPrice);
    return 0;
}
