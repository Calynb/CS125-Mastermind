/************
* Author: Calyn Bauer, Lauren Bailey, and Monica Hyndman
* CS 125 Project
* Purpose: This file contains all the header files we use 
* and the random numbers structure
* Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 1.2  Mar 21, 2023
*  Version 1.3  Mar 23, 2023
*  Version 1.4  Mar 28, 2023
*  Version 1.5  Mar 29, 2023
*  Version 1.6  Mar 30, 2023
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
