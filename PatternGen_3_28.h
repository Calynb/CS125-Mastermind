/************
* Author: Calyn Bauer, Lauren Bailey, and Monica Hyndman
* CS 125 Project
* Purpose: This header file holds the structure contaiing the random colors/letters generated by numbers_to_colors.c 
* and the random numbers structure
* Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 2.0  Mar 21, 2023
*  Version 2.1  Mar 23, 2023
*  Version 2.2  Mar 28, 2023
*  Version 2.3  Mar 29, 2023
*  Version 2.4  Mar 30, 2023
*************/
#include "headers.h"                  // The header files are listed here

int MasterMind();
char numbers_to_colors(int);
  typedef struct random_numbers       // The rand_nums structure is created here
  {
    char num_1;
    char num_2;
    char num_3;
    char num_4;
  } rand_nums;
  
  rand_nums PatternGenerator();
