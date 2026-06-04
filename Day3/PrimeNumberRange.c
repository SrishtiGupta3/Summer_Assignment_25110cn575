//Ques 2 prime number in a range
#include<stdio.h>
int main(){
    int num,n,i,j,count=0;
    printf("Enter Value of number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        n=i;
        count=0;
    for(j=1;j<=n;j++){
        if(n%j==0){
            count=count+1;
        }
    }
if(count==2){
    printf("%d\n",i);
}
    }
return 0;
}

