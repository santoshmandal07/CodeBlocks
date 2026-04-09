#include <stdio.h>

int main()
{
    char *days[] = {"Sunday", "Monday", "Tuesday","Wednesday", "Thursday","Friday", "Saturday"};
    for(int i = 0; i < 7; i++)
    {
        printf("%s\n", days[i]);
    }

    return 0;
}
