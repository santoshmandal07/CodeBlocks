#include <stdio.h>

int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 values:\n");
    for(i=0; i<10; i++)
    {
            printf("Enter values: ",i);
          scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }

    }
    /*for(i=0; i<10; i++)
    {
            sum += a[i];
    }*/
    //printf("Your sum of all numbers is: %d\n",sum);
    return 0;
}
