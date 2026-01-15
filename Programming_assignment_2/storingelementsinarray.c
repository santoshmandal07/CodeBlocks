#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements in the array are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}