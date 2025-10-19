#include <stdio.h>

int main()
{
    int size, i;
    int max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[100];

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both max and min
    max = arr[0];
    min = arr[0];

    // Traverse the array
    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
