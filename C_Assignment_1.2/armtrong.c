#include <stdio.h>

int sum_of_digit_powers(int n)
{
    if (n == 0) 
    {
        return 0; // 0 is considered an Armstrong number
    }
    
    int temp = n;
    int count = 0;
    while (temp > 0) 
    {
        count++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        int p = 1;
        for (int i = 0; i < count; ++i) 
        {
            p *= rem;           // integer power rem^count
        }
        sum += p;
        temp /= 10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);


    int result = sum_of_digit_powers(num);

    if (num == result)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
