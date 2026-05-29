// Ques 1 sum of digits of a number:
// #include<stdio.h>
// int main(){
//     int N,sum=0,r;
//     printf("Write the number: ");
//     scanf("%d",&N);
//     while(N!=0){
//         r=N%10;
//         sum=sum+r;
//         N=N/10;
//     }
//      printf("Sum of a number is : %d",sum);
// }
// Ques2 Reverse a number
// #include<stdio.h>
// int main(){
//     int N,r,reverse=0;
//     printf("Write the number: ");
//     scanf("%d",&N);
//     while(N!=0){
//         r=N%10;
//         reverse=reverse*10+r;
//         N=N/10;
//     }
//      printf("Reverse number is :%d",reverse);
// }
// Ques3 Product of digits
// #include<stdio.h>
// int main(){
//     int N,r,product=1;
//     printf("Write the number: ");
//     scanf("%d",&N);
//     while(N!=0){
//         r=N%10;
//         product =product*r;
//         N=N/10;
//     }
//      printf("Product of digits is :%d",product);
// }
// Ques3 Number is palindrome or not
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