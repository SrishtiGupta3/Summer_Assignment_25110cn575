#include<stdio.h>
int main(){
        int y;
        int i;
        printf("WELCOME!.\nTo Check Your Eligibility for Voting.\nEnter Your Age.");
        scanf("%d",&y);
        if ((y < 18) && (y >= 0)) {
            printf("Not Eligible for Voting.");
        } else if (y == 18) {
        printf("Congrats!\nYou are 18 now.\nEligible for Voting.");

        } else {
            printf("Eligible for Voting.");
        }
        return 0;
    }

