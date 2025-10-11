#include <stdio.h>

int main()
{
    int age;
    char gender, martial_status;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your gender(M/F): ");
    scanf("%s",&gender);
    printf("Enter your martial status(M/U): ");
    scanf("%s",&martial_status);

    if(martial_status == 'M' || (martial_status == 'U' && gender == 'M' && age > 30) || (martial_status == 'U' && gender == 'F' && age > 25))
    {
        printf("Driver is insured.");
    }

    else
    {
        printf("Driver is not insured.");
    }

    return 0;
}
