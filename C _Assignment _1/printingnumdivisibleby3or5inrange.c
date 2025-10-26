#include <stdio.h>

int main()
{
    int start, end, i;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    printf("Numbers divisible by 3 or 5 between %d and %d are:\n", start, end);
    i = start;
    while(i <= end)
    {

        if(i%3==0 || i%5==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}