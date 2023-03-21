incude# <stdio.h>
include#<stdlib.h>
include#<time.h>
char numbers_to_colors(int number)
{
    if (number==2){
    //2 is red (R)
        return 'R';
    }
    else if (number==3){
    //3 is blue (B)
        return 'B';
    }
    else if (number==4){
    // 4 is green (G)
        return 'G';
    }
    else if (number==5){
    // 5 is yellow (Y)
        return 'Y';
    }
    else if (number==6){
    // 6 is purple (P)
        return 'P';
    }
    else {
    // Cyan (C)
        return 'C';
    } 
}

int PatternGenrator(){
    srand(time(NULL));
  // declare random numbers
    char num_1= numbers_to_colors(rand()%6+2);
    char num_2= numbers_to_colors(rand()%6+2);
    char num_3= numbers_to_colors(rand()%6+2);
    char num_4= numbers_to_colors(rand()%6+2);
  
    printf("%c , %c, %c, %c \n", num_1, num_2,num_3, num_4); 
}
int MasterMind(){
	PatternGenerator();
	int guess;
// create if loop, if answer is correct, print 1, if incorrect, print 0
	if (guess == r1){
		printf(“1 ”);
    }
    if (guess != r1){
	    printf(“0 ”);
    }
    if (guess == r2){
		printf(“1 ”);
    }
    if (guess != r2){
	    printf(“0 ”);
    }
    if (guess == r3){
		printf(“1 ”);
    }
    if (guess != r3){
	    printf(“0 ”);
    }
    if (guess == r4){
		printf(“1 ”);
    }
    if (guess != r4){
	    printf(“0 ”);
    }

{
