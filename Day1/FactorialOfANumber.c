// Ques 3 factorial of  a  number
#include<stdio.h>
int main(){
    int N,i,fact=1;
    printf("Write the number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        fact=fact*i;
    }
     printf("Factorial is : %d",fact);
}