#include <stdio.h>

int main()
{
    int cus_id, units;
    char name[100];
    float amount=0, subcharge=0;

    printf("Enter your Customer ID: ");
    scanf("%d",&cus_id);
    printf("Enter your Name: ");
    scanf("%s",&name);
    printf("Enter the amount of units consumed: ");
    scanf("%d",&units);
    printf("\n\n");

    if(units<=100)
    {
        amount = units*5;
    }

    else if(units<=300)
    {
        amount = (100*5)+((units-100)*7);
    }
    else
    {
        amount = (100*5)+(200*7)+((units-300)*10);
    }
    amount+=100;

    if(amount>2000)
    {
        subcharge = amount*0.10;
    }

    float totalBill=amount+subcharge;

    if(totalBill<200)
    {
        totalBill=200;
    }

    printf("Customer ID: %d\n",cus_id);
    printf("Customer Name: %s\n",name);
    printf("Units Consumed: %d\n",units);
    printf("Calculated amount before subcharge: %.2f\n",amount);
    printf("Subcharge: %.2f\n",subcharge);
    printf("Final Total Bill: %.2f\n",totalBill);
    printf("\n\n");
    return 0;
}
