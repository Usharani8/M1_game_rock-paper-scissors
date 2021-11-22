#include"rps.h"
// Function to implement the game
int game(char you, char computer)
{
    // If both the user and computer
    // has chose the same thing
    if (you == computer)
    {
        return 0;
    }

    // If user's choice is Rock and
    // computer's choice is Paper
    if (you == 'r' && computer == 'p')
    {   
         return -1;
    }
 
     // If user's choice is Paper and
    // computer's choice is Rock
    if (you == 'p' && computer == 'r')
      {
            return 1;
      }
 
    // If user's choice is Rock and
    // computer's choice is Scissor
    if (you == 'r' && computer == 'z')
    {
            return 1;
    }

    // If user's choice is Scissor and
    // computer's choice is Rock
    if (you == 'z' && computer == 'r')
     {
      return -1;   
     }   
 
    // If user's choice is Paper and
    // computer's choice is Scissor
    if (you == 'p' && computer == 'z')
    {    
        return -1;
    }
 
    // If user's choice is Scissor and
    // computer's choice is Paper
    if (you == 'z' && computer == 'p')
    {
        return 1;
    }
}
