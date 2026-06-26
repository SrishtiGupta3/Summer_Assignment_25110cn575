#include <stdio.h>
int main()
{
    int y;
    long int z, w;
    long int x = 2000000;
    printf("ATM.\nOptions are:\n1)Check balance\n2)Deposit Money\n3)Withdraw Money\n4)Exit");
    printf("\nEnter Your Choice:");
    scanf("%d", &y);
    if (y == 1)
    {
        printf("\nCurrent Balance is: %d", x);
    }
    else if (y == 2)
    {
        printf("\nEnter Money Amount to be deposited:");
        scanf("%d", &z);
        x = x + z;
    }
    else if (y == 3)
    {
        printf("\nEnter Amount to be Withdraw:");
        scanf("%d", &w);
        if ((x - w) >= 10000)
        {
            x = x - w;
        }
        else
        {
            printf("\nAmount is Large.Not Enough Balance.\nCannot Withdraw.");
        }
    }
    else if (y == 4)
    {
        printf("\nExit");
    }
    else
    {
        printf("\nInvalid Choice");
    }

    if (x >= 0)
    {
        printf("\nTotal Balance: %d",x);
    }
    return 0;
}
