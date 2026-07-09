#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

struct Book b[MAX];
int count = 0;

// Add Book
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[count].author);

    b[count].issued = 0;
    count++;

    printf("\nBook Added Successfully!\n");
}

// Display Books
void displayBooks()
{
    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n========== Library Books ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", b[i].id);
        printf("Title   : %s\n", b[i].title);
        printf("Author  : %s\n", b[i].author);

        if(b[i].issued == 0)
            printf("Status  : Available\n");
        else
            printf("Status  : Issued\n");
    }
}

// Search Book
void searchBook()
{
    int id, found = 0;

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(b[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", b[i].id);
            printf("Title   : %s\n", b[i].title);
            printf("Author  : %s\n", b[i].author);

            if(b[i].issued == 0)
                printf("Status  : Available\n");
            else
                printf("Status  : Issued\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

// Issue Book
void issueBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(b[i].id == id)
        {
            if(b[i].issued == 0)
            {
                b[i].issued = 1;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook Already Issued!\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

// Return Book
void returnBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(b[i].id == id)
        {
            if(b[i].issued == 1)
            {
                b[i].issued = 0;
                printf("\nBook Returned Successfully!\n");
            }
            else
            {
                printf("\nBook is Already Available!\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n==================================");
        printf("\n MINI LIBRARY MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
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