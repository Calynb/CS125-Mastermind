/********************************************
File: pattern_generator.c
Author: Monica Hyndman
Version: 1.1 March 21, 2023
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

int main()
{
  srand(time(NULL));
  
  // declare random numbers
  char num_1= numbers_to_colors(rand()%6+2);
  char num_2= numbers_to_colors(rand()%6+2);
  char num_3= numbers_to_colors(rand()%6+2);
  char num_4= numbers_to_colors(rand()%6+2);
  
  printf("%c , %c, %c, %c \n", num_1, num_2,num_3, num_4); 

}
