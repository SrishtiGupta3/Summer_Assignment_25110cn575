// Ques 2 Table of given number
#include<stdio.h>
int main(){
    int N,i,y;
    printf("Write the number:");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        y=N*i;
        printf("%d * %d = %d",N,i,y);
        printf("\n");
    }
}