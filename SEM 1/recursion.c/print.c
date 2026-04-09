#include <stdio.h>

void greeting()
{
    printf("I LOVE YOU");
    greeting();
}
int main()

{
    greeting();
    return 0;
}