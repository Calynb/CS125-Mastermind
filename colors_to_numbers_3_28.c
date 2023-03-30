/************
* Calyn, Lauren, and Monica
* CS 125 Project
* Purpose: This file takes the user's guesses and compares them 
* to the code until they get all 4 correct.
* Resources: George helped us return the rand_nums rn.
* Version 1.0  Mar 7, 2023
*  Version 1.1  Mar 9, 2023
*  Version 1.2  Mar 21, 2023
*  Version 1.3  Mar 23, 2023
*  Version 1.4  Mar 28, 2023
*  Version 1.5  Mar 29, 2023
*  Version 1.6  Mar 30, 2023
*************/
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
rand_nums PatternGenerator() 
{
  srand(time(NULL));
  // declare random numbers
    rand_nums rn;
  rn.num_1= numbers_to_colors(rand()%6+2);
  rn.num_2= numbers_to_colors(rand()%6+2);
  rn.num_3= numbers_to_colors(rand()%6+2);
  rn.num_4= numbers_to_colors(rand()%6+2);
  
  printf("%c %c %c %c \n",rn.num_1, rn.num_2,rn.num_3, rn.num_4); 
  return rn;
}
