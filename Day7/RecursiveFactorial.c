#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (unsigned long long)n * factorial(n - 1); 
}
int main() {
    int num;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    if (num > 20) {
        printf("Warning: Factorial of %d may overflow 64-bit integer.\n", num);
    }
    unsigned long long result = factorial(num);
    printf("Factorial of %d is: %llu\n", num, result);

    return 0;
}
