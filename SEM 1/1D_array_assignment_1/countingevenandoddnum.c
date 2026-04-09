#include <stdio.h>

int main()
{
    int i, n;
    int even = 0, odd = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    //counting the odd and even
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }
    printf("Total number of even elements are: %d\n",even);
    printf("Total number of odd elements are: %d\n",odd);

    return 0;
}
