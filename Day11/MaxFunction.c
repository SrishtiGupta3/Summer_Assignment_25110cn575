#include <stdio.h>
int Max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a, b;
    printf("Enter two Numbers:");
    scanf("%d %d", &a, &b);
    printf("Maximum is:%d", Max(a, b));
    return 0;
}