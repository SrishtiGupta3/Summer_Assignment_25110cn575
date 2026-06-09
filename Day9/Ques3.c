 #include<stdio.h>
int main(){
  int i,j;
  char n;
  n='A';
     for(i=1;i<=5;i++){
         for(j=1;j<=5;j++){
             if(j<=i){
                printf("%c\t",n);
             }
           else{
            printf("\t");
           }
         }
         printf("\n");
         n++;
     }
     return 0;
    }