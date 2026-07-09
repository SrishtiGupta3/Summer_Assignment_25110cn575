// Ques3 Product of digits
#include<stdio.h>
int main(){
    int N,r,product=1;
    printf("Write the number: ");
    scanf("%d",&N);
    while(N!=0){
        r=N%10;
        product =product*r;
        N=N/10;
    }
     printf("Product of digits is :%d",product);
}
