//  Ques 1 Sum of first natural number
// #include<stdio.h>
// int main(){
//     int N,i,sum=0;
//     printf("Write the number:");
//     scanf("%d",&N);
//     for(i=1;i<=N;i++){
//         sum=sum+i;
//     }
//     printf("The sum is : %d ",sum);
// }

// Ques 2 Table of given number
// #include<stdio.h>
// int main(){
//     int N,i,y;
//     printf("Write the number:");
//     scanf("%d",&N);
//     for(i=1;i<=10;i++){
//         y=N*i;
//         printf("%d * %d = %d",N,i,y);
//         printf("\n");
//     }
// }

// Ques 3 factorial of  a  number
// #include<stdio.h>
// int main(){
//     int N,i,fact=1;
//     printf("Write the number:");
//     scanf("%d",&N);
//     for(i=1;i<=N;i++){
//         fact=fact*i;
//     }
//      printf("Factorial is : %d",fact);
// }

// Ques 4 Count digits in a number
#include<stdio.h>
int main(){
    int N,count=0;
    printf("Write the number: ");
    scanf("%d",&N);
    while(N!=0){
        count=count+1;
        N=N/10;
    }
     printf("Digits in a number is : %d",count);
}