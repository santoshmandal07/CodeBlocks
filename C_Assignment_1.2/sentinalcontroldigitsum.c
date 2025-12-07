#include <stdio.h>

int main()
{
    int num, sum=0;

    printf("Enter the digits to sum(enter -1 to stop): \n");

    while (1)
    {
        scanf("%d",&num);
        if(num == -1)
        {
            printf("The sum of the digits is %d",sum);
            return 0;
        }

        sum += num;
    }
    return 0;
}
