#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == element) {
            return mid;
        }
        else if (arr[mid] < element) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], sortedArr[100];
    int size = 0;
    int choice, element, result;
    
    printf("\n--- Linear Search and Binary Search ---\n");
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 100) {
        printf("Invalid size!\n");
        return 1;
    }
    
    printf("\nEnter %d elements for unsorted array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter %d elements for sorted array (must be in ascending order):\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &sortedArr[i]);
    }
    
    while (1) {
        printf("\n--- Linear Search and Binary Search ---\n");
        printf("1. Linear Search (Unsorted Array)\n");
        printf("2. Binary Search (Sorted Array)\n");
        printf("3. Display Unsorted Array\n");
        printf("4. Display Sorted Array\n");
        printf("5. Exit\n");
        displayList(head);
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\nUnsorted Array: ");
                display(arr, size);
                printf("Enter element to search: ");
                scanf("%d", &element);
                result = linearSearch(arr, size, element);
                if (result != -1) {
                    printf("Element %d found at index %d\n", element, result);
                } else {
                    printf("Element %d not found\n", element);
                }
                break;
                
            case 2:
                printf("\nSorted Array: ");
                display(sortedArr, size);
                printf("Enter element to search: ");
                scanf("%d", &element);
                result = binarySearch(sortedArr, size, element);
                if (result != -1) {
                    printf("Element %d found at index %d\n", element, result);
                } else {
                    printf("Element %d not found\n", element);
                }
                break;
                
            case 3:
                display(arr, size);
                break;
                
            case 4:
                display(sortedArr, size);
                break;
                
            case 5:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
