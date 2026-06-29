#include <stdio.h>
#include <string.h>

#define MAX 100

struct BankAccount
{
    int accountNumber;
    char name[50];
    float balance;
};

struct BankAccount account[MAX];
int count = 0;

// Create Account
void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &account[count].accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account[count].balance);

    count++;

    printf("\nAccount Created Successfully!\n");
}

// Display All Accounts
void displayAccounts()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Accounts Found!\n");
        return;
    }

    printf("\n--------- Account Details ---------\n");

    for(i = 0; i < count; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number : %d\n", account[i].accountNumber);
        printf("Holder Name    : %s\n", account[i].name);
        printf("Balance        : %.2f\n", account[i].balance);
    }
}

// Search Account
void searchAccount()
{
    int accNo, i;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for(i = 0; i < count; i++)
    {
        if(account[i].accountNumber == accNo)
        {
            printf("\nAccount Found!\n");
            printf("Holder Name : %s\n", account[i].name);
            printf("Balance     : %.2f\n", account[i].balance);
            return;
        }
    }

    printf("\nAccount Not Found!\n");
}

// Deposit Money
void deposit()
{
    int accNo, i;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for(i = 0; i < count; i++)
    {
        if(account[i].accountNumber == accNo)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            account[i].balance += amount;

            printf("\nAmount Deposited Successfully!\n");
            printf("Updated Balance = %.2f\n", account[i].balance);
            return;
        }
    }

    printf("\nAccount Not Found!\n");
}

// Withdraw Money
void withdraw()
{
    int accNo, i;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for(i = 0; i < count; i++)
    {
        if(account[i].accountNumber == accNo)
        {
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if(amount <= account[i].balance)
            {
                account[i].balance -= amount;
                printf("\nWithdrawal Successful!\n");
                printf("Remaining Balance = %.2f\n", account[i].balance);
            }
            else
            {
                printf("\nInsufficient Balance!\n");
            }

            return;
        }
    }

    printf("\nAccount Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== BANK ACCOUNT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                searchAccount();
                break;

            case 4:
                deposit();
                break;

            case 5:
                withdraw();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}