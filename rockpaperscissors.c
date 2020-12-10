#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int R=1;
    int P=2;
    int S=3;*/
    int Pscore =0;
    int Cscore =0;
    int choice;
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    while (Cscore < 2 && Pscore < 2){
            printf("Enter your choice:");
            scanf("%d",&choice);
            int computer=rand()%3+1;
            switch (choice) {
                case 1:
                    switch (computer) {
                        case 1:
                            printf("The Computer chose rock, too!\nDraw!\n");
                            break;
                        case 2:
                            printf("The Computer chose paper!\nThe Computer wins!\n");
                            Cscore= Cscore + 1;
			    break;
                    	case 3:
                            printf("The Computer chose scissors!\nYou win!\n");
                            Pscore = Pscore + 1;
			    break;
                    }
                    break;
                case 2:
                    switch (computer) {
                        case 2:
			    printf("The Computer chose paper, too!\nDraw!\n");
			    break;
                	case 3:
                            printf("The Computer chose scissors!\nThe Computer wins!\n");
                    	    Cscore = Cscore + 1;
			    break;
                	case 1: 
                    	    printf("The Computer chose rock!\nYou win!\n");
                    	    Pscore= Pscore + 1;
			    break;
                    }
		    break;
                case 3:
                    switch (computer) {
                        case 3:
			    printf("The Computer chose scissors, too!\nDraw!\n");
			    break;
                	case 2:
                    	    printf("The Computer chose paper!\nYou win!\n");
                   	    Pscore= Pscore + 1;
			    break;
                	case 1:
                    	    printf("The Computer chose rock!\nThe Computer wins!\n");
                            Cscore = Cscore + 1;
			    break;
                    }
		    break;
            
                default:
                    printf("Choose a value between 1 and 3\n");

            }        
            if (Cscore == 2) {
                printf("Better luck next time! The Computer wins %d to %d\n",Cscore,Pscore);
            }
            if (Pscore == 2) {
                printf("Great Job! You win %d to %d\n", Pscore, Cscore);
            }
    }
    return(0);
}
