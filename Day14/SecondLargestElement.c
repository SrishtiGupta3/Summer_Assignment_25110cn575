#include <stdio.h>
#include <limits.h>
int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        int value = arr[i];
        if (value > largest) {
            secondLargest = largest;
            largest = value;
        } 
        else if (value > secondLargest && value < largest) {
            secondLargest = value;
        }
    }
    if (secondLargest == INT_MIN) {
        return -1;
    }
    return secondLargest;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int result = findSecondLargest(arr, n);

    if (result == -1) {
        printf("No second largest element (all elements same or only one element).\n");
    } else {
        printf("Second largest element: %d\n", result);
    }

    return 0;
}
