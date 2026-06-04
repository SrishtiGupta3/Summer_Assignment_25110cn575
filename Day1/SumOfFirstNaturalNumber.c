//  Ques 1 Sum of first natural number
#include<stdio.h>
int main(){
    int N,i,sum=0;
    printf("Write the number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("The sum is : %d ",sum);
}