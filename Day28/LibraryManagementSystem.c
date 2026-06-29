#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

struct Book library[MAX];
int count = 0;

// Function to add a book
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[count].author);

    printf("Enter Quantity: ");
    scanf("%d", &library[count].quantity);

    count++;

    printf("\nBook Added Successfully!\n");
}

// Function to display all books
void displayBooks()
{
    int i;

    if(count == 0)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n----------- Library Books -----------\n");

    for(i=0;i<count;i++)
    {
        printf("\nBook %d\n", i+1);
        printf("ID       : %d\n", library[i].id);
        printf("Title    : %s\n", library[i].title);
        printf("Author   : %s\n", library[i].author);
        printf("Quantity : %d\n", library[i].quantity);
    }
}

// Function to search a book
void searchBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(i=0;i<count;i++)
    {
        if(library[i].id == id)
        {
            printf("\nBook Found\n");
            printf("Title    : %s\n", library[i].title);
            printf("Author   : %s\n", library[i].author);
            printf("Quantity : %d\n", library[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

// Function to issue a book
void issueBook()
{
    int id, i;

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for(i=0;i<count;i++)
    {
        if(library[i].id == id)
        {
            if(library[i].quantity > 0)
            {
                library[i].quantity--;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook Out of Stock!\n");
            }
            return;
        }
    }

    printf("\nBook Not Found!\n");
}

// Function to return a book
void returnBook()
{
    int id, i;

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for(i=0;i<count;i++)
    {
        if(library[i].id == id)
        {
            library[i].quantity++;
            printf("\nBook Returned Successfully!\n");
            return;
        }
    }

    printf("\nBook Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
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