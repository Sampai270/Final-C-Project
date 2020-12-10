#include <stdio.h>
#include <stdlib.h>
/*Welcome to Vitamin C++'s rock paper scissors code! By Sam and Evan*/
int main()
{
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
                            printf("The Computer chose rock, too!\nDraw!\n"); /*Lets the player know the computer has chosen 1, meaning it's a draw*/
                            break; /*Breaks the program out of the case*/
                        case 2: /*If the computer picked 2*/
                            printf("The Computer chose paper!\nThe Computer wins!\n"); /*Lets the player know the computer has chosen 2, meaning the player lost*/
                            Cscore= Cscore + 1; /*Add 1 to the computer score*/
			    break; /*Ends the function of case 2*/
                    	case 3: /* If the computer picked 3*/
                            printf("The Computer chose scissors!\nYou win!\n"); /*Displays line letting player know the computer chose 3 and that the player has won the round*/
                            Pscore = Pscore + 1; /* Adds 1 to the player's score*/
			    break; /*Ends the function of case 3*/
                    } /*Ends the switch function*/
                    break; /*Ends the outer case 1*/
                case 2: /*Begins the second case/scenario for when the player selects choice 2*/
                    switch (computer) { /*One of the scenarios will occur dependent on the computer's random generated number*/
                        case 2: /*If the computer selects paper*/
			    printf("The Computer chose paper, too!\nDraw!\n"); /*The terminal displays the choice of the computer, which is 2 in this case, and this ends with a draw*/
			    break; /*Ends the inner case 2*/
                	case 3: /*If the computer chose scissors*/
                            printf("The Computer chose scissors!\nThe Computer wins!\n"); /*The terminal will display that the computer chose 3 and this ended in the computer winning this round*/
                    	    Cscore = Cscore + 1; /*Adds 1 to the computer score*/
			    break; /*Ends the case 3 scenario*/
                	case 1: /*If the computer selected rock*/
                    	    printf("The Computer chose rock!\nYou win!\n"); /*The terminal will display that the computer chose 1 and this ended in the player winning the round*/
                    	    Pscore= Pscore + 1; /*Adds one to the player's score*/
			    break; /*Ends the case 1 scenario*/
                    } /*Ends the switch function*/
		    break; /*Ends the outer case 2 scenario*/
                case 3: /*Begins the third scenario for when the player chooses choice 3*/
                    switch (computer) { /*One of the given scenarios will occur dependent on the computer's input*/
                        case 3: /*If the computer selects choice 1*/
			    printf("The Computer chose scissors, too!\nDraw!\n"); /*Displays in the terminal that the computer chose 3 and the round ends in a draw*/
			    break; /*Ends the case 3 scenario*/
                	case 2: /*If the computer chose choice 2*/
                    	    printf("The Computer chose paper!\nYou win!\n"); /*The terminal will display that the computer chose 2 and the round ends with the player winning*/
                   	    Pscore= Pscore + 1; /*Adds 1 to the player's score*/
			    break; /*Ends the case 2 scenario*/
                	case 1: /*If the computer chose choice 1*/
                    	    printf("The Computer chose rock!\nThe Computer wins!\n"); /*Terminal will display that the computer chose choice 1 and the round ends with the computer winning*/
                            Cscore = Cscore + 1; /*Adds 1 to the computer's score*/
			    break; /*Ends the case 1 scenario*/
                    } /*ends the switch function*/
		    break; /*Ends the outer case 3*/
            
                default: /*Proposition at the beginning each time the code is ran and if an input between 1 and 3 is chosen*/
                    printf("Choose a value between 1 and 3\n"); /*Asks the user for their choice bewteen 1, 2 and 3*/

            }        
            if (Cscore == 2) { /*If the computer has won 2 rounds*/
                printf("Better luck next time! The Computer wins %d to %d\n",Cscore,Pscore); /*Displays in terminal that the computer won the best out of 3 game and shows the score between the computer and player*/
            }
            if (Pscore == 2){ /*If the player has won 2 rounds*/
                printf("Great Job! You win %d to %d\n", Pscore, Cscore); /*Displays in terminal that the player has won the best out of 3 game and shows the score bewteen the computer and player*/
            }
    }
    return(0); /*Return to the next line*/
} /*End of our rock, paper, scissors code! We hope you enjoyed and have fun using it! (: */
