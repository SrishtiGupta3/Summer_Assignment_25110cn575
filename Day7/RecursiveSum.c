#include <stdio.h>
#include <stdlib.h>
long long recursiveSum(int n) {
    if (n <= 0) {
        return 0; 
    }
    return n + recursiveSum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
   
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Negative numbers are not allowed for natural number sum.\n");
        return 1;
    }

    long long sum = recursiveSum(n);
    printf("Sum of first %d natural numbers is: %lld\n", n, sum);

    return 0;
}
