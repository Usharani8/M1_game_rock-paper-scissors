
#include"rps.h"
// Function to implement the game
int game(char you, char computer)
{
 // If both the user and computer // has chose the same thing
 case1: (you == computer) 
 {
  return 0;
 }

// If user's choice is Rock and computer's choice is Paper
case2: (you == 'r' && computer == 'p')
{
return -1; 
}

 // If user's choice is Paper and computer's choice is Rock
case3: (you == 'p' && computer == 'r')
{
  return 1;
}
  
// If user's choice is Rock and computer's choice is Scissor
case4:(you == 'r' && computer == 'z')
{
        return 1;
}
 
//If user's choice is Scissor and computer's choice is Rock
case5:(you == 'z' && computer == 'r')
{
 return -1;   
 }   
 
// If user's choice is Paper and computer's choice is Scissor
case6:(you == 'p' && computer == 'z')
{    
    return -1;
 }

// If user's choice is Scissor and computer's choice is Paper
case7:(you == 'z' && computer == 'p')
{
    return 1;    
}
}

