#include <stdio.h>

// Recursive function to check if a number is prime
int isPrime(int num, int i) 
{
    if (num <= 1)
        return 0;
    if (i == 1)
        return 1;   // no divisors found prime
    if (num % i == 0)
        return 0;   // divisible not prime

    return isPrime(num, i - 1);  // check with smaller divisors
}

// Recursive function to print all primes from 1 to n
void printPrimeNumbers(int n) 
{
    if (n == 1)
        return;   // stop recursion at 1

    printPrimeNumbers(n - 1);  // first print primes below n

    if (isPrime(n, n/2))
        printf("%d ", n);
}

int main() 
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    // Added this condition (ONLY NEW CODE)
    if (n < 2) {
        printf("There are no prime numbers up to %d\n", n);
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);
    printPrimeNumbers(n);

    printf("\n");
    return 0;
}
