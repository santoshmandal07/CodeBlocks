#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the size of the arrays:\n");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr3[2*n];

    printf("Enter %d elements of first array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];   // Copy first array into merged array
    }

    printf("Enter %d elements of second array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
        arr3[i + n] = arr2[i];  // Copy second array into merged array
    }

    // Sorting merged array in descending order
    for(i = 0; i < 2*n - 1; i++)
    {
        for(j = i + 1; j < 2*n; j++)
        {
            if(arr3[i] < arr3[j])
            {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    printf("Merged array in descending order:\n");
    for(i = 0; i < 2*n; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
    
}
