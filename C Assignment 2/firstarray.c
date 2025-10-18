#include <stdio.h>

int main()
{
    int n, i;
    printf("How many numbers you want in this array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements in the array:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The elements in this array are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
