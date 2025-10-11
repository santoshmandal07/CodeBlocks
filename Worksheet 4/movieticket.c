#include <stdio.h>

int main()
{
    int age, time;
    char format;
    float initial_ticket=0;

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Choose Format(S/D): ");
    scanf("%s",&format);
    printf("Enter the Showtime(HHMM): ");
    scanf("%d",&time);

    if(age<=12)
    {
        initial_ticket = 100;
    }
    else if(age>12 && age<=59)
    {
        initial_ticket = 200;
    }
    else if(age>=60)
    {
        initial_ticket = 150;
    }

    if(format == 'D' || format == 'd')
    {
        initial_ticket += 80;
    }

    if(time>=1800)
    {
        initial_ticket *= 0.85;
    }

    printf("Your Final Ticket Price is: Rs.%.2f",initial_ticket);
    return 0;
}
