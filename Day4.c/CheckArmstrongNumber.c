//Ques3 Armstrong Number
#include<stdio.h>
#include<math.h>
int main(){
    int num,n1,n2,sum=0,count=0,r;
        printf("Enter Number:");
        scanf("%d",&num);
        n1=num;
        n2=num;
        while(n1!=0){
            count=count+1;
            n1=n1/10;
        }
        while(n2!=0){
            r=n2%10;
            sum=sum+(int)(pow(r,count)+0.5);
            n2=n2/10;
        }
        if(sum==num){
            printf("Armstrong Number");
        }
        else{
            printf("Not a Armstrong Number");
        }
    return 0;
}


