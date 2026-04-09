#include <stdio.h>

int main()
{
    int size, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nFrequency of each element:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] == -1)   // skip elements already counted
            continue;

        count = 1;
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1; // mark as counted
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}
