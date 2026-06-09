#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidBinary(const char *bin) {
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            return 0; 
        }
    }
    return 1; 
}
unsigned long long binaryToDecimal(const char *bin) {
    unsigned long long decimal = 0;
    for (int i = 0; bin[i] != '\0'; i++) {
        decimal = decimal * 2 + (bin[i] - '0');
    }
    return decimal;
}

int main() {
    char binary[65]; 

    printf("Enter a binary number: ");
    if (scanf("%64s", binary) != 1) {
        printf("Error reading input.\n");
        return 1;
    }
    if (!isValidBinary(binary)) {
        printf("Invalid binary number. Only 0 and 1 are allowed.\n");
        return 1;
    }
    unsigned long long decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %llu\n", decimal);

    return 0;
}
