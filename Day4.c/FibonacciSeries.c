// FIBONAACI SERIES
#include<stdio.h>
int main(){
    int N,a,i,b,num;
    printf("Enter value of number:");
    scanf("%d",&N);
    a=0;
    b=1;
    printf("The fibonacci series upto a given number is:\n");
    printf("%d",a);
    printf("\n%d",b);
    for(i=1;i<N-2;i++){
        num=a+b;
        printf("\n%d",num);
        a=b;
        b=num;
        }   
         return 0;
}