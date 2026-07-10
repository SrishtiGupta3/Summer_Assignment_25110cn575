#include <stdio.h>
#include <string.h>
int main()
{
   int count = 1, i, j, length, max = 1, index;
   char str[100];
   char ch;
   printf("Enter String:");
   fgets(str, sizeof(str), stdin);
   // as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
   //  length=(strlen(str)-1);
   // lookabove can work but it is not good practice;
   // we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
   // this  will make our code  better.
   str[strcspn(str, "\n")] = 0;
   length = strlen(str);
   int freq[length];
   for (int i = 0; i < length; i++)
   {
      ch = str[i];
      count = 1;
      for (j = 0; j < length; j++)
      {
         if ((ch == str[j]) && (j != i))
         {
            count = count + 1;
         }
      }
      freq[i] = count;
   }
   for (i = 0; i < length; i++)
   {
      if (max < freq[i])
      {
         max = freq[i];
      }
   }
   if(max!=1         ){
   printf("Frequency is: %d",max);
   printf("\nOccuring Characters:\n");
   for (i = 0; i < length; i++)
   {
      int aleradyPrinted = 0;
      for (j = 0; j < i; j++)
      {
         if (str[i] == str[j])
         {
            aleradyPrinted = 1;
            break;
         }
      }
      if (!aleradyPrinted && freq[i] == max)
      {
         printf("%c\n", str[i]);
      }
   }
}
   if (max == 1)
   {
      printf("\nNo Character repeats.");
   }

   return 0;
}
