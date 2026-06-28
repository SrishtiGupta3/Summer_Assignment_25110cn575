#include <stdio.h>
#include <string.h>
int main()
{
    int rollNo;
    char name[50];
    float n1, n2, n3, n4, n5, n6, sum, per;
    printf("Enter Student Details:\n");
    printf("Name:");
    fgets(name, sizeof(name), stdin);
    printf("Roll No:");
    scanf("%d", &rollNo);

    printf("Enter Marks:\n");
    printf("English:");
    scanf("%f", &n1);
    printf("Maths:");
    scanf("%f", &n2);
    printf("Hindi:");
    scanf("%f", &n3);
    printf("Science:");
    scanf("%f", &n4);
    printf("GK:");
    scanf("%f", &n5);
    printf("Computer:");
    scanf("%f", &n6);

    sum = n1 + n2 + n3 + n4 + n5 + n6;
    per = (sum * 100) / 600;
printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\nMARKSHEET\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\nStudent Detail's:\n");
    printf("Name: %s", name);
    printf("\nRoll No: %d", rollNo);
    printf("\n\n");
    printf("Marks are:\n");
    printf("English: %.2f", n1);
    printf("\nMaths: %.2f", n2);
    printf("\nHindi: %.2f", n3);
    printf("\nScience: %.2f", n4);
    printf("\nGK: %.2f", n5);
    printf("\nComputer: %.2f", n6);
    printf("\n\n");
    printf("Result:\n");
    printf("Total Marks : %.2f", sum);
    printf("\nPercentage is: %.2f%\n", per);
    if (per >= 90 && per <= 100)
    {
        printf("Grade is:  A+");
    }
    else if (per < 90 && per >= 80)
    {
        printf("Grade is:  A");
    }
    else if (per < 80 && per >= 70)
    {
        printf("Grade is:  B+");
    }
    else if (per < 70 && per >= 60)
    {
        printf("Grade is:  B");
    }
    else if (per < 60 && per >= 50)
    {
        printf("Grade is:  C");
    }
    else if (per < 50 && per > 40)
    {
        printf("Grade is:  D");
    }
    else
    {
        printf("Grade is:  E");
    }
    if (per >= 33.3)
    {
        printf("\nPass");
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}