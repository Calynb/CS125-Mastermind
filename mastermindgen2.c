#include "PatternGen.h"

int MasterMind() {         
   rand_nums rn;
   rn = PatternGenerator();
   char guess1, guess2, guess3, guess4;
   int count = 0;
   
  printf("Type your 4 guesses: \n");
  scanf("%c" "%c" "%c" "%c" , &guess1, &guess2, &guess3, &guess4);
     
  while ((guess1 != rn.num_1) && (guess2 != rn.num_2) && (guess3 != rn.num_3) && (guess4 != rn.num_4)) {
// create if loop, if the answer is correct, print 1, if incorrect, print 0
    if (guess1 == rn.num_1){
	printf("1 ");
    }
    if (guess1 != rn.num_1){
	printf("0 ");
    }
    if (guess2 == rn.num_2){
	printf("1 ");
    }
    if (guess2 != rn.num_2){
	printf("0 ");
    }
    if (guess3 == rn.num_3){
	printf("1 ");
    }
    if (guess3 != rn.num_3){
	printf("0 ");
    }
    if (guess4 == rn.num_4){
	printf("1 ");
    }
    if (guess4 != rn.num_4){
	printf("0 \n");
    }
  
  count = count + 1;
  printf("Count: %d\n",count);
  
  printf("Type your 4 guesses: \n");
  scanf("%c " "%c " "%c " "%c ", &guess1, &guess2, &guess3, &guess4);
  
  }
}
// These lines are to run it in GDB:
//int main(){
  //  MasterMind();
//}
