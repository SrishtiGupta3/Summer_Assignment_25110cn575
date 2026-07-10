#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int length1, length2, i=0, j=0, count,input,input1;
    char str1[100];
    char str2[100];
    char ch1, ch2, ch;
    printf("Enter String1:");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")]=0;
    length1 = strlen(str1);
    printf("Enter String2:");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2,"\n")]=0;
    length2 = strlen(str2);
    int freq1[length1], freq2[length2];
    while (str1[i] != '\0')
    {
        str1[i] = toupper(str1[i]); // Convert each character
        i++;
    }
    i=0;
    while (str2[i] != '\0')
    {
        str2[i] = toupper(str2[i]); // Convert each character
        i++;
    }
    for (i = 0; i < length1; i++)
    {
        ch1 = str1[i];
        count = 1;
        for (j = 0; j < length1; j++)
        {
            if ((ch1 == str1[j]) && (j != i))
            {
                count = count + 1;
            }
        }
        freq1[i] = count;
    }

    for (i = 0; i < length2; i++)
    {
        ch2 = str2[i];
        count = 1;
        for (j = 0; j < length2; j++)
        {
            if ((ch2 == str2[j]) && (j != i))
            {
                count = count + 1;
            }
        }
        freq2[i] = count;
    }

    for (i = 0; i < length1; i++)
    {   input=0;
        input1=0;
        ch = str1[i];
        for (j = 0; j < length2; j++)
        {
            if (ch == str2[j])
            {
                input=1;
                if (freq1[i] == freq2[j])
                {
                    input1 =input+1;
                }
            }
        }
        if(input!=1){
            printf("Not Anagram String.");
            exit(0);
        }
        if((input ==1)&&(input1!=2)){
            printf("Not Anagram String.");
            exit(0);
        }
    }
      if((input==1)&&(input1==2)){
            printf("Anagram Strings.");
        }
    return 0;
}

// we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
// this  will make our code  better.