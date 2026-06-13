#include<stdio.h>
void Fib(int n ){
    int i,a,b,c;
    a=0;b=1;
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=1;i<=n-2;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
int main(){
    int num;
    printf("Enter the Value of num:");
    scanf("%d",&num);
    Fib(num);
    return 0;
}
