#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node* insertatbeginning(Node *head, int data){
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = head;
    return n;
}

Node* insertatend(Node *head, int data){
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    if(head == NULL){
        return n; // If the list is empty, return the new node as the head
    }
    Node *current = head;
    while(current->next != NULL){
        current = current->next; // Traverse to the end of the list
    }
    current->next = n; // Link the last node to the new node
    return head; // Return the unchanged head pointer
}

Node* insertatanypoint(Node *head, int data, int position){
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    if(position == 0){
        n->next = head; // Insert at the beginning
        return n; // New node becomes the new head
    }
    Node *current = head;
    for(int i = 0; i < position - 1 && current != NULL; i++){
        current = current->next; // Traverse to the node before the desired position
    }
    if(current == NULL){
        printf("Position out of bounds\n");
        free(n); // Free the allocated node if position is invalid
        return head; // Return the unchanged head pointer
    }
    n->next = current->next; // Link the new node to the next node
    current->next = n; // Link the previous node to the new node
    return head; // Return the unchanged head pointer
}

Node* createnode(int data){
    Node *n = (Node*)malloc(sizeof(Node));
    printf("Please enter the data for the node: ");
    scanf("%d", &n->data);
    n->next = NULL;
    return n;
}

void printlist(Node *head){
    Node *current = head;
    printf("The data in the nodes are: ");
    while(current != NULL){
        printf("%d-->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main(){
    Node *n1, *n2, *n3, *n4, *head;

    n1 = createnode(27);
    head = n1; // Set head to the first node
    n2 = createnode(28);
    n1->next = n2; // Link n1 to n2
    n3 = createnode(29);
    n2->next = n3; // Link n2 to n3
    n4 = createnode(30);
    n3->next = n4; // Link n3 to n4
    
    printlist(head);
    int newdata;    
    printf("Enter the data to be inserted at the beginning: ");
    scanf("%d", &newdata);  
    head = insertatbeginning(head, newdata); // Update head after insertion
    printlist(head);

    printf("Enter the data to be inserted at the end: ");
    scanf("%d", &newdata);
    head = insertatend(head, newdata); // Update head after insertion
    printlist(head);

    int position;
    printf("Enter the data to be inserted at any point: ");     
    scanf("%d", &newdata);
    printf("Enter the position to insert the new node: ");
    scanf("%d", &position);
    head = insertatanypoint(head, newdata, position); // Update head after insertion
    printlist(head);

    return 0;

}
