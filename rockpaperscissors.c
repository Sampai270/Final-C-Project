#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int R=1;
    int P=2;
    int S=3;*/
    int Pscore =0; /*Keeps track how many games the player has won, which will start 0*/
    int Cscore =0; /*Keeps track how many games the computer has won, which will also start 0*/
    int choice; /*defines the input of the player*/
    printf("Rock=1 , Paper= 2, and Scissors= 3\n"); /*This lets the player know what number corresponds to which action*/

    while (Cscore < 2 && Pscore < 2){ /*The game will continue unless either the player or the computer has won 2 games*/
            printf("Enter your choice:"); /*Asks user to input a choice*/
            scanf("%d",&choice); /*Game processes the player's choice*/
            int computer=rand()%3+1; /*The computer will know randomly pick an number between 1 and 3*/
            switch (choice) { /*Either one of four scenarios will happen depending on the number you chose*/
                case 1: /*If you picked 1*/
                    switch (computer) { /*Either one of three scenarios will happen depending on the number the computer chose*/
                        case 1: /*If the computer picked 1*/
                            printf("The Computer chose rock, too!\nDraw!\n"); /*Lets the player know the computer has chosen rock, meaning it's a draw*/
                            break; /*Breaks the program out of the case*/
                        case 2: /*If the computer picked 2*/
                            printf("The Computer chose paper!\nThe Computer wins!\n"); /*Lets the player know the computer has chosen paper, meaning the player lost*/
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
