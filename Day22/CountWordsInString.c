#include <stdio.h>
#include <string.h>
int stringCountWords(char str[])
{
    int length, count = 0, countWords = 0;
    char ch;
     //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
   // length=(strlen(str)-1);
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
    for (int i = 0; i<length; i++)
    {
        ch = str[i];
            if ((ch == '\r') || (ch == '\t') || (ch == ' '))
            {
                count = count + 1;
            }
        }
      countWords=count+1;
        return countWords;
}
int main()
{
    char str[100];
    printf("Enter String:");
    fgets(str, sizeof(str), stdin);
    printf("Counting of words in a string is:%d", stringCountWords(str));
    return 0;
}