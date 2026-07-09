#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    char course[30];
    float marks;
};

struct Student s[MAX];
int count = 0;

// Add Student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Course: ");
    scanf(" %[^\n]", s[count].course);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("\nRecord Added Successfully!\n");
}

// Display Students
void displayStudents()
{
    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Course  : %s\n", s[i].course);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}

// Search Student
void searchStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nRecord Found\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Course  : %s\n", s[i].course);
            printf("Marks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found!\n");
}

// Update Student
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

            printf("Enter New Course: ");
            scanf(" %[^\n]", s[i].course);

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

// Delete Student
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

// Calculate Average Marks
void averageMarks()
{
    if(count == 0)
    {
        printf("\nNo Records Available!\n");
        return;
    }

    float sum = 0;

    for(int i = 0; i < count; i++)
    {
        sum += s[i].marks;
    }

    printf("\nAverage Marks = %.2f\n", sum / count);
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n=====================================");
        printf("\n STUDENT MANAGEMENT MINI PROJECT");
        printf("\n=====================================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Average Marks");
        printf("\n7. Exit");

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
                averageMarks();
                break;

            case 7:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}