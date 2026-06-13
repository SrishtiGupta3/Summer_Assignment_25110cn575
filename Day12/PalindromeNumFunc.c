#include <stdio.h>
void Palindrome(int n)
{
    int reverse = 0, r, n1;
    n1 = n;
    while (n1 != 0)
    {
        r = n1 % 10;
        reverse = reverse * 10 + r;
        n1 = n1 / 10;
    }
    if (reverse == n)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not A Palindrome Number");
    }
}
int main()
{
    int num;
    printf("Enter the value of number:");
    scanf("%d", &num);
    Palindrome(num);
    return 0;
}