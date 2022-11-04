#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "bcd.h" 
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d is prime.\n", n);
    }
    else {
        printf("%d is not prime.\n", n);
    }
    if (!decompose(n)) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }

    return 0;
}
