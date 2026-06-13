#include<stdio.h>
void Prime(int n){
    int i,y=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            y=y+1;
        }
    }
    if(y==2){
        printf("Prime Number");
    }
    else
    printf("Not a Prime Number");
}
int main(){
    int num;
    printf("Enter the value of number:");
    scanf("%d",&num);
    Prime(num);
    return 0;

}