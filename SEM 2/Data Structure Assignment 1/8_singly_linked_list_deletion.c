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
    return head;
}

Node *deleteAtBeginning(Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    
    printf("Deleted %d from the beginning\n", head->data);
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteAtEnd(Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    
    if (head->next == NULL) {
        printf("Deleted %d from the end\n", head->data);
        free(head);
        return NULL;
    }
    
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    printf("Deleted %d from the end\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
    return head;
}

Node *deleteElement(Node *head, int data) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    
    // If element is at the beginning
    if (head->data == data) {
        printf("Deleted element %d\n", data);
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    Node *temp = head;
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }
    
    if (temp->next == NULL) {
        printf("Element %d not found!\n", data);
        return head;
    }
    
    printf("Deleted element %d\n", data);
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    return head;
}

int main() {
    Node *head = NULL;
    int choice, data, numElements = 0;
    
    printf("\n--- Singly Linked List - Deletion Operations ---\n");
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
        printf("\n--- Singly Linked List - Deletion Operations ---\n");
        printf("1. Display List\n");
        printf("2. Delete at Beginning\n");
        printf("3. Delete at End\n");
        printf("4. Delete Specific Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displayList(head);
                break;
                
            case 2:
                head = deleteAtBeginning(head);
                displayList(head);
                break;
                
            case 3:
                head = deleteAtEnd(head);
                displayList(head);
                break;
                
            case 4:
                printf("Enter element to delete: ");
                scanf("%d", &data);
                head = deleteElement(head, data);
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
