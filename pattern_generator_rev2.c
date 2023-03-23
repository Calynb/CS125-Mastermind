/********************************************
File: pattern_generator.c
Author: Monica Hyndman
Version: 1.1 March 21, 2023
          1.2 March 23, 2023 added structure
Purpose: to generate a pattern of colors corresponding to number for MasterMind project
Resources: 
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char numbers_to_colors(int number)
{
  if (number==2)
  {
    return 'R';
  }
  
  else if (number==3)
  {
    return 'B';
  }
  
  else if (number==4)
  {
    return 'G';
  }
  
  else if (number==5)
  {
    return 'Y';
  }
  
  else if (number==6)
  {
    return 'P';
  }
  
  else 
  {
    return 'C';
  }
  
  
}

int main()  // int PatternGenerator() 
{
  srand(time(NULL));
  
  // declare random numbers
  typedef struct random_numbers
  {
    char num_1;
    char num_2;
    char num_3;
    char num_4;
  } rand_nums;
  rand_nums rn;
  
  rn.num_1= numbers_to_colors(rand()%6+2);
  rn. num_2= numbers_to_colors(rand()%6+2);
  rn.num_3= numbers_to_colors(rand()%6+2);
  rn.num_4= numbers_to_colors(rand()%6+2);
  
  printf("%c %c %c %c \n",rn.num_1, rn.num_2,rn.num_3, rn.num_4); 

}
