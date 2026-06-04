// Ques 4 Count digits in a number
#include<stdio.h>
int main(){
    int N,count=0;
    printf("Write the number: ");
    scanf("%d",&N);
    while(N!=0){
        count=count+1;
        N=N/10;
    }
     printf("Digits in a number is : %d",count);
}