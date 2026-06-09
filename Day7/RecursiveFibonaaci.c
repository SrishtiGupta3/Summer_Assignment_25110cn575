#include <stdio.h>
#include <stdlib.h>
unsigned long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter a non-negative integer (n): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    if (n > 45) {
        printf("Warning: Recursive method is slow for n > 45.\n");
    }
    unsigned long long result = fibonacci(n);
    printf("Fibonacci(%d) = %llu\n", n, result);
    return 0;
}
