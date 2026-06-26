#include <stdio.h>
int main()
{
    int x = 25;
    int y;
    int i;
    printf("WELCOME!\nThis is a Guessing Game.\nYou will have 5 chances only to identify the number choosen by Computer (Number is btw 1 to 100).\nSo Let's Begin!\n");
    printf("Now Guess The Number:");
    scanf("%d", &y);
    for (i = 1; i <= 4; i++)
    {
        if ((y >= 1) && (y <= 100))
        {
            if (y != 25)
            {
                printf("Not Correct Guess.");
                printf("\nGuess Again.\n");
                scanf("%d", &y);
            }
            else
            {
                printf("Congrats!You Have Guess Correct.");
                break;
            }
        }
        else
        {
            printf("Invalid Number.");
            printf("\nGuess Again.\n");
            scanf("%d", &y);
        }
    }
    if (i >= 5)
    {
        printf("\nChances Over!");
    }
    return 0;
}
