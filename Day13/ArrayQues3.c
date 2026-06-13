// largest and smallest element
#include <stdio.h>
int main()
{
    int num, i, max, min;
    printf("Enter size of Array:");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements of array:\n");
    for (i = 0; i < num; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < num; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("value of smallest element is :%d\n", min);
    printf("value of largest element is :%d\n", max);
    return 0;
}