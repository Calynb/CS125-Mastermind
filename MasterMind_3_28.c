/************
* Author: Calyn Bauer, Lauren Bailey, and Monica Hyndman
* CS 125 Project
* Purpose: This file takes the user's guesses and compares 
* them to the code until they get all 4 correct.
* Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 1.2  Mar 21, 2023
*  Version 1.3  Mar 23, 2023
*  Version 1.4  Mar 28, 2023
*  Version 1.5  Mar 29, 2023
*  Version 1.6  Mar 30, 2023
*  Version 1.7  Apr 1, 2023
*************/
#include "PatternGen.h"
#include "headers.h"

int MasterMind()
{
   rand_nums rn;
   rn=PatternGenerator();
   char guess_1, guess_2, guess_3, guess_4;
   int count = 0;
   char congrats[16] = {'C','o','n','g','r','a','t','u','l','a','t','i','o','n','s'} 
 
  printf("Type your 4 guesses: \n");
  scanf(" %c%*c%c%*c%c%*c%c" , &guess_1, &guess_2, &guess_3, &guess_4);
  printf("GUESS 1=%c GUESS 2=%c GUESS 3=%c GUESS 4=%c \n", guess_1, guess_2, guess_3, guess_4);
     
  while ((guess_1 != rn.num_1) || (guess_2 != rn.num_2) || (guess_3 != rn.num_3) || (guess_4 != rn.num_4)) {
    if (guess_1 == rn.num_1){                 // if loops: if the guess is correct, print 1, if incorrect, print 0
	printf("1 ");
    }
    if (guess_1 != rn.num_1){
	printf("0 ");
    }
    if (guess_2 == rn.num_2){
	printf("1 ");
    }
    if (guess_2 != rn.num_2){
	printf("0 ");
    }
    if (guess_3 == rn.num_3){
	printf("1 ");
    }
    if (guess_3 != rn.num_3){
	printf("0 ");
    }
    if (guess_4 == rn.num_4){
	printf("1 ");
    }
    if (guess_4 != rn.num_4){
	printf("0 \n");
    }
  count = count + 1;
    if (count >= 12){                          // If the user cannot guess the code in 12 turns, the game ends
	 printf("Sorry, you are out of turns. The pattern was %c %c %c %c \n",rn.num_1, rn.num_2,rn.num_3, rn.num_4);
	 break;
    }
  printf("Type your 4 guesses: \n");
  scanf(" %c%*c%c%*c%c%*c%c", &guess_1, &guess_2, &guess_3, &guess_4);
  }
  if (count <= 12 && (guess_1==rn.num_1) && (guess_2==rn.num_2) && (guess_3==rn.num_3) && (guess_4==rn.num_4) ){
	  printf("%s You are correct!\n", congrats[16]);
	  printf("The pattern was %c %c %c %c \n",rn.num_1, rn.num_2,rn.num_3, rn.num_4);
  }    
}
