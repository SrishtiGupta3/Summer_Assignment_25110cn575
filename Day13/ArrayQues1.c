#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter size of Array:");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements of array:\n");
    for (i = 0; i < num; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is:");
    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("arr[%d]:%d\n", i, arr[i]);
    }
}