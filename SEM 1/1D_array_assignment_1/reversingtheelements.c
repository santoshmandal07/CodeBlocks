#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements of the array in reverse form are: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
