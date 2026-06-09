#include <stdio.h>
#include <stdlib.h>
int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev; 
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}
int main() {
    int num, reversed;

    printf("Enter an integer: ");
   
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 0) {
        reversed = -reverseNumber(-num, 0);
    } else {
        reversed = reverseNumber(num, 0);
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
