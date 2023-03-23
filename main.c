int Main()
{
   char ans1;
   char ans2;
   FILE* f =  fopen(“rules.txt” , “r”); 
   char rules[500];
    

   printf ("Do you wanna play Mastermind? (y/n) ");
   scanf(“%c” , &ans1);   

   if (ans1 == ‘y’) {
      fgets(rules, 500, f);     
      printf(“%s \n” , rules);
   } 
   printf ("Are you ready to play? (y/n)");
   scanf(“%c” , &ans2);
      while (ans2 == “y”) { 
      masterMind();
      printf(“Do you want to play again?\n”);  
      scanf(“%c” , &ans2);

else {
   printf(“Have a nice day!\n”);
 
}
