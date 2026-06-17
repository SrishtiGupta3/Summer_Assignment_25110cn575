#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter elements:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter elements:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common Elements:\n");

    for(int i = 0; i < n1; i++) {
        int printed = 0;

        for(int x = 0; x < i; x++) {
            if(a[i] == a[x]) {
                printed = 1;
                break;
            }
        }

        if(printed)
            continue;

        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}