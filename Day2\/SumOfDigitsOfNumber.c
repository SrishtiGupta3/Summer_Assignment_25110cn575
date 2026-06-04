// Ques 1 sum of digits of a number:
#include<stdio.h>
int main(){
    int N,sum=0,r;
    printf("Write the number: ");
    scanf("%d",&N);
    while(N!=0){
        r=N%10;
        sum=sum+r;
        N=N/10;
    }
     printf("Sum of a number is : %d",sum);
}
