#include <stdio.h>
int main()
{
    int n1, n2, i, j;

    printf("Enter size of array1:");
    scanf("%d%d", &n1, &n2);

    int arr[n1][n2];
    printf("Enter elements of array1:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // print array
    printf("Array1 is:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // for transpose of matrix:
    printf("Transpose of matrix is:\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}