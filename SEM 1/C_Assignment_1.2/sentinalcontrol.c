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
            printf("The number is %d",sum);
            return 0;
        }
        sum = sum * 10 + num;
    }
    return 0;
}
