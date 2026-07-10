#include<stdio.h>
#include<string.h>
void stringLowercaseToUpperCase(char str[]){
    int length;
    char ch;
    //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
   //  length=strlen(str)-1;
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
     for(int i=0;str[i]!='\0';i++){
           ch=str[i];
         if((ch>='a')&&(ch<='z')){
            ch=ch-32;
         }
     str[i]=ch;
    }
     printf("Uppercase String is:\n");
     for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
     }
}
int main(){
        char str[100];
   printf("Enter String:");
   fgets(str,sizeof(str),stdin);
   stringLowercaseToUpperCase(str);
   return 0;
}