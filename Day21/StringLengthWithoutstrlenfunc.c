#include<stdio.h>
int stringLength(char str[]){
    int count=0;
     for(int i=0;str[i];i++){
         count=count+1;
     }
     //Because it considers the newLineCharacter
     return (count-1);
}
int main(){
    int length;
    char str[100];
   printf("Enter String:");
   fgets(str,sizeof(str),stdin);
   //This takes '\n' so because of triangle+'\n' this will be the whole string;:=1)so either we can do remove one from length which we find or 2)in for loop we can take condition str[i]=='\n'&&along with nullCharcater
   length=stringLength(str);
   printf("Length of string is:%d",length);
   return 0;
}

//we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
//this  will make our code  better.