#include<stdio.h>
#include<string.h>
int main(){
    int count=1,i,j,length,index;
    char str[100];
    char ch;
   printf("Enter String:");
   fgets(str,sizeof(str),stdin);
//    as we have used fgets so'\n' it will be there hence 1 character increase ho gya so that's why we will subtract 1 from strlen(str);

length=strlen(str)-1;
   for(int i=0;i<length;i++){
      if(str[i]=='*'){
         continue;
      }
         ch=str[i];
         count=1;

      //   for(j=0;j<length;j++){
      //       if((ch==str[j])&&(j!=i)){
      //          str[j]='*';
      //       count=count+1;
      //       }
      //    }
      // or 
      // more efficient method 
      for(j=i+1;j<length;j++){
            if(ch==str[j]){
               str[j]='*';
            count=count+1;
            }
         }
   printf("frequency of %c is:%d",str[i],count);
    printf("\n");
   }
   return 0;
}