#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];  // declare two arrays of same size

    printf("Enter %d elements in the first array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nElements of the first array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n\nElements of the second (copied) array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
