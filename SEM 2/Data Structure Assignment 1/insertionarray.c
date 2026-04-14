#include <stdio.h>  

void insert(int arr[], int n, int pos, int value) {
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return;
    }
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = value;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5; // Current number of elements in the array
    int pos = 2; // Position to insert the new value
    int value = 10; // Value to be inserted

    insert(arr, n, pos, value);
    n++; // Increment the number of elements after insertion

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}