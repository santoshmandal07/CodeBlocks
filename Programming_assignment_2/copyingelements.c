#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n], arr1[n];
    printf("Enter %d elements for the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
    }

    printf("The elements of the first array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("The elements of the second array after copying is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}