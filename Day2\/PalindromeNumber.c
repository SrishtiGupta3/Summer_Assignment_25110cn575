// Ques4 Number is palindrome or not
#include<stdio.h>
int main(){
    int N,n1,r,reverse=0;
    printf("Write the number: ");
    scanf("%d",&N);
    n1=N;
    while(N!=0){
        r=N%10;
        reverse=reverse*10+r;
        N=N/10;
    }
if(n1==reverse){
    printf("Number is palindrome");
}
else{
   printf("Number is  not a palindrome"); 
}
}