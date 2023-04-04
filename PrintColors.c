/*****************************
* Author: Monica Hyndman
* Purpose: To print letters with corresponding colors
* Resources: Professor Marriot
*  For colors: https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
* Version: 1.1 April 4,2023
******************************/
#include "headers.h"
#include "PatternGen.h"

void PrintColors(char rn)
{
// print R in bold red 
  if (rn=='R'){
    printf("\e[1;31mR");
  }
  
  
// print B in bold blue
  else if (rn=='B'){
    printf("\e[1;34mB");
  }
  
// print G in bold green
  else if (rn=='G'){
    printf(" \e[1;32mG");
  }
  
// print Y in bold yellow
  else if (rn=='Y'){
    printf("\e[1;33mY");
  }

// print C in bold cyan
  else if (rn=='C'){
    printf("\e[1;36mC");
  }
  
// print P in bold purple
  else if (rn=='P'){
    printf("\e[1;45mP");
  }
  }
