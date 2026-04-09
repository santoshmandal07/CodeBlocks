#include <stdio.h>

int main()
{
    int n, i, value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   // extra space for new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &value);

    // Find position to insert
    for(i = 0; i < n; i++)
    {
        if(arr[i] > value)
        {
            pos = i;
            break;
        }
    }

    // If value is greater than all elements
    if(i == n)
        pos = n;

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos] = value;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
