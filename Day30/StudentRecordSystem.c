#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;

// Function to Add Student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("\nStudent Record Added Successfully!\n");
}

// Function to Display Students
void displayStudents()
{
    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n----------- Student Records -----------\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}

// Function to Search Student
void searchStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nRecord Found!\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

// Function to Update Student
void updateStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

// Function to Delete Student
void deleteStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            for(int j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            count--;

            printf("\nRecord Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n==============================");
        printf("\n STUDENT RECORD MANAGEMENT");
        printf("\n==============================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
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