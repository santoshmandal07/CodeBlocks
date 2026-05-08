#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push operation - adds an element to the top of the stack
void push(int item) {
    if (top >= MAX - 1) {
        printf("Stack overflow! Cannot push %d\n", item);
    } else {
        stack[++top] = item;
        printf("Pushed: %d\n", item);
    }
}

// Pop operation - removes and returns the top element
void pop() {
    if (top < 0) {
        printf("Stack underflow! No element to pop\n");
    } else {
        printf("Popped: %d\n", stack[top--]);
    }
}

// Peek operation - displays the top element without removing it
void peek() {
    if (top < 0) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

// Display all elements in the stack
void display() {
    if (top < 0) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Check if stack is empty
int isEmpty() {
    return top < 0;
}

// Check if stack is full
int isFull() {
    return top >= MAX - 1;
}

// Get the size of the stack
int getSize() {
    return top + 1;
}

// Main function with menu-driven operations
int main() {
    int choice, item;
    
    printf("========== STACK OPERATIONS ==========\n");
    printf("Stack implemented using Array (MAX SIZE: %d)\n\n", MAX);
    
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Check if Empty\n");
        printf("6. Check if Full\n");
        printf("7. Get Stack Size\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (isFull()) {
                    printf("Stack is full! Cannot push more elements.\n");
                } else {
                    printf("Enter element to push: ");
                    scanf("%d", &item);
                    push(item);
                }
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                peek();
                break;
                
            case 4:
                display();
                break;
                
            case 5:
                if (isEmpty()) {
                    printf("Stack is empty!\n");
                } else {
                    printf("Stack is not empty!\n");
                }
                break;
                
            case 6:
                if (isFull()) {
                    printf("Stack is full!\n");
                } else {
                    printf("Stack is not full! Current size: %d/%d\n", getSize(), MAX);
                }
                break;
                
            case 7:
                printf("Stack size: %d/%d\n", getSize(), MAX);
                break;
                
            case 8:
                printf("Exiting... Thank you!\n");
                return 0;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}