#include<stdio.h>
#include<stdlib.h>

struct node{
    int cof_data;
    struct node *next;
};

typedef struct node NODE;

NODE *head1=NULL, *head2=NULL, *head3=NULL;

void createpolynomial_list1(int value){
    NODE *n= (NODE*)malloc(sizeof(NODE));
    n->cof_data=value;
    n->next = NULL;

    if(head1==NULL){
        head1=n;
    }
    else{
        NODE *temp;
        temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}
void createpolynomial_list2(int value){
    NODE *n= (NODE*)malloc(sizeof(NODE));
    n->cof_data=value;
    n->next = NULL;

    if(head2==NULL){
        head2=n;
    }
    else{
        NODE *temp;
        temp=head2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}
void addpolynomial_list(){
    NODE *t1,*t2;
    t1=head1;
    t2=head2;

    while(t1!=NULL && t2!=NULL){
            NODE *n= (NODE*)malloc(sizeof(NODE));
            n->cof_data=t1->cof_data + t2->cof_data;
            n->next = NULL;

            t1=t1->next;
            t2=t2->next;

            if(head3==NULL){
                head3=n;
            }
            else{
                NODE *temp;
                temp=head3;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=n;
            }

    }

}

void displaypolylist(NODE *head, int n){
    NODE *temp;
    temp=head;
    printf("\nThe polynomial terms are: \n");

    while(temp!=NULL){
            if(n>0){
                printf("%dx^%d+",temp->cof_data,n);
            }
            else{
                printf("%dx^%d",temp->cof_data,n);
            }
        temp=temp->next;
        n--;
    }


}

int main(){

int d,val;
printf("Please enter the degree of the polynomial:\n");
scanf("%d", &d);
printf("Please enter the 1st polynomial co-officiants:\n");
for(int i=d;i>=0;i--){
    printf("%d degree term's co-officiant: ",i);
    scanf("%d",&val);
    createpolynomial_list1(val);
}
printf("Please enter the 2nd polynomial co-officiants:\n");
for(int i=d;i>=0;i--){
    printf("%d degree term: ",i);
    scanf("%d",&val);
    createpolynomial_list2(val);
}

addpolynomial_list();

displaypolylist(head1,d);
displaypolylist(head2,d);
displaypolylist(head3,d);

return 0;
}
