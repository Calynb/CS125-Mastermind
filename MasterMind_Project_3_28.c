/************
* Author: Calyn Bauer, Lauren Bailey, and Monica Hyndman
* CS 125 Project
* Purpose: This file asks the user if they want to play mastermind, 
* then runs the MasterMind function if they do.
* Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 1.2  Mar 21, 2023
*  Version 1.3  Mar 23, 2023
*  Version 1.4  Mar 28, 2023
*  Version 1.5  Mar 29, 2023
*  Version 1.6  Mar 30, 2023
*************/
#include "PatternGen.h" 
#include "headers.h"
// Prototypes of functions used:
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
      fgets(rules, 500, f);                  // Prints the rules from the text file
      printf("%s \n" , rules);
   }
   printf("Are you ready to play? (y/n)");
   scanf(" %c" , &ans_2);
      while (ans_2 == 'y') { 
      MasterMind();                          // Runs the game function
      printf("Do you want to play again?\n");  
      scanf("%c" , &ans_2);
      }
   printf("Have a nice day!\n");
}
