/*
  Write a program detab that replaces tabs in the input iwth the 
  proper number of blanks to space to the next tab stop.
  Assume a fixed set of tab stops, say every n column.
  Should n be a variable or a symbolic parameter?
  
  Symbolic because it will be a constant value.

*/


#include<stdio.h>

#define TAB_WIDTH 4


main(void)
{
  int total = 0;
  int blanks = 0;
  int position = 0;
  int current;

  while((current=getchar())!=EOF)
  {
    if( current == '\t')
    {
      blanks = TAB_WIDTH;
      while(blanks>0)
      {
        putchar('~');
        blanks--;
      }
    
    }
    else if( current == '\n')
    {
      putchar(current);
      position = 1;
    }
    else
    {
      putchar(current);
      ++position;
    }
  }

  return;
}