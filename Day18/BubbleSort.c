// BubbleSorting
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] : %d", i, arr[i]);
        printf("\n");
    }
    printf("Sorted array:\n");
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j <= n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] : %d", i, arr[i]);
        printf("\n");
    }
    return 0;
}