#include <stdio.h>

int main()
{
    int even[100], odd[100];
    int size, i, evenCount = 0, oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd numbers
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Display even numbers
    printf("\nEven elements: ");
    for(i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\nOdd elements: ");
    for(i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
