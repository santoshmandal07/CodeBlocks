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

void displayCircularList(Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    printf("Circular List: ");
    Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to %d)\n", head->data);
}

Node *insertAtEnd(Node *head, int data) {
    Node *newNode = createNode(data);
    
    if (head == NULL) {
        newNode->next = newNode;  // Point to itself for circular list
        printf("Inserted %d (first node)\n", data);
        return newNode;
    }
    
    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->next = head;
    printf("Inserted %d at the end\n", data);
    return head;
}

Node *insertAtBeginning(Node *head, int data) {
    Node *newNode = createNode(data);
    
    if (head == NULL) {
        newNode->next = newNode;  // Point to itself
        printf("Inserted %d (first node)\n", data);
        return newNode;
    }
    
    // Find last node
    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    
    newNode->next = head;
    temp->next = newNode;
    printf("Inserted %d at the beginning\n", data);
    return newNode;  // New node becomes the new head
}

Node *insertAtPosition(Node *head, int data, int position) {
    if (position < 1) {
        printf("Position must be >= 1\n");
        return head;
    }
    
    if (position == 1) {
        return insertAtBeginning(head, data);
    }
    
    if (head == NULL) {
        printf("List is empty! Use insertAtBeginning\n");
        return head;
    }
    
    Node *temp = head;
    int count = 1;
    
    do {
        if (count == position - 1) {
            Node *newNode = createNode(data);
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Inserted %d at position %d\n", data, position);
            return head;
        }
        temp = temp->next;
        count++;
    } while (temp != head);
    
    printf("Position out of range!\n");
    return head;
}

Node *deleteFromEnd(Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    
    if (head->next == head) {
        // Only one node
        printf("Deleted %d (last node)\n", head->data);
        free(head);
        return NULL;
    }
    
    Node *temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }
    
    printf("Deleted %d from the end\n", temp->next->data);
    free(temp->next);
    temp->next = head;
    return head;
}

Node *deleteElement(Node *head, int data) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    
    // If element is at the beginning (head)
    if (head->data == data) {
        if (head->next == head) {
            // Only one node
            printf("Deleted %d\n", data);
            free(head);
            return NULL;
        }
        
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        
        printf("Deleted %d\n", data);
        Node *toDelete = head;
        head = head->next;
        temp->next = head;
        free(toDelete);
        return head;
    }
    
    // Search for element in the list
    Node *temp = head;
    do {
        if (temp->next->data == data) {
            printf("Deleted %d\n", data);
            Node *toDelete = temp->next;
            
            if (toDelete->next == head) {
                temp->next = head;
            } else {
                temp->next = toDelete->next;
            }
            free(toDelete);
            return head;
        }
        temp = temp->next;
    } while (temp != head);
    
    printf("Element %d not found!\n", data);
    return head;
}

int searchElement(Node *head, int data) {
    if (head == NULL) {
        return -1;
    }
    
    Node *temp = head;
    int position = 1;
    
    do {
        if (temp->data == data) {
            return position;
        }
        temp = temp->next;
        position++;
    } while (temp != head);
    
    return -1;
}

int main() {
    Node *head = NULL;
    int choice, data, position, numElements = 0;
    
    printf("\n--- Circular Linked List Operations ---\n");
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
        printf("\n--- Circular Linked List Operations ---\n");
        printf("1. Display List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Position\n");
        printf("5. Delete from End\n");
        printf("6. Delete Specific Element\n");
        printf("7. Search Element\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displayCircularList(head);
                break;
                
            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                displayCircularList(head);
                break;
                
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                displayCircularList(head);
                break;
                
            case 4:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                head = insertAtPosition(head, data, position);
                displayCircularList(head);
                break;
                
            case 5:
                head = deleteFromEnd(head);
                displayCircularList(head);
                break;
                
            case 6:
                printf("Enter element to delete: ");
                scanf("%d", &data);
                head = deleteElement(head, data);
                displayCircularList(head);
                break;
                
            case 7:
                printf("Enter element to search: ");
                scanf("%d", &data);
                position = searchElement(head, data);
                if (position != -1) {
                    printf("Element %d found at position %d\n", data, position);
                } else {
                    printf("Element %d not found!\n", data);
                }
                break;
                
            case 8:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
