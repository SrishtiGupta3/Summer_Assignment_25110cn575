#include <stdio.h>
#include <stdlib.h>
void decimalToBinary(int num) {
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }
    unsigned int absNum = (num < 0) ? -num : num;
    int binary[32]; 
    int index = 0;
    while (absNum > 0) {
        binary[index++] = absNum % 2;
        absNum /= 2;
    }
    if (num < 0) {
        printf("Binary (magnitude): -");
    } else {
        printf("Binary: ");
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main() {
    int decimal;
        printf("Enter a decimal number: ");
    if (scanf("%d", &decimal) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    decimalToBinary(decimal);

    return 0;
}
