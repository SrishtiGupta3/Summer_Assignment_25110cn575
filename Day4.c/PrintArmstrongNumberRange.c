//PrintArmstrongNumberRange
#include<stdio.h>
#include<math.h>
int main(){
    int num,n1,i,n2,sum,count,r;
        printf("Enter Number:");
        scanf("%d",&num);
        for(i=1;i<=num;i++){
        n1=i;
        n2=i;
        sum=0;
        count=0;
        while(n1!=0){
            count=count+1;
            n1=n1/10;
        }
        while(n2!=0){
            r=n2%10;
            sum=sum+(int)(pow(r,count)+0.5);
            n2=n2/10;
        }
        if(sum==i){
            printf("%d\n",sum);
        }
    }
    return 0;
}