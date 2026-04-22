#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void displayList(Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

Node *insertAtBeginning(Node *head, int data) {
    Node *newNode = createNode(data);
    newNode->next = head;
    printf("Inserted %d at the beginning\n", data);
    return newNode;
}

Node *insertAtEnd(Node *head, int data) {
    Node *newNode = createNode(data);
    
    if (head == NULL) {
        printf("Inserted %d at the beginning (list was empty)\n", data);
        return newNode;
    }
    
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted %d at the end\n", data);
    return head;
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
    temp->next = newNode;
    printf("Inserted %d at position %d\n", data, position);
    return head;
}

int main() {
    Node *head = NULL;
    int choice, data, position, numElements = 0;
    
    printf("\n--- Singly Linked List - Insertion Operations ---\n");
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
        printf("\n--- Singly Linked List - Insertion Operations ---\n");
        printf("1. Display List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Position\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displayList(head);
                break;
                
            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                displayList(head);
                break;
                
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                displayList(head);
                break;
                
            case 4:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                head = insertAtPosition(head, data, position);
                displayList(head);
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
