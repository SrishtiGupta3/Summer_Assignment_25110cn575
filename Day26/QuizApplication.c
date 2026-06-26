 #include <stdio.h>
int main(){
        int i = 0;
        int y;
        printf("WELCOME!.\nTo The Quiz.");
        printf("Answer the Following 5 Ques.");
        printf("Ques1. Which one of the following river flows between Vindhyan and Satpura ranges?\n(1) Narmada\n(2) Mahanadi\n(3) Son\n(4) Netravati");
        printf("\nEnter you response:");
     scanf("%d",&y);
        if (y == 1) {
            i = i + 1;
        }

        printf("\nQues2. The ratio of the present ages of two brothers is 1 : 2. Five years ago, the ratio was 1 : 3. What will be the ratio of their ages after five years?\n(1) 1:4\n(2) 2:3\n(3) 3:5\n(4) 5:6");
        printf("\nEnter you response:");
        scanf("%d",&y);
        if (y == 3) {
            i = i + 1;
        }

        printf("\nQues3. Convert given speed into m/s: Speed = 30 km/h\n1) 1.7\n2) 3.3\n3) 8.3\n4) 13.3");
        printf("\nEnter you response:");
       scanf("%d",&y);
        if (y == 3) {
            i = i + 1;
        }

        printf("\nQues4. Ravi was at a family gathering when he pointed to a woman sitting across the room and said,\"She is the daughter of my grandfather\'s only son\". Everyone turned to look at the woman. How is the woman related to Ravi?\n1) Mother\n2) Aunt\n3) Cousin\n4) Sister");
        printf("\nEnter you response:");
        scanf("%d",&y);
        if (y == 4) {
            i = i + 1;
        }

        printf("\nQues5. A company is considering hiring one of two candidates for a manager position. Candidate A has 7 years of experience in management and strong leadership skills. Candidate B has 5 years of experience and excellent technical expertise. If the company’s priority is technical development, who should they?\n1) Candidate A\n2) Candidate B\n3) None\n4) Either");
        printf("\nEnter you response:");
        scanf("%d",&y);
        if (y == 2) {
            i = i + 1;
        }
        printf("\nCorrect Answers are: %d",i);
        printf("\nScore is : %d /5 \n",i);
        if (i == 5) {
            printf("WellDone!");
        }
             else if (i == 4) {
            printf("Good");
        }
    }

