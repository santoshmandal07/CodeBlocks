#include <stdio.h>

int main()
{
    int n, i,tri;
    int tri1=0; 
    int tri2=1;
    int tri3=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Value of n should be greater than 0.");
    }

    printf("%d %d %d ",tri1,tri2,tri3);
    
    for(i=1; i<=n-2; i++)
    {
        tri = tri1 + tri2 + tri3;
        tri1 = tri2;
        tri2 = tri3;
        tri3 = tri;
        printf("%d ",tri);
    }
    return 0;
}