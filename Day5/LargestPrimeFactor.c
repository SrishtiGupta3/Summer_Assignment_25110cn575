//Ques 4 largest prime Factors Of a Number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long largestPrimeFactor(long long n) {
    if (n <= 1) {
        return -1; 
    }
    long long maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    while (n % 3 == 0) {
        maxPrime = 3;
        n /= 3;
    }
    for (long long i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n /= (i + 2);
        }
    }
    if (n > 4) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    long long result = largestPrimeFactor(n);

    if (result == -1) {
        printf("No prime factors exist for %lld.\n", n);
    } else {
        printf("The largest prime factor of %lld is: %lld\n", n, result);
    }

    return 0;
}
