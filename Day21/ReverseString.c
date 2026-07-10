#include<stdio.h>
#include<string.h>
void stringReverse(char str[]){
    int length;
    char ch;
    //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
    // length=strlen(str)-1;
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
     for(int i=0;i<(length/2);i++){
         ch=str[i];
         str[i]=str[length-1-i];
         str[length-1-i]=ch;
     }
     printf("Reverse String is:\n");
     for(int i=0;i<length;i++){
        printf("%c",str[i]);
     }
}
int main(){
    char str[100];
   printf("Enter String:");
   fgets(str,sizeof(str),stdin);
   stringReverse(str);
   return 0;
}