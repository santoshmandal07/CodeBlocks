#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the number of elements in each array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2 * n];

    // Input first array
    printf("Enter %d elements for the first array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter %d elements for the second array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge two arrays
    for(i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
        merged[i + n] = arr2[i];
    }

    // Sort merged array in descending order
    for(i = 0; i < 2 * n - 1; i++)
    {
        for(j = i + 1; j < 2 * n; j++)
        {
            if(merged[i] < merged[j])
            {
                temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    // Print sorted merged array
    printf("\nMerged array in descending order:\n");
    for(i = 0; i < 2 * n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
