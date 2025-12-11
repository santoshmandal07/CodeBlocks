#include <stdio.h>

int main()
{
    int num;
    int max = 0, min = num, avg, sum = 0;
    int count=0;
    printf("Enter the numbers: \n");
    while(1)
    {
        scanf("%d",&num);
        if(num == -1)
        {
            printf("The Maximum number among all of them is: %d\n",max);
            printf("The Minimum number among all of them is: %d\n",min);
            printf("The sum of all the numbers is: %d\n",sum);
            printf("The avg of all the numbers is: %d\n",avg);
            return 0;
        }

        if(num > max)
        {
            max = num;
        }

        if(num < min)
        {
            min = num;
        }

        sum += num;
        count ++;
        avg = sum / count;
    }
    return 0;
}