// Ques2 Reverse a number
#include<stdio.h>
int main(){
    int N,r,reverse=0;
    printf("Write the number: ");
    scanf("%d",&N);
    while(N!=0){
        r=N%10;
        reverse=reverse*10+r;
        N=N/10;
    }
     printf("Reverse number is :%d",reverse);
}