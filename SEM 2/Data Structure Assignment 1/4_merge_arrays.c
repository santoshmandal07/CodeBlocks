#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

void simpleMerge(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int k = 0;
    
    for (int i = 0; i < size1; i++) {
        merged[k++] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
        merged[k++] = arr2[i];
    }
}

int main() {
    int arr1[50], arr2[50], merged[100];
    int size1 = 0, size2 = 0;
    int choice;
    
    printf("\n--- Merge Two Arrays ---\n");
    printf("Enter the number of elements in Array 1: ");
    scanf("%d", &size1);
    
    if (size1 <= 0 || size1 > 50) {
        printf("Invalid size!\n");
        return 1;
    }
    
    printf("Enter %d elements for Array 1:\n", size1);
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("\nEnter the number of elements in Array 2: ");
    scanf("%d", &size2);
    
    if (size2 <= 0 || size2 > 50) {
        printf("Invalid size!\n");
        return 1;
    }
    
    printf("Enter %d elements for Array 2:\n", size2);
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    while (1) {
        printf("\n--- Merge Two Arrays ---\n");
        printf("\n1. Merge Sorted Arrays (Sorted Merge)\n");
        printf("2. Merge Arrays (Simple Concatenation)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\n--- Sorted Merge ---\n");
                printf("Array 1: ");
                display(arr1, size1);
                printf("Array 2: ");
                display(arr2, size2);
                mergeArrays(arr1, size1, arr2, size2, merged);
                printf("Merged Array (Sorted): ");
                display(merged, size1 + size2);
                break;
                
            case 2:
                printf("\n--- Simple Merge (Concatenation) ---\n");
                printf("Array 1: ");
                display(arr1, size1);
                printf("Array 2: ");
                display(arr2, size2);
                simpleMerge(arr1, size1, arr2, size2, merged);
                printf("Merged Array: ");
                display(merged, size1 + size2);
                break;
                
            case 3:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
