//program to implement simple queue using array
#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue overflow! Cannot enqueue %d\n", value);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = value;
    printf("%d enqueued to queue\n", value);
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow! Cannot dequeue\n");
        return -1;
    }
    int value = queue[front++];
    printf("%d dequeued from queue\n", value);
    return value;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements (front to rear): ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Front element: %d\n", queue[front]);
}

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return rear == MAX - 1;
}

int main() {
    int choice, value;
    
    while (1) {
        printf("\n===== QUEUE OPERATIONS =====\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Check if Empty\n");
        printf("6. Check if Full\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                if (isEmpty()) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue is not empty!\n");
                }
                break;
            case 6:
                if (isFull()) {
                    printf("Queue is full!\n");
                } else {
                    printf("Queue is not full!\n");
                }
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}