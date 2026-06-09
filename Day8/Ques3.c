#include<stdio.h>
int main(){
     int i,j,n;
       n=1;
     for(i=1;i<=5;i++){
         for(j=1;j<=5;j++){
             if(j<=i){
                 printf("%d\t",n);
             }
             else{
            printf("\t");
             }
         }
           n++;
        printf("\n");
     }
}