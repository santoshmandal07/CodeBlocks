#include <stdio.h>

int main()
{
    int n, i, j, count = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count duplicate elements
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    printf("\nTotal number of duplicate elements = %d\n", count);

    return 0;
}
