#include <stdio.h>

int main()
{
    int num, i;
    int countA=0, countB=0, countC=0, countD=0, countF=0;
    printf("Enter the marks of the students and enter \"-1\" to stop: ");
    while(1)
    {
        scanf("%d",&num);
        {
            if(num == -1)
            {
                printf("A:\n");
                for(i=1; i<=countA; i++)
                {
                    printf("*");
                }
                printf("\n");

                printf("B:\n");
                for(i=1; i<=countB; i++)
                {
                    printf("*");
                }
                printf("\n");

                printf("C:\n");
                for(i=1; i<=countC; i++)
                {
                    printf("*");
                }
                printf("\n");

                printf("D:\n");
                for(i=1; i<=countD; i++)
                {
                    printf("*");
                }
                printf("\n");

                printf("F:\n");
                for(i=1; i<=countF; i++)
                {
                    printf("*");
                }
                printf("\n");

                return 0;
            }

        }
        switch (num / 10) 
        {
            case 10:  // for 100  
            case 9:   // 90–99
            case 8:   // 80–89
                countA++;
                break;

            case 7:   // 70–79
            case 6:   // 60–69
                countB++;
                break;

            case 5:   // 50–59
                countC++;
                break;

            case 4:   // 40–49
                countD++;
                break;

            default:  // 0–39
                countF++;
                break;
        }
    }
    return 0;
}