#include <stdio.h>
int main()
{
    int n1, n2, v1, v2, i, j;

    printf("Enter size of array1:");
    scanf("%d%d", &n1, &n2);

    printf("Enter size of array2:");
    scanf("%d%d", &v1, &v2);

    int arr2[v1][v2];
    int arr[n1][n2];
    int arr3[n1][n2];

    if ((n1 != v1) && (n2 != v2))
    {
        printf("Subtraction of matrixes are not possible");
    }
    else
    {
        printf("Enter elements of array1:\n");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        printf("\n");
        printf("Enter elements of array2:\n");
        for (i = 0; i < v1; i++)
        {
            for (j = 0; j < v2; j++)
            {
                scanf("%d", &arr2[i][j]);
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

        printf("\n");
        printf("Array2 is:\n");
        for (i = 0; i < v1; i++)
        {
            for (j = 0; j < v2; j++)
            {
                printf("%d\t", arr2[i][j]);
            }
            printf("\n");
        }

        // for subtraction of two arrays
        arr3[i][j] = 0;
        for (i = 0; i < n1; i++)
        {
            arr3[i][j] = 0;
            for (j = 0; j < n2; j++)
            {
                arr3[i][j] = arr[i][j] - arr2[i][j];
            }
        }

        // print subtaction of 2 matrixes
        printf("Subtraction  of two matrixes is:\n");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}