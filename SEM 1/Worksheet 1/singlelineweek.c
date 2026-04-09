#include <stdio.h>

int main()
{
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i = 0; i < 7; i++)
    {
        printf("%s", days[i]);
        if(i<6)
        {
            printf(", ");
        }
    }

    return 0;
}
