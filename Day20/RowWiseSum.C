#include <stdio.h>
int main()
{
    int n1, n2, i, j, sum = 0;
    printf("Enter size of array:");
    scanf("%d %d", &n1, &n2);
    int arr[n1][n2];
    int rowSum[n1];
    printf("Enter elements of array:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // print array
    printf("Array is:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    // for row-Wise sum
    for (i = 0; i < n1; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < n2; j++)
        {
            rowSum[i] = rowSum[i] + arr[i][j];
        }
    }
    printf("Rowise sum is:\n");
    for (i = 0; i < n1; i++)
    {
        printf("rowSum[%d]: %d", i, rowSum[i]);
        printf("\n");
    }

    return 0;
}