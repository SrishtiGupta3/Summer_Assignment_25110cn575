#include <stdio.h>
#include <stdlib.h>
struct Employee
{
    char empName[50];
    int empId;
    char designation[50];
    char department[50];
    float salary;
};
int main()
{
    struct Employee E1[50];
    int n, i, j, x, k, num;
    printf("Enter Number of Employees:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter Employee%d deatils:\n", (i + 1));
        printf("Enter Employee ID: ");
        scanf("%d", &E1[i].empId);
        getchar();
        printf("Enter Name: ");
        fgets(E1[i].empName, sizeof(E1[i].empName), stdin);
        printf("Enter Department : ");
        fgets(E1[i].department, sizeof(E1[i].department), stdin);
        printf("Enter Designation: ");
        fgets(E1[i].designation, sizeof(E1[i].designation), stdin);
        printf("Enter salary: ");
        scanf("%f", &E1[i].salary);
    }
    while (1)
    {
        printf("Enter your choice out of given options");
        printf("\n1)Add a Employee\n2)Display all Employee\n3)Search a Employee \n4)Update a Employee's Details\n5)Delete a Employee\n6)Exit");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter Employee%d deatils:\n", (i + 1));
            printf("Enter Employee ID: ");
            scanf("%d", &E1[i].empId);
            getchar();
            printf("Enter Name: ");
            fgets(E1[i].empName, sizeof(E1[i].empName), stdin);
            printf("Enter Department : ");
            fgets(E1[i].department, sizeof(E1[i].department), stdin);
            printf("Enter Designation: ");
            fgets(E1[i].designation, sizeof(E1[i].designation), stdin);
            printf("Enter salary: ");
            scanf("%f", &E1[i].salary);
            i = i + 1;
            break;
        case 2:
            printf("Record of all Employees are:\n");
            for (j = 0; j < i; j++)
            {
                printf("\nEmployee%d Details:\n", (j + 1));
                printf("EmployeeId: %d\n", E1[j].empId);
                printf("Name:  %s", E1[j].empName);
                printf("Department: %s", E1[j].department);
                printf("Designation: %s", E1[j].designation);
                printf("Salary: %f\n", E1[j].salary);
            }
            break;
        case 4:

            printf("Enter EmployeeId of person to update the Details:\n");
            scanf("%d", &x);
            for (j = 0; j < i; j++)
            {
                if (E1[j].empId == x)
                {
                    printf("Employee%d Details:\n", (j + 1));
                    printf("EmployeeId: ");
                    scanf("%d", &E1[j].empId);
                    getchar();
                    printf("Name:  ");
                    fgets(E1[i].empName, sizeof(E1[j].empName), stdin);
                    printf("Department: ");
                    fgets(E1[i].department, sizeof(E1[j].department), stdin);
                    printf("Designation: ");
                    fgets(E1[i].designation, sizeof(E1[j].designation), stdin);
                    printf("Salary: ");
                    scanf("%f", &E1[j].salary);
                }
            }
            break;
        case 3:
            printf("Enter a EmployeeId :");
            scanf("%d", &x);
            for (j = 0; j < i; j++)
            {
                if (E1[j].empId == x)
                {
                    printf("\nEmployee%d Details:\n", (j + 1));
                    printf("EmployeeId: %d\n", E1[j].empId);
                    printf("Name:  %s", E1[j].empName);
                    printf("Department: %s", E1[j].department);
                    printf("Designation: %s", E1[j].designation);
                    printf("Salary: %f\n", E1[j].salary);
                }
            }
            break;
        case 5:
            printf("Enter a EmployeeId to delete the record of that Employee:");
            scanf("%d", &x);
            for (j = 0; j < i; j++)
            {
                if (E1[j].empId == x)
                {
                    for (int k = j; k < i - 1; k++)
                    {
                        E1[j] = E1[j + 1];
                    }
                    i = i - 1;
                }
            }
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Option!");
        }
    }
    return 0;
}