#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr1[100], arr2[100], arr3[100];
    int size = 0;
    int choice;
    
    printf("\n--- Sorting Algorithms ---\n");
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 100) {
        printf("Invalid size!\n");
        return 1;
    }
    
    printf("\nEnter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
        arr3[i] = arr1[i];
    }
    
    while (1) {
        printf("\n--- Sorting Algorithms ---\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\n--- Bubble Sort ---\n");
                printf("Before: ");
                display(arr1, size);
                bubbleSort(arr1, size);
                printf("After:  ");
                display(arr1, size);
                // Reset array
                memcpy(arr1, (int[]){64, 34, 25, 12, 22, 11, 90}, sizeof(int) * size);
                break;
                
            case 2:
                printf("\n--- Selection Sort ---\n");
                printf("Before: ");
                display(arr2, size);
                selectionSort(arr2, size);
                printf("After:  ");
                display(arr2, size);
                // Reset array
                memcpy(arr2, (int[]){64, 34, 25, 12, 22, 11, 90}, sizeof(int) * size);
                break;
                
            case 3:
                printf("\n--- Insertion Sort ---\n");
                printf("Before: ");
                display(arr3, size);
                insertionSort(arr3, size);
                printf("After:  ");
                display(arr3, size);
                // Reset array
                memcpy(arr3, (int[]){64, 34, 25, 12, 22, 11, 90}, sizeof(int) * size);
                break;
                
            case 4:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
