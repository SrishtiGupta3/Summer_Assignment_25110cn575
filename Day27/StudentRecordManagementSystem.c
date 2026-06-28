#include <stdio.h>
#include <stdlib.h>
struct Record
{
    char name[50];
    int StudentId;
    int age;
    int class;
    float marks;
};
int main(){
    struct Record R1[50];
    int n, i, j, x,k,num;
    printf("Enter Number of Students:");
    scanf("%d",&num);
    for (i = 0; i <num; i++)
    {
        printf("Enter Student%d deatils:\n", (i + 1));
        printf("Enter Student ID: ");
        scanf("%d", &R1[i].StudentId);
        getchar();
        printf("Enter Name: ");
        fgets(R1[i].name, sizeof(R1[i].name), stdin);
        printf("Enter age: ");
        scanf("%d", &R1[i].age);
        printf("Enter class: ");
        scanf("%d", &R1[i].class);
        printf("Enter marks: ");
        scanf("%f", &R1[i].marks);
    }
    while(1){
    printf("Enter your choice out of given options");
    printf("\n1)Add a Student\n2)Display all Student\n3)Search a student by Id\n4)Update a Student's Details\n5)Delete a student\n6)Exit");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
            printf("Enter Student Detail\n");
            printf("Enter Student ID: ");
            scanf("%d", &R1[i].StudentId);
            getchar();
            printf("Enter Name: ");
            fgets(R1[i].name, sizeof(R1[i].name), stdin);
            printf("Enter age: ");
            scanf("%d", &R1[i].age);
            printf("Enter class: ");
            scanf("%d", &R1[i].class);
            printf("Enter marks: ");
            scanf("%f", &R1[i].marks);
            i=i+1;
        break;
    case 2:
        printf("Record of all students are:\n");
        for (j = 0; j <i; j++)
        {
            printf("\nStudent%d Details:\n",(j+1));
            printf("StudentId: %d\n", R1[j].StudentId);
            printf("Name:  %s", R1[j].name);
            printf("Age: %d\n", R1[j].age);
            printf("Class: %d\n", R1[j].class);
            printf("Mraks: %f\n", R1[j].marks);
        }
        break;
    case 4:

        printf("Enter StudentId of person to update the Details:\n");
        scanf("%d", &x);
        for (j = 0; j < i; j++)
        {
            if(R1[j].StudentId==x)
            {
                printf("Student%d Details:\n", (j+1));
                printf("StudentId: ");
                scanf("%d", &R1[j].StudentId);
                getchar();
                printf("Name:  ");
                fgets(R1[i].name, sizeof(R1[j].name), stdin);
                printf("Age: ");
                scanf("%d", &R1[j].age);
                printf("Class: ");
                scanf("%d", &R1[j].class);
                printf("Mraks: ");
                scanf("%f", &R1[j].marks);
            }
        }
            break;
        case 3:
            printf("Enter a StudentId :");
            scanf("%d", &x);
            for (j = 0; j < i; j++)
            {
                if (R1[j].StudentId==x)
                {
                    printf("Student%d Details:\n",(j+1));
                    printf("StudentId: %d\n", R1[j].StudentId);
                    printf("Name:  %s", R1[j].name);
                    printf("Age: %d\n", R1[j].age);
                    printf("Class: %d\n", R1[j].class);
                    printf("Mraks: %f\n\n", R1[j].marks);
                }
            }
            break;
        case 5:
            printf("Enter a studentId to delete the record of that student:");
            scanf("%d",&x);
             for (j = 0; j < i; j++)
            {
                if (R1[j].StudentId==x)
                {
                   for(int k=j;k<i-1;k++){
                    R1[j]=R1[j+1];
                   }
                   i=i-1;
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