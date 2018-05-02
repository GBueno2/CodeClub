//Write a proram to copy its input to its output, replacing each string of one or more blanks by a single blank.Write


#include <stdio.h>
#include <stdlib.h>



int main()
{
  
  int c;
  int flag = 0;
  
  printf("INPUT: ");
  
    while ((c = getchar()) != 10) // does not each new line
    {
      if(c == 32) // finding a space
      {
        if(flag = 0)
        {
          putchar(c);
          flag = 1;
        }
      }
      else
      {
       flag = 0;
       putchar(c);
      }
      
     }
  printf("\n");
  
  return 0;
}