#include<stdio.h>
#include<string.h>
void stringPalindrome(char str[]){
    int length,i;
    //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
   // length=(strlen(str)-1);
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
     for(i=0;i<(length/2);i++){
         if(str[i]!=str[length-1-i]){
                break;
         }
     }
    if(i==(length/2)){
     printf("Palindrome String");
    }
    else{
        printf("Not a Palindrome String");
    }
}
int main(){
    char str[100];
   printf("Enter String:");
   fgets(str,sizeof(str),stdin);
   stringPalindrome(str);
   return 0;
}