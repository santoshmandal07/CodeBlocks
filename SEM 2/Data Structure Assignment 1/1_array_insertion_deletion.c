#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtPosition(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full!\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
    printf("Element %d inserted at position %d\n", element, position);
}

void deleteAtPosition(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }
    
    printf("Deleted element: %d\n", arr[position]);
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;
    
    printf("--- Array Insertion and Deletion ---\n");
    printf("Enter the number of initial elements: ");
    scanf("%d", &size);
    
    if (size < 0 || size > MAX_SIZE) {
        printf("Invalid size!\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    while (1) {
        printf("\n--- Array Insertion and Deletion ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                display(arr, size);
                break;
            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                insertAtPosition(arr, &size, element, position);
                break;
            case 3:
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                deleteAtPosition(arr, &size, position);
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
