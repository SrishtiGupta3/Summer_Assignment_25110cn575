#include <stdio.h>
int main()
{
    int n, i, j, start, end, mid, target, temp;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target number:");
    scanf("%d", &target);
    end = n - 1;
    start = 0;
    mid = (start + end) / 2;

    // sorting of array
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
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] : %d", i, arr[i]);
        printf("\n");
    }

    // binary search
    while ((arr[mid] != target) && (start <= end))
    {
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    if (arr[mid] == target)
    {
        printf("Found Element at %d position", (mid + 1));
    }
    else
    {
        printf("Not Found.");
    }
    return 0;
}
