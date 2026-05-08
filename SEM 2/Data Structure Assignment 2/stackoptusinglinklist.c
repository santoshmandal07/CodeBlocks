#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *top = NULL;

// Push operation - adds element to the top of the stack
void push(int item) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    newNode->data = item;
    newNode->next = top;
    top = newNode;
    printf("Pushed: %d\n", item);
}

// Pop operation - removes and returns the top element
void pop() {
    if (top == NULL) {
        printf("Stack underflow! No element to pop\n");
        return;
    }
    
    Node *temp = top;
    printf("Popped: %d\n", temp->data);
    top = top->next;
    free(temp);
}

// Peek operation - displays the top element without removing it
void peek() {
    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d\n", top->data);
    }
}

// Display all elements in the stack
void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    
    printf("Stack elements (top to bottom): ");
    Node *current = top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Check if stack is empty
int isEmpty() {
    return top == NULL;
}

// Get the size of the stack
int getSize() {
    int count = 0;
    Node *current = top;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Free all memory - delete entire stack
void deleteStack() {
    Node *current = top;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    top = NULL;
    printf("Stack deleted successfully!\n");
}

// Main function with menu-driven operations
int main() {
    int choice, item;
    
    printf("========== STACK OPERATIONS USING LINKED LIST ==========\n");
    printf("Stack implemented using Linked List (Dynamic Memory)\n\n");
    
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Check if Empty\n");
        printf("6. Get Stack Size\n");
        printf("7. Delete Stack\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &item);
                push(item);
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
                printf("Stack size: %d\n", getSize());
                break;
                
            case 7:
                deleteStack();
                break;
                
            case 8:
                printf("Cleaning up memory...\n");
                deleteStack();
                printf("Exiting... Thank you!\n");
                return 0;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
