#include <stdio.h>

void myFunction(char name[])
{
    printf("%s\n",name);
}

int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}
