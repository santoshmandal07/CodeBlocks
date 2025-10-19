#include <stdio.h>

int main()
{
    int size, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[100];

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order (using simple nested loop)
    for(i = 0; i < size - 1; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray in ascending order: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
