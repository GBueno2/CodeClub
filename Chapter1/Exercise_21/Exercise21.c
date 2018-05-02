
/* 
  Write a program entab that replaces strings of blanks by the minimum number
  of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
  When either a tab or a single blank would suffice to read a tab stop, which
  should you give preference?

*/
#include <stdio.h>

#define TAB_WIDTH 4
 
main(void)
{
  int total = 0;
  int blanks = 0;
  int position = 0;
  int total_tabs = 0;
  int total_spaces = 0;
  int current;

  while((current=getchar())!=EOF)
  {
    if( current == ' ')
    {
      total_spaces++;
    }
    else if(total_spaces>0 && current != ' ')
    {
      total_tabs = total_spaces/TAB_WIDTH;
      blanks = total_spaces % TAB_WIDTH;
      
      while(total_tabs>0)
      {
        putchar('\t');
        total_tabs--;
      }
      
      while(blanks>0)
      {
        putchar('~');
        blanks--;
      }
      total_spaces = 0; 
    }
    if( current == '\n')
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