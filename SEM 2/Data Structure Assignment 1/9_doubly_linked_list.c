#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void displayListForward(Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Forward: NULL <-> ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void displayListBackward(Node *tail) {
    if (tail == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Backward: NULL <-> ");
    while (tail != NULL) {
        printf("%d <-> ", tail->data);
        tail = tail->prev;
    }
    printf("NULL\n");
}

Node *getTail(Node *head) {
    if (head == NULL) return NULL;
    while (head->next != NULL) {
        head = head->next;
    }
    return head;
}

Node *insertAtEnd(Node *head, int data) {
    Node *newNode = createNode(data);
    
    if (head == NULL) {
        return newNode;
    }
    
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

Node *insertAtBeginning(Node *head, int data) {
    Node *newNode = createNode(data);
    
    if (head == NULL) {
        return newNode;
    }
    
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}

Node *insertAtPosition(Node *head, int data, int position) {
    if (position < 1) {
        printf("Position must be >= 1\n");
        return head;
    }
    
    if (position == 1) {
        return insertAtBeginning(head, data);
    }
    
    Node *temp = head;
    int count = 1;
    
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }
    
    if (temp == NULL) {
        printf("Position out of range!\n");
        return head;
    }
    
    Node *newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    
    printf("Inserted %d at position %d\n", data, position);
    return head;
}

int searchElement(Node *head, int data) {
    int position = 1;
    
    while (head != NULL) {
        if (head->data == data) {
            return position;
        }
        head = head->next;
        position++;
    }
    
    return -1;
}

int main() {
    Node *head = NULL;
    int choice, data, position, numElements = 0;
    
    printf("\n--- Doubly Linked List Operations ---\n");
    printf("Enter the number of initial elements: ");
    scanf("%d", &numElements);
    
    if (numElements > 0) {
        printf("Enter %d elements:\n", numElements);
        for (int i = 0; i < numElements; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &data);
            head = insertAtEnd(head, data);
        }
    }
    
    while (1) {
        printf("\n--- Doubly Linked List Operations ---\n");
        printf("1. Display List (Forward)\n");
        printf("2. Display List (Backward)\n");
        printf("3. Insert at Beginning\n");
        printf("4. Insert at End\n");
        printf("5. Insert at Position\n");
        printf("6. Search for Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displayListForward(head);
                break;
                
            case 2:
                displayListBackward(getTail(head));
                break;
                
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                printf("Inserted %d at the beginning\n", data);
                displayListForward(head);
                break;
                
            case 4:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                printf("Inserted %d at the end\n", data);
                displayListForward(head);
                break;
                
            case 5:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                head = insertAtPosition(head, data, position);
                displayListForward(head);
                break;
                
            case 6:
                printf("Enter element to search: ");
                scanf("%d", &data);
                position = searchElement(head, data);
                if (position != -1) {
                    printf("Element %d found at position %d\n", data, position);
                } else {
                    printf("Element %d not found!\n", data);
                }
                break;
                
            case 7:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
