#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, i, j, count = 1;

    printf("Enter size of array1:");
    scanf("%d%d", &n1, &n2);

    int arr[n1][n2];
    int brr[n1][n2];
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

    // storing arr array in brr;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            brr[i][j] = arr[i][j];
        }
    }
    // for transpose of matrix brr:
    printf("Transpose of matrix is:\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d\t", brr[j][i]);
        }
        printf("\n");
    }

    // symmetric or not?(brr(transpose) and arr)

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (brr[j][i] != arr[i][j])
            {
                printf("Not Symmetric");
                count = count + 1;
                exit(0);
            }
        }
    }
    if (count == 1)
    {
        printf("Symmetric matrix");
    }
    return 0;
}