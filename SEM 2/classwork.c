#include <stdio.h>

#define N 10

void inputarray(int a[]){
    printf("enter the  %d elements:",N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
}

void printarray(int a[]){
    printf("the array element are: \n");
    for(int i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
}

int isFull(int a[]){
    for(int i=0; i<N;i++)
    {
        if(a[i]==-1)
        {
            return 0; //false
        }

    }
    return 1; //true

}

void insertarray(int a[]){

    int val;

    printf("Please enter an element to insert: ");
    scanf("%d",&val);

    if(isFull(a)){
        printf("The array is full. Can't insert the element.");
    }
    else{
        for(int i=0;i<N;i++)
        {
            if(a[i]==-1)
            {
                a[i] = val;
                break;  // Insert only one element and exit
            }
        }
        printf("Element inserted successfully.\n");
    }
}

void updatearray(int a[]){
    int index, val;
    
    printf("Please enter the index to update (0-%d): ", N-1);
    scanf("%d", &index);
    
    if(index < 0 || index >= N){
        printf("Invalid index! Index should be between 0 and %d.\n", N-1);
        return;
    }
    
    if(a[index] == -1){
        printf("Position is empty! Can't update.\n");
        return;
    }
    
    printf("Please enter the new value: ");
    scanf("%d", &val);
    
    a[index] = val;
    printf("Element updated successfully.\n");
}

int main(){

    int a[N]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int val;

    //inputarray(a);
    printarray(a);

    insertarray(a);
    insertarray(a);
    insertarray(a);
    printarray(a);
    
    updatearray(a);
    printarray(a);

return 0;
}
