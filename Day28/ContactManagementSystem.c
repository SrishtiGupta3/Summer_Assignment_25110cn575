#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contact[MAX];
int count = 0;

// Add Contact
void addContact()
{
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    printf("Enter Email: ");
    scanf("%s", contact[count].email);

    count++;

    printf("\nContact Added Successfully!\n");
}

// Display Contacts
void displayContacts()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Contacts Found!\n");
        return;
    }

    printf("\n--------- Contact List ---------\n");

    for(i = 0; i < count; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contact[i].name);
        printf("Phone : %s\n", contact[i].phone);
        printf("Email : %s\n", contact[i].email);
    }
}

// Search Contact
void searchContact()
{
    char name[50];
    int i;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < count; i++)
    {
        if(strcmp(contact[i].name, name) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name  : %s\n", contact[i].name);
            printf("Phone : %s\n", contact[i].phone);
            printf("Email : %s\n", contact[i].email);
            return;
        }
    }

    printf("\nContact Not Found!\n");
}

// Delete Contact
void deleteContact()
{
    char name[50];
    int i, j;

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < count; i++)
    {
        if(strcmp(contact[i].name, name) == 0)
        {
            for(j = i; j < count - 1; j++)
            {
                contact[j] = contact[j + 1];
            }

            count--;

            printf("\nContact Deleted Successfully!\n");
            return;
        }
    }

    printf("\nContact Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}