#include <stdio.h>

int main()
{
    int choice;
    int num1, num2;

    do
    {
        printf("\n========== MENU DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Two Numbers: ");
                scanf("%d%d", &num1, &num2);
                printf("Addition = %d\n", num1 + num2);
                break;

            case 2:
                printf("Enter Two Numbers: ");
                scanf("%d%d", &num1, &num2);
                printf("Subtraction = %d\n", num1 - num2);
                break;

            case 3:
                printf("Enter Two Numbers: ");
                scanf("%d%d", &num1, &num2);
                printf("Multiplication = %d\n", num1 * num2);
                break;

            case 4:
                printf("Enter Two Numbers: ");
                scanf("%d%d", &num1, &num2);

                if(num2 != 0)
                    printf("Division = %.2f\n", (float)num1 / num2);
                else
                    printf("Division by zero is not possible.\n");

                break;

            case 5:
                printf("Enter Two Numbers: ");
                scanf("%d%d", &num1, &num2);

                if(num2 != 0)
                    printf("Modulus = %d\n", num1 % num2);
                else
                    printf("Modulus by zero is not possible.\n");

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