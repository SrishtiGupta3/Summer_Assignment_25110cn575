#include <stdio.h>
int PerfectNum(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not a perfect number\n", num);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    PerfectNum(n);
    return 0;
}