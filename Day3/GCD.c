//  Ques 3:GCD of a number
#include<stdio.h>
int main(){
    int num2,num1,i,y=1,gcd;
    printf("Enter Value of numbers:");
    scanf("%d\n%d",&num1,&num2);
  for(i=1;i<=num1&&i<=num2;i++){
        if((num1%i==0)&&(num2%i==0)){
           y=i*y;
        }
        }
           gcd=y;
         printf("GCD is :%d",gcd);
return 0;
}

