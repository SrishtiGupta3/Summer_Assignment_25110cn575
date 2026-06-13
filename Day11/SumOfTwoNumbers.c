#include<stdio.h>
int sum(int x,int y){
        int sum;
        sum=x+y;
        return sum;
    }

int main(){
    int a,b;
    printf("Enter two Numbers:");
    scanf("%d %d",&a,&b);
    printf("Sum is:%d",sum(a,b));
    return 0;
}