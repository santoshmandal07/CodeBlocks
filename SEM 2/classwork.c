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

int main(){

    int a[N]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int val;

    //inputarray(a);
    printarray(a);



    insertarray(a);
    insertarray(a);
    insertarray(a);
    printarray(a);



return 0;
}
