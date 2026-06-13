#include<stdio.h>
int main()
{
    int num, i, even=0,odd=0;
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
        if (arr[i]%2==0)
        {
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("total even element is :%d\n", even);
    printf("total odd element is :%d\n", odd);
    return 0;
}
