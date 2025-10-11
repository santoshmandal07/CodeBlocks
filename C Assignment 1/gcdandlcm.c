#include <stdio.h>

int main()
{
    int i, h1, h2, hcf, t, l1, l2, lcm;
    char choice;
    L:
    printf("What do you want to do G.C.D. or L.C.M? (G/L)");
    scanf("%c",&choice);

    switch(choice)
    {
    case 'G':
    case 'g':
        printf("Enter the two numbers: ");
        scanf("%d%d",&h1,&h2);

        if(h1>h2)
        {
            t = h1;
            h1 = h2;
            h2 = t;
        }
        printf("G.C.D. of %d and %d is %d",h1,h2,hcf);
        for (i=1; i<=h1; i++)
        {
            if(h1%i==0 && h2%i==0)
            {
                hcf = i;
                break;
            }
        }

    case 'L':
    case 'l':
        printf("Enter the two numbers: ");
        scanf("%d%d",&l1,&l2);

        printf("L.C.M. of %d and %d is %d",l1,l2,lcm);
        for (i=1; i<=l1*l2; i++)
        {
            if(l1%i==0 && l2%i==0)
            {
                lcm = i;
                break;
            }
        }

    default :
        printf("Invalid choice! try again..");
        goto L;

    }
    return 0;
}
