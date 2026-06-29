#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter size of array:");
    scanf("%d %d", &n1, &n2);
    int arr[n1][n2];
    int columnSum[n2];
    printf("Enter elements of array:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // print array
    // transpose of matrix
    printf("Tranpose Array is:\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    // for columwise sum
    for (i = 0; i < n2; i++)
    {
        columnSum[i] = 0;
        for (j = 0; j < n1; j++)
        {
            columnSum[i] = columnSum[i] + arr[j][i];
        }
    }
    printf("ColumnWise Sum is:%d\n");
    for (i = 0; i < n2; i++)
    {
        printf("columnSum[%d]: %d", i, columnSum[i]);
        printf("\n");
    }

    return 0;
}