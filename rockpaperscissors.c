#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int R=1;
    int P=2;
    int S=3;*/
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    for (i=0; i<10; i++){
        if (Cscore < 2 && Pscore < 2){
            printf("Enter your choice:");
            scanf("%d",&choice);
            int computer=rand()%3+1;
            if (choice==1) {
                if (computer==1) {
                    printf("The Computer chose rock, too!\n Draw!\n");
                }
                if (computer==2) {
                    printf("The Computer chose paper!\n The Computer wins!\n");
                    Cscore= Cscore + 1;
                }
                if (computer==3) {
                    printf("The Computer chose scissors!\n You win!\n");
                    Pscore = Pscore + 1;
                }
            }
            else if (choice==2) {
                if (computer==2) {
                    printf("The Computer chose paper, too!\n Draw!\n");
                }
                if (computer==3) {
                    printf("The Computer chose scissors!\n The Computer wins!\n");
                    Cscore = Cscore + 1;
                }
                if (computer==1) {
                    printf("The Computer chose rock!\n You win!\n");
                    Pscore= Pscore + 1;
                }
            } else if (choice==3) {
                if (computer==3) {
                    printf("The Computer chose scissors, too!\n Draw!\n");
                }
                if (computer==2) {
                    printf("The Computer chose paper!\n You win!\n");
                    Pscore= Pscore + 1;
                }
                if (computer==1) {
                    printf("The Computer chose rock!\n The Computer wins!\n");
                    Cscore = Cscore + 1;
                }
            }
            else {
                printf("Wrong Answer\n");
            }

        }        
        else if (Cscore == 2 ) {
            printf("Better luck next time! The Computer wins %d to %d\n",Cscore,Pscore);
            break;
        }
        else if (Pscore == 2 ) {
            printf("Great Job! You win %d to %d\n", Pscore, Cscore);
            break;
        }
    }
    return(0);
}
