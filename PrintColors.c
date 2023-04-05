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
    printf(" \e[1;31m R\e[0m");
  }
  
  
// print B in bold blue
  else if (rn=='B'){
    printf(" \e[1;34m B\e[0m");
  }
  
// print G in bold green
  else if (rn=='G'){
    printf(" \e[1;32m G\e[0m");
  }
  
// print Y in bold yellow
  else if (rn=='Y'){
    printf(" \e[1;33m Y\e[0m");
  }

// print C in bold cyan
  else if (rn=='C'){
    printf(" \e[1;36m C\e[0m");
  }
  
// print P in bold magenta
  else if (rn=='M'){
    printf(" \e[;35m M\e[0m");
  }
  }
