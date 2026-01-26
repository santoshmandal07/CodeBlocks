#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second smallest element not possible.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
        printf("No second smallest element.\n");
    else
        printf("Second smallest element = %d\n", secondSmallest);

    return 0;
}
