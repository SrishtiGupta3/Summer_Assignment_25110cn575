#include <stdio.h>

int main()
{
    int arr[100];
    int n = 0;
    int choice, i, key;
    int max, min, sum;

    do
    {
        printf("\n========== MENU DRIVEN ARRAY OPERATIONS ==========\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum Element\n");
        printf("5. Find Minimum Element\n");
        printf("6. Find Sum of Elements\n");
        printf("7. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Elements: ");
                scanf("%d", &n);

                printf("Enter %d Elements:\n", n);

                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if(n == 0)
                {
                    printf("Array is Empty!\n");
                    break;
                }

                printf("Array Elements are:\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                if(n == 0)
                {
                    printf("Array is Empty!\n");
                    break;
                }

                printf("Enter Element to Search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element Found at Index %d\n", i);
                        break;
                    }
                }

                if(i == n)
                    printf("Element Not Found!\n");

                break;

            case 4:
                if(n == 0)
                {
                    printf("Array is Empty!\n");
                    break;
                }

                max = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }

                printf("Maximum Element = %d\n", max);
                break;

            case 5:
                if(n == 0)
                {
                    printf("Array is Empty!\n");
                    break;
                }

                min = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }

                printf("Minimum Element = %d\n", min);
                break;

            case 6:
                if(n == 0)
                {
                    printf("Array is Empty!\n");
                    break;
                }

                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                printf("Sum of Elements = %d\n", sum);
                break;

            case 7:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}