#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PatternGen.h"

int MasterMind()
{
   rand_nums rn;
   rn=PatternGenerator();
   char guess_1, guess_2, guess_3, guess_4;
   int count = 0;
 
  printf("Type your 4 guesses: \n");
  scanf(" %c%*c%c%*c%c%*c%c" , &guess_1, &guess_2, &guess_3, &guess_4);
  printf("GUESS 1=%c GUESS2=%c GUESS3=%c GUESS4=%c \n", guess_1, guess_2, guess_3, guess_4);
     
  while ((guess_1 != rn.num_1) || (guess_2 != rn.num_2) || (guess_3 != rn.num_3) || (guess_4 != rn.num_4) || (count <12)) {
// if loops: if the answer is correct, print 1, if incorrect, print 0
    if (guess_1 == rn.num_1){
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
  printf(" Count: %d \n" ,count);
	  // if ((guess_1 != rn.num_1) && (guess_2 != rn.num_2) && (guess_3 != rn.num_3) && (guess_4 != rn.num_4)) {
	  // break
          // }
  printf("Type your 4 guesses: \n");
  scanf(" %c%*c%c%*c%c%*c%c", &guess_1, &guess_2, &guess_3, &guess_4);
  }

}
