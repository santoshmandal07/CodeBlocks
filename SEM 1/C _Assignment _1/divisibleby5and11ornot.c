#include <stdio.h>
 
int main()
{
    int a;
    printf("Enter the number to check if it is divisible by 5 and 11 both or not: ");
    scanf("%d",&a);

    //checking the number if it is divisible or not
    if(a%5==0 && a%11==0)
    {
        printf("Yes it is.");
    }

    else
    {
        printf("No it is not.");
    }
    return 0;
}