#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int N;

    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &N);

    printf("First %d Fibonacci numbers:\n", N);

    for (int i = 0; i < N; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
