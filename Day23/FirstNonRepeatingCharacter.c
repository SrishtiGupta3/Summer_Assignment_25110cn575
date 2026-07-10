#include<stdio.h>
#include<string.h>
int main(){
    int input=1,i,j,length;
    char str[100];
    char ch;
   printf("Enter String:");
   fgets(str,sizeof(str),stdin);
    //as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);
   // length=(strlen(str)-1);
    //lookabove can work but it is not good practice;
        //we can use str[strcspn(str,"\n")]=0; for removing newline if it exits ;
        //this  will make our code  better.
        str[strcspn(str,"\n")]=0;
        length=strlen(str);
   for(int i=0;i<length;i++){
    input=1;
         ch=str[i];
         for(j=0;j<length;j++){
            if((ch==str[j])&&(j!=i)){
                input=input+1;
                break;
            }
         }
         if(input==1){
            printf("First Non Repeating Chracter is:%c at %d position",str[i],(i+1));
            break;
         }
   }
   if(input!=1){
    printf("No Non Repeating Chracter found");
   }
   return 0;
}
