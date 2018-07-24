#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Write the program expr, which evaluates a reverse Polish
    expression from the command line, where each operator
    or operand is a separate argument.
    
    For example:
    
      expr 2 3 4 + *
      
      evaluates 2 * (3+4)
*/


#define MAX_STRING_LENGTH     (800)

int main()
{
  int i;
  int Error_Flag=0;

  char String[MAX_STRING_LENGTH];
  scanf("%s", String); //read in string
  char Stack[(strlen(String))];
  
  for(i=0; i<(strlen(String)); i++)
  {
	  if(Error_Flag==1)
	  {
		  break;
	  }
	 switch((String[i]))
	{
	 	 case '+':
	 		 if(i<2) //Incase if we have less than 2 numbers before an operator shows up
	 		 {
	 			 printf("\n\nERROR: Incorrect Polish notation entry. Please try again.\n\n");
	 			 Error_Flag=1;
	 		 }
	 		 else
	 		 {
	 			String[i-2]=String[i-2]+String[i-1];
	 		 }

	 		 break;

	}

  }
  
  
  
  printf("\nThe answer is: %d", String[0]);
  return 0;
}
