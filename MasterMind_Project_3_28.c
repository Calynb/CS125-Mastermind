/************
* Author: Calyn Bauer, Lauren Bailey, and Monica Hyndman
* CS 125 Project
* Purpose: This file asks the user if they want to play mastermind, 
* then runs the MasterMind function if they do.
*  Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 1.2  Mar 21, 2023
*  Version 1.3  Mar 23, 2023
*  Version 1.4  Mar 28, 2023
*  Version 1.5  Mar 29, 2023
*  Version 1.6  Mar 30, 2023
*  Version 1.7  Apr 1, 2023 
*************/
#include "PatternGen.h" 
# include "headers.h"

int MasterMind();                             // Prototypes of functions used
char numbers_to_colors(int);
int main()
{
   char ans1;
   char ans2;
   int x;                                     // for loop variable
   FILE* f =  fopen("rules.txt" , "r");   
   char rules[500];
    
   printf ("Do you wanna play Mastermind? (y/n) ");
   scanf("%c" , &ans1);   
   printf(" \n");

   if (ans1 == 'y'|| ans1=='Y') {
      for (x=0;x<1; x++){
        fgets(rules, 500, f);                //prints the rules from the text file
        printf("%s" , rules);
      }
   printf(" \n");
   printf ("\nAre you ready to play? (y/n) ");
   scanf(" %c" , &ans2);
      while (ans2 == 'y' || ans2=='Y') { 
      MasterMind();                          // Calls the mastermind function
      printf("Do you want to play again? (y/n) ");  
      scanf(" %c" , &ans2);
      }
   }
   printf("Have a nice day!\n");
}
