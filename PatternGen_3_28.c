/************
* Calyn, Lauren, and Monica
* CS 125 Project
* This file contains all the header files we use and the random numbers structure
*************/
#include <stdio.h>            // The header files are listed here
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
