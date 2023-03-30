#include "PatternGen.h" 
// Prototypes of functions used
int MasterMind();
char numbers_to_colors(int);
int main()
{
   char ans_1;
   char ans_2;
   FILE* f =  fopen("rules.txt" , "r");   
   char rules[500];
    
   printf ("Do you wanna play Mastermind? (y/n) ");
   scanf("%c" , &ans_1);   

   if (ans_1 == 'y') {
      fgets(rules, 500, f);             // Prints the rules from the text file
      printf("%s \n" , rules);
   }
   printf("Are you ready to play? (y/n)");
   scanf(" %c" , &ans_2);
      while (ans_2 == 'y') { 
      MasterMind();                    // Plays the game
      printf("Do you want to play again?\n");  
      scanf("%c" , &ans2);
      }
   printf("Have a nice day!\n");
}
