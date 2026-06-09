#include <stdio.h>
#include <stdlib.h>
int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    long long num;

    printf("Enter an integer: ");
    
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }


    unsigned int unsignedNum = (unsigned int)num;

    int result = countSetBits(unsignedNum);
    printf("Number of set bits in %lld is: %d\n", num, result);

    return 0;
}
