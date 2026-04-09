#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Function to take inputs in array
void takeInput(int arr[], int *n) {
    printf("Enter the number of elements: ");
    scanf("%d", n);
    
    if (*n <= 0 || *n > MAX_SIZE) {
        printf("Invalid size! Size should be between 1 and %d\n", MAX_SIZE);
        *n = 0;
        return;
    }
    
    printf("Enter %d elements:\n", *n);
    for (int i = 0; i < *n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print array
void printArray(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty!\n");
        return;
    }
    
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function for right shift (insert -1 at beginning, drop last element)
void rightShift(int arr[], int n) {
    if (n <= 0) return;
    
    // Shift all elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = -1;  // First position becomes -1
    
    printf("Array after right shift: ");
    printArray(arr, n);
}

// Function for left shift (drop first element, insert -1 at end)
void leftShift(int arr[], int n) {
    if (n <= 0) return;
    
    // Shift all elements to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = -1;  // Last position becomes -1
    
    printf("Array after left shift: ");
    printArray(arr, n);
}

// Function for linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

// Function for binary search (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Return -1 if not found
}

// Function for bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Array after bubble sort: ");
    printArray(arr, n);
}

// Function for selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    
    printf("Array after selection sort: ");
    printArray(arr, n);
}

// Function for insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
    printf("Array after insertion sort: ");
    printArray(arr, n);
}

// Main function with menu driven program
int main() {
    int arr[MAX_SIZE];
    int n = 0;
    int choice, key, index;
    int arrCopy[MAX_SIZE];
    
    while (1) {
        printf("\n========== ARRAY OPERATIONS MENU ==========\n");
        printf("1. Take Input\n");
        printf("2. Print Array\n");
        printf("3. Right Shift\n");
        printf("4. Left Shift\n");
        printf("5. Linear Search\n");
        printf("6. Binary Search\n");
        printf("7. Bubble Sort\n");
        printf("8. Selection Sort\n");
        printf("9. Insertion Sort\n");
        printf("10. Exit\n");
        printf("==========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                takeInput(arr, &n);
                break;
                
            case 2:
                printArray(arr, n);
                break;
                
            case 3:
                if (n > 0) {
                    rightShift(arr, n);
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 4:
                if (n > 0) {
                    leftShift(arr, n);
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 5:
                if (n > 0) {
                    printf("Enter element to search: ");
                    scanf("%d", &key);
                    index = linearSearch(arr, n, key);
                    if (index != -1) {
                        printf("Element found at index: %d\n", index);
                    } else {
                        printf("Element not found!\n");
                    }
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 6:
                if (n > 0) {
                    printf("Enter element to search: ");
                    scanf("%d", &key);
                    // Create sorted copy for binary search
                    for (int i = 0; i < n; i++) {
                        arrCopy[i] = arr[i];
                    }
                    bubbleSort(arrCopy, n);
                    index = binarySearch(arrCopy, n, key);
                    if (index != -1) {
                        printf("Element found at index: %d (in sorted array)\n", index);
                    } else {
                        printf("Element not found!\n");
                    }
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 7:
                if (n > 0) {
                    bubbleSort(arr, n);
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 8:
                if (n > 0) {
                    selectionSort(arr, n);
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 9:
                if (n > 0) {
                    insertionSort(arr, n);
                } else {
                    printf("Array is empty! Please take input first.\n");
                }
                break;
                
            case 10:
                printf("Exiting program. Goodbye!\n");
                return 0;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
