#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

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

    return 0;

}
