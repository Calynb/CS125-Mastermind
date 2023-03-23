#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int masterMind()
{
   PatternGenerator();
   char guess1, guess2, guess3, guess4;
   int count = 0;
   char r1, r2, r3, r4;
 
  printf("Type your 4 guesses: \n");
  scanf("%c" "%c" "%c" "%c" , &guess1, &guess2, &guess3, &guess4);
     
  while ((guess1 != r1) && (guess2 != r2) && (guess3 != r3) && (guess4 != r4) && (count <12)) {
// create if loop, if the answer is correct, print 1, if incorrect, print 0
    if (guess1 == r1){
	printf(“1 ”);
    }
    if (guess1 != r1){
	printf(“0 ”);
    }
    if (guess2 == r2){
	printf(“1 ”);
    }
    if (guess2 != r2){
	printf(“0 ”);
    }
    if (guess3 == r3){
	printf(“1 ”);
    }
    if (guess3 != r3){
	printf(“0 ”);
    }
    if (guess4 == r4){
	printf(“1 ”);
    }
    if (guess4 != r4){
	printf(“0 \n”);
    }
  count = count + 1;
  printf(" Count: %d \n" ,count);
	  
  printf("Type your 4 guesses: \n");
  scanf("%c" "%c" "%c" "%c" , &guess1, &guess2, &guess3, &guess4);
  }

}
