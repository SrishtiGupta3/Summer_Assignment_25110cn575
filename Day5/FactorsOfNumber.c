// Ques 3 factors of a number
#include <stdio.h>
#include <math.h>
void printFactors(int n) {
    if (n == 0) {
        printf("Every non-zero integer is a factor of 0.\n");
        return;
    }
    printf("Factors of %d are: ", n);
    int limit = (int)sqrt(abs(n));
    for (int i = 1; i <= limit; i++) {
        if (n % i == 0) {
            printf("%d ", i); 
            if (i != abs(n) / i) {
                printf("%d ", abs(n) / i);
            }
        }
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printFactors(num);
    return 0;
}
