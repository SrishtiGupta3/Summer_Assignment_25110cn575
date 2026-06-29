#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice;

    do
    {
        printf("\n========== MENU DRIVEN STRING OPERATIONS ==========\n");
        printf("1. Enter String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter First String: ");
                scanf(" %[^\n]", str1);

                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);
                break;

            case 2:
                printf("Length of First String = %d\n", strlen(str1));
                printf("Length of Second String = %d\n", strlen(str2));
                break;

            case 3:
                strcpy(temp, str1);
                printf("Copied String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String = %s\n", temp);
                break;

            case 5:
                if(strcmp(str1, str2) == 0)
                    printf("Both Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 6:
            {
                strcpy(temp, str1);

                int i, len = strlen(temp);
                char ch;

                for(i = 0; i < len / 2; i++)
                {
                    ch = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;
            }

            case 7:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}