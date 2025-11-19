#include <stdio.h>

int main()
{
    int i, num;
    int arr[]={10,15,20,25,30,35,40,45,50};
    printf("Elements of the array are: \n");
    for(i=0; i<9; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter a number to search its index number: \n");
    scanf("%d",&num);
    for(i=0; i<9; i++)
    {
        if(arr[i]==num)
        {
            printf("The index number of the element is: %d",i);
            return 0;
        }
    }

    for(i=0; i<9; i++)
    {
        if(arr[i]!=num)
        {
            printf("Element not found!");
            break;
        }
    }
    return 0;
}
