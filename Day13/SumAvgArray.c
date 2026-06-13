#include <stdio.h>
int main()
{
    int num, i, sum=0;
    float avg;
    printf("Enter size of Array:");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements of array:\n");
    for (i = 0; i < num; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / num;
    printf("sum is :%d\n", sum);
    printf("avg is :%.2f\n", avg);
    return 0;
}