#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MasterMind();
char numbers_to_colors(int);
  typedef struct random_numbers
  {
    char num_1;
    char num_2;
    char num_3;
    char num_4;
  } rand_nums;
  
  rand_nums PatternGenerator();
