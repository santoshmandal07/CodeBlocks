#include <stdio.h>

int main()
{
    int n,i, sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements for the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    printf("The elements of the array are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The sum of the elements of the array is %d.",sum);
}