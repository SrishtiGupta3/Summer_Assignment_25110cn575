// Ques 1  checking prime Number 
// #include<stdio.h>
// int main(){
//     int num,i,count=0;
//     printf("Enter Value of number:");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         if(num%i==0){
//             count++;
//         }
//     }
// if(count==2){
//     printf("Prime number");
// }
// else{
//     printf("Not a prime number");
// }
// return 0;
// }

//Ques 2 prime number in a range
// #include<stdio.h>
// int main(){
//     int num,n,i,j,count=0;
//     printf("Enter Value of number:");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         n=i;
//         count=0;
//     for(j=1;j<=n;j++){
//         if(n%j==0){
//             count=count+1;
//         }
//     }
// if(count==2){
//     printf("%d\n",i);
// }
//     }
// return 0;
// }
//  Ques 3:GCD of a number
// #include<stdio.h>
// int main(){
//     int num2,num1,i,y=1,gcd;
//     printf("Enter Value of numbers:");
//     scanf("%d\n%d",&num1,&num2);
//   for(i=1;i<=num1&&i<=num2;i++){
//         if((num1%i==0)&&(num2%i==0)){
//            y=i*y;
//         }
//         }
//            gcd=y;
//          printf("GCD is :%d",gcd);
// return 0;
// }
// Ques 4 lcm of two numbers
#include<stdio.h>
int main(){
    int num2,num1,i,y=1,lcm;
    printf("Enter Value of numbers:");
    scanf("%d\n%d",&num1,&num2);
    for(i=1;i<=num1&&i<=num2;i++){
        if((num1%i==0)&&(num2%i==0)){
           y=i*y;
        }
        }
         lcm=((num1)*(num2))/y;
        printf("LCM is :%d",lcm);  
return 0;
}
