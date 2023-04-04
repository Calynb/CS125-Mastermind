/************
* Author: Calyn Bauer, Lauren Bailey, and Monica Hyndman
* CS 125 Project
* Purpose: Converts numbers to colors. Colors correspond to a capital letter. 
* Resources: George helped us return the rand_nums rn.
*  Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 2.0  Mar 21, 2023
*  Version 2.1  Mar 23, 2023
*  Version 2.2  Mar 28, 2023
*  Version 2.3 Mar 29, 2023
*  Version 2.4  Mar 30, 2023
*************/
#include "headers.h"
char numbers_to_colors(int number)
{
  // create if loops to assign a number to a color/letter.
  if (number==2)                               // Red=2=R
  {
    return 'R';
  }  
  else if (number==3)                          // Blue=3=B
  {
    return 'B';
  }  
  else if (number==4)                          // Green=4=G
  {
    return 'G';
  }  
  else if (number==5)                          // Yellow=5=Y
  {
    return 'Y';
  }  
  else if (number==6)                          // Pink=6=P
  {
    return 'P';
  }  
  else                                         // Cyan=else=C
  {
    return 'C';
  }  
}
rand_nums PatternGenerator() 
{                               
  srand(time(NULL));                            // seed generator
                                 
  rand_nums rn;                                 // declare random numbers
    rn.num_1= numbers_to_colors(rand()%6+2);
    rn.num_2= numbers_to_colors(rand()%6+2);
    rn.num_3= numbers_to_colors(rand()%6+2);
    rn.num_4= numbers_to_colors(rand()%6+2);
  
  printf("%c %c %c %c \n",rn.num_1, rn.num_2,rn.num_3, rn.num_4); // for testing purposes
  return rn;
}
