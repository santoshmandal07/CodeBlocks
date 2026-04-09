#include <stdio.h>

int main()
{
    int n, i, j, count=0;
    printf("Enter the number of elements for the array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf("Number of duplicate elements are %d",count);
    return 0;
}
