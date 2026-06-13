#include <stdio.h>
#include <math.h>
void Armstrong(int n)
{
    int sum = 0, r, count = 0, n1, n2;
    n1 = n;
    n2 = n;
    while (n2 != 0)
    {
        n2 = n2 / 10;
        count = count + 1;
    }
    while (n1 != 0)
    {
        r = n1 % 10;
        sum = sum + pow(r, count);
        n1 = n1 / 10;
    }
    if (sum == n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not A Armstrong Number");
    }
}
int main()
{
    int num;
    printf("Enter the value of number:");
    scanf("%d", &num);
    Armstrong(num);
    return 0;
}