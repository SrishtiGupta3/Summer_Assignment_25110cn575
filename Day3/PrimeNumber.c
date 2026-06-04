// Ques 1  checking prime Number 
#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Enter Value of number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
if(count==2){
    printf("Prime number");
}
else{
    printf("Not a prime number");
}
return 0;
}
