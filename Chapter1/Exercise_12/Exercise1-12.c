//Write a proram that prints its input one word per line

#include <stdio.h>
#include <stdlib.h>



int main()
{
  
  int c;
  
  printf("INPUT: ");
  
    while ((c = getchar()) != 10) 
    {
      if(c == 32)
      {
        putchar(10);
      }
      else
      {
       putchar(c);
      }
      
     }
  printf("\n");
  
  return 0;
}