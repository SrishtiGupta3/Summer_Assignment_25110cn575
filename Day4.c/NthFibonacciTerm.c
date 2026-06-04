// Nth Term Fibonaaci Series
#include<stdio.h>
int main(){
    int N,a,i,b,num;
    printf("Enter value of number:");
    scanf("%d",&N);
    a=0;
    b=1;
    printf("The Nth Term is:");
    for(i=1;i<N-2;i++){
        num=a+b;
        a=b;
        b=num;
        }   
         printf("%d",num);
         return 0;
}