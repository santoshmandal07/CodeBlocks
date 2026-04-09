#include <stdio.h>

int main()
{
    int n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   // extra space for new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the new value: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos - 1] = value;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
