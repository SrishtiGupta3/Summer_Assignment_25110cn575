#include<stdio.h>
int main(){
    char n;
     int i,j;
     for(i=1;i<=5;i++){
         n='A';
         for(j=1;j<=5;j++){
             if(j<=i){
                 printf("%c\t",n);
                 n++;
             }
             else{
            printf("\t");
             }
         }
        printf("\n");
     }
}