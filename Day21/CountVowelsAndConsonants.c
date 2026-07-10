#include <stdio.h>
#include <string.h>
void stringCountVowelsAndConsonants(char str[])
{
    int length, countVowels = 0, count = 0, countConsonants = 0;
    char ch;
    //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
    // length = strlen(str)-1;
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
    for (int i = 0; str[i]; i++)
    {
        ch = str[i];
        if (((ch >= 'a') && (ch <= 'z')) || ((ch <= 'Z') && (ch >= 'A')))
        {
            count = count + 1;
            if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
            {
                countVowels = countVowels + 1;
            }
        }
    }
      countConsonants = count - countVowels;
        printf("Vowels are:%d", countVowels);
        printf("\n");
        printf("Consonants are:%d", countConsonants);
}
int main()
{
    char str[100];
    printf("Enter String:");
    fgets(str, sizeof(str), stdin);
    stringCountVowelsAndConsonants(str);
    return 0;
}