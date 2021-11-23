#include"rps.h"
// C program for Rock Paper Scissor
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Driver Code
int main()
{
    char computer;
    char player;
    char playmore;
 
   printf("\t\t\t\t") ;
    for(int i = 0; i < 50; i++){
        printf( "."); 
    }
    printf("\t\t\t\t\n"); 
    printf("\t Welcome to Rock, Paper and Scissors Game\n");
    printf("\t\t\t\t\n");
    for(int i = 0; i < 50; i++) 
    {
      printf(".");
    }
    
    // Stores the random number
    
 do{
        int n=0;
        char you;
        char result;
 
        // Chooses the random number
        // every time
        srand(time(NULL));
 
        // Make the random number less
        // than 100, divided it by 100
        n = rand() % 100;
 
        // Using simple probability 100 is
        // roughly divided among stone,
        // paper, and scissor
        if (n < 33)
        {
        // s is denoting Rock
        computer = 'r';
        }

        else if (n > 33 && n < 66)
        {
        // p is denoting Paper
        computer = 'p';
        }

        // z is denoting Scissor
        else
        { 
        computer = 'z';
        }

        printf("\nNote: r for rock,z for scissor, p for paper\n") ;

        // input from the user
        scanf("%c", &you);
 
        // Function Call to play the game
        result = game(you, computer);
 
        if (result == -1)
        {
        printf("\t\t\t\t\t\t\n");
        printf("Game Draw!\n");
        }
        
        else if (result == 1) 
        {
        printf("\n\n\t\t\t\t\n");
        printf("Wow! You have won the game!\n");
        }
        
        else 
        {
        printf("\n\n\t\t\t\t");
        printf("Oh! You have lost the game!\n");
        }
        
         printf("\t\t\t\t\n");
        printf("Do you want to Play Again?\n");
        printf("\n\t\t\t\t\n");
        printf("Note: Press 'enter' and 'n' to exit! n") ;
        scanf("%c",&playmore);
        printf("\t\t\t\t\n");
        for(int i = 0; i < 50; i++) 
        {
        printf(".");
        }
    }while(playmore != 'n');
        return 0;
}
